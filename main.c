#include <stdlib.h>
#include <stdio.h>

#include "dStruct_lib.h"

int main(int argc, char **argv) {
    struct sLinkedList* test = initSLL();
    puts("worked");
    free(test);
    return 0;
}