#include "singleLL.h"
#include <stdlib.h>

//initializes the linked list to default values
struct sLinkedList* initSLL() {
    struct sLinkedList* out = (struct sLinkedList*)malloc(sizeof(struct sLinkedList));
    out->size = 0;
    out->head = NULL;
    return out;
}

