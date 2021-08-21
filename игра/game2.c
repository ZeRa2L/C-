#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;

    srand(time(NULL));

    i = rand();
    printf("%d\n", i % 101);
    return 0;
}