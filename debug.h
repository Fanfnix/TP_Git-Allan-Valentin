#ifndef malloc_h
#define malloc_h


struct Cell {
    int value;
    struct Cell *next;
};

struct Cell *newCell(int value){
    struct Cell *p=malloc(sizeof(p)); 
    if (p==NULL) exit(2);             
    p->value=value;
    return p;
}

void sortInsert(struct Cell **head, struct Cell *cell);
void power2(struct Cell *list);
void freeList(struct Cell *list);
void printList(struct Cell *list);

#endif