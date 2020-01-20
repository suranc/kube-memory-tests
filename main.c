#include <stdio.h>
#include <stdlib.h>

int main() {
    static int usage1 = 620000000;
    int *array = malloc(usage1 * sizeof(int));
    if (array == NULL) {
        fprintf(stderr, "malloc failed\n");
        return -1;
    }
    else
    {
        for (int i = 0; i < usage1; i++) {
            *(array + i) = i*2;
        }
        fprintf(stdout, "Allocated %u bytes\n", usage1*sizeof(int));
        sleep(50);
    }

    static int usage2 = 1000000;
    fprintf(stdout, "About to allocate %u more bytes\n", usage2*sizeof(int));
    int *array2 = malloc(usage2 * sizeof(int));
    if (array2 == NULL) {
        fprintf(stderr, "malloc failed\n");
        return -1;
    }
    else
    {
        for (int i = 0; i < usage2; i++) {
            *(array2 + i) = i*2;
        }
        fprintf(stdout, "Allocated %u bytes\n", usage2*sizeof(int));
        sleep(50);
    }
    
}
