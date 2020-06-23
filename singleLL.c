#include "singleLL.h"
#include <stdlib.h>

//initializes the linked list to default values
struct sLinkedList* initSLL() {
    struct sLinkedList* out = (struct sLinkedList*)malloc(sizeof(struct sLinkedList));
    out->size = 0;
    out->head = NULL;
    return out;
}

//adds an item to the linked list at index
int add(struct sLinkedList* list, int item, int index) {
    return -1;
}

//removes and item at index from linked list
int remove(struct sLinkedList* list, int index) {
    return -1;
}

//gets value of item at index
int get(struct sLinkedList* list, int index) {
    return -1;
}

//sets the value of item and index to new item
int set(struct sLinkedList* list, int index, int item) {
    return -1;
}

//returns the size of the linked list
int size(struct sLinkedList* list) {
    return list->size;
}

//returns a pointer to the linked list in string form
char *toString(struct sLinkedList* list) {
    return "";
}