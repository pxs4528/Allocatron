#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start, end;
    start = clock();
  printf("Spliiting\n");

  char * ptr1 = ( char * ) malloc(10000);
  char * ptr2 = ( char * ) malloc(10000);
  char * ptr3 = ( char * ) malloc(10000);

  free( ptr1 );

  free( ptr2 );
  char * ptr9 = ( char * ) malloc( 1024 );

  free( ptr3 );
  free (ptr9);
  end = clock();
  printf("Time taken: %f", (double)(end - start)/CLOCKS_PER_SEC);

  return 0;
}
