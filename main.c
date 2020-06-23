#include <stdlib.h>
#include <stdio.h>

#include "dStruct_lib.h"

int main(int argc, char **argv) {
    struct sLinkedList* test = initSLL();
    for (int i = 0; i < 6; i++) {
        add(test, i, i);
    }
    printSLL(test);
    set(test, 6, 1);
    printSLL(test);
    printf("%d\n", get(test, 1));
    return 0;
}