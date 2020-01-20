#include <stdio.h>
#include <stdlib.h>

int main() {
    static int usage = 700000000;
    int *array = malloc(usage * sizeof(int));
    if (array == NULL) {
        fprintf(stderr, "malloc failed\n");
        return -1;
    }
    else
    {
        for (int i = 0; i < (usage - 2); i++) {
            *(array + i) = i*2;
        }
        fprintf(stdout, "Allocated %u bytes\n", (usage - 2));
        sleep(5);

        *(array + (usage - 1)) = (usage - 1)*2;

        fprintf(stdout, "Size of allocated memory: %u\nInteger Count: %u", usage*sizeof(int),usage);

        sleep(100000);
    }
    
}
