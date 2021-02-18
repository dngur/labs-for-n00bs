#include <stdio.h>

// define vs declaration

int outer_i;

int main()
{
    int internal_i;

    printf("internal: %d   outer: %d\n", &internal_i, &outer_i);

    //int *p1 = &internal_i;
    //int *p2 = &outer_i;

    //printf("internal: %d   outer: %d\n", *p1, *p2);


    return 0;
}