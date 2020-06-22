#ifndef SINGLELL_H_
#define SINGLELL_H_

//node struct
struct Node {
    int value;
    struct Node* next;
};

//struct for the singly linked list
struct sLinkedList {
    struct Node* head;
    int size;
};

#endif