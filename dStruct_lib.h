#ifndef DSTRUCT_LIB_H_
#define DSTRUCT_LIB_H_

#include "singleLL.h"

//singularly LL methods
struct sLinkedList* initSLL();
struct Node* initNode(int);
int add(struct sLinkedList*, int, int);
int removeNode(struct sLinkedList*, int);
int get(struct sLinkedList*, int);
int set(struct sLinkedList*, int, int);
int size(struct sLinkedList*);
void printSLL(struct sLinkedList*);
void freeSLL(struct sLinkedList*);

#endif