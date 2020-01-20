#include <stdio.h>
#include <stdlib.h>

int main() {
    static int usage = 620000000;
    int *array = malloc(usage * sizeof(int));
    if (array == NULL) {
        fprintf(stderr, "malloc failed\n");
        return -1;
    }
    else
    {
        for (int i = 0; i < (usage - 500001); i++) {
            *(array + i) = i*2;
        }
        fprintf(stdout, "Allocated %u bytes\n", (usage - 500000)*sizeof(int));
        sleep(5);

        *(array + (usage - 1)) = (usage - 1)*2;

        fprintf(stdout, "Total allocated bytes: %u\n", usage*sizeof(int));

        sleep(100000);
    }
    
}
