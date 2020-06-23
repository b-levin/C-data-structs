#include <stdlib.h>
#include <stdio.h>

#include "dStruct_lib.h"

int main(int argc, char **argv) {
    struct sLinkedList* test = initSLL();
    add(test, 33, 0);
    add(test, 22, 1);
    printSLL(test);
    return 0;
}