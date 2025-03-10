#include<stdio.h>
#include<stdlib.h>
#include "debug.h"

void sortInsert(struct Cell **head, struct Cell *cell){
    if (*head==NULL){
        *head=cell;
        return;
    }
    if ((*head)->value >= cell->value){
        cell->next = *head;
        *head = cell;
        return;
    }
    sortInsert(&((*head)->next),cell);
}

struct Cell *newCell(int value){
    struct Cell *p=malloc(sizeof(p)); 
    if (p==NULL) exit(2);             
    p->value=value;
    return p;
}

void power2(struct Cell *list){
    if (list==NULL) return ;
    list->value = list->value * list->value;
    power2(list->next);
}

void freeList(struct Cell *list){
    if(list==NULL) return;
    free(list);
    freeList(list->next);
}

void printList(struct Cell *list){
    if(list==NULL) printf("\n");
    else {
        printf("%d ",list->value);
        printList(list->next); 
    }
}