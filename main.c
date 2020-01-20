#include <stdio.h>
#include <stdlib.h>

int main() {
    static int usage = 1000;
    int *array = malloc(usage * sizeof(int));
    if (array == NULL) {
        fprintf(stderr, "malloc failed\n");
        return -1;
    }
    else
    {
        for (int i = 0; i < usage; i++) {
            fprintf(stdout, "usage %d", i);
        }

        sleep(100000);
    }
    
}
