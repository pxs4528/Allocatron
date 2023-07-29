#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    clock_t start, end;
    start = clock();
    int i;
    int *ptr[10000];

    for(i = 0; i< 10000; i++)
    {
        ptr[i] = (int*)malloc(6);
    }

    for(i = 0; i< 10000;i++)
    {
        if(i % 3)
        {
            free(ptr[i]);
        }

    }
    end = clock();
    printf("Time taken: %f\n", (double)(end - start)/CLOCKS_PER_SEC);
    return 0;
}