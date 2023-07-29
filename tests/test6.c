//test 6 for stress testing coallescing
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start, end;
    start = clock();
  printf("Running test 6\n");
    int *a = malloc(8);
    int *b = malloc(8);
    int *c = malloc(8);
    int *d = malloc(8);
    int *e = malloc(8);
    int *f = malloc(8);
    int *g = malloc(8);
    int *h = malloc(8);
    int *i = malloc(8);
    int *j = malloc(8);
    int *k = malloc(8);

    a = a;
    b = b;
    c = c;
    d = d;
    e = e;
    f = f;
    g = g;
    h = h;
    i = i;
    j = j;
    k = k;

    free(a);
    free(b);
    free(c);

    int *l = malloc(8);
    int *m = malloc(8);

    l = l;
    m = m;

    free(d);
    free(e);
    free(f);

    int *n = malloc(8);
    int *o = malloc(8);

    n = n;
    o = o;

    free(g);
    free(h);
    end = clock();
    printf("Time taken: %f\n", (double)(end - start)/CLOCKS_PER_SEC);
  return 0;
}