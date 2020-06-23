#include "singleLL.h"
#include <stdlib.h>
#include <stdio.h>

//initializes the linked list to default values
struct sLinkedList* initSLL() {
    struct sLinkedList* out = (struct sLinkedList*)malloc(sizeof(struct sLinkedList));
    out->size = 0;
    out->head = NULL;
    return out;
}

//creates a node with the value of the int value
struct Node* initNode(int item) {
    struct Node* out = (struct Node*)malloc(sizeof(struct Node));
    out->value = item;
    out->next = NULL;
    return out;
}

/*
adds an item to the linked list at index
returns -1 on errow, item position on success
*/
int add(struct sLinkedList* list, int item, int index) {
    struct Node* newNode = initNode(item);
    //index invalid
    if (index < 0 || index > list->size) {
        return -1;
    //list empty
    } else if (list->size == 0) {
        //invalid index
        if (index != 0) {
            return -1;
        } else {
            list->head = newNode;
            list->size++;
            return 0;
        }
    } else {
        struct Node* current = list->head;
        int pos = 0;
        //iterate through linkedlist until one before index
        while (pos != (index-1)) {
            current = current->next;
        }
        struct Node* next = current->next;
        current->next = newNode;
        newNode->next = next;
        list->size++;
        return pos++;
    }
}

//removes and item at index from linked list
int removeNode(struct sLinkedList* list, int index) {
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
void printSLL(struct sLinkedList* list) {
    if (list->size == 0) {
        puts("Error: list empty");
    } else {
        struct Node* current = list->head;
        struct Node* next = current->next;
        printf("%d", current->value);
        while (next != NULL) {
            current = next;
            next = current->next;
            printf(", %d", current->value);
        }
        puts("");
    }
}

//frees the linkedlist
void freeSLL(struct sLinkedList* list) {
    return NULL;
}