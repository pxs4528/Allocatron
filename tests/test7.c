#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_BLOCKS 1000
#define MAX_BLOCK_SIZE 1024

int main() {
    clock_t start, end;
    start = clock();
    void* blocks[NUM_BLOCKS];

    // Allocate memory blocks
    for (int i = 0; i < NUM_BLOCKS; i++) {
        size_t block_size = (i % MAX_BLOCK_SIZE) + 1;
        blocks[i] = malloc(block_size);
        if (blocks[i] == NULL) {
            printf("Error: Out of memory\n");
            exit(1);
        }
    }

    // Free memory blocks
    for (int i = 0; i < NUM_BLOCKS; i++) {
        free(blocks[i]);
    }
    
        end = clock();
    printf("Time taken: %f\n", (double)(end - start)/CLOCKS_PER_SEC);
    return 0;
}
