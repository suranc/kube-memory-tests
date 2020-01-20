#include <stdio.h>
#include <stdlib.h>

int main() {
    static int usage = 730000000;
    int *array = malloc(usage * sizeof(int));
    if (array == NULL) {
        fprintf(stderr, "malloc failed\n");
        return -1;
    }
    else
    {
        for (int i = 0; i < usage; i++) {
            *(array + i) = i*2;
        }

        fprintf(stdout, "Size of allocated memory: %u\nInteger Count: %u", usage*sizeof(int),usage);

        sleep(100000);
    }
    
}
