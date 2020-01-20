#include <stdio.h>
#include <stdlib.h>

int main() {
    static int usage = 805306368;
    int *array = malloc(usage * sizeof(int));
    if (array == NULL) {
        fprintf(stderr, "malloc failed\n");
        return -1;
    }
    else
    {
        for (int i = 0; i < usage; i++) {
            //fprintf(stdout, "Appending address to %d byte of allocated memory\n", i);
            *(array + i) = i*2;
        }

        static int testaddr = 805306367;
        fprintf(stdout, "Contents of address: %d = %d\n", testaddr, array[testaddr]);
        fprintf(stdout, "size of int: %d\n", sizeof(int));

        sleep(100000);
    }
    
}
