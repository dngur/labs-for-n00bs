#include <stdio.h>
#include <string.h>

// memory

typedef struct {
    char buf1[8000000];
    char buf2[8000000];
} stDemo1;

typedef struct {
    char buf3[8000000];
    char buf4[8000000];
} stDemo2;

int main()
{
    stDemo1 *s1 = (void *)malloc(sizeof(stDemo1));
    stDemo2 *s2 = (void *)malloc(sizeof(stDemo2));

    //strncpy(s1.buf1, "s1.buf1012345678", sizeof(s1.buf1));
    //strncpy(s1.buf2, "s1.buf20", sizeof(s1.buf2));

    //strncpy(s2.buf3, "s2.buf301234567890ABCDEFGHIJKLMN", sizeof(s2.buf3));
    //strncpy(s2.buf4, "s2.buf4012345678", sizeof(s2.buf4));

    //printf("%ld  %ld  %ld  %ld\n", sizeof(s1->buf1), sizeof(s1->buf2), sizeof(s2->buf3), sizeof(s2->buf4));

    memset(s1->buf1, 'a', sizeof(s1->buf1));
    memset(s1->buf2, 'b', sizeof(s1->buf2));
    memset(s2->buf3, 'c', sizeof(s2->buf3));
    memset(s2->buf4, 'd', sizeof(s2->buf4));    

    //char *p1 = (char *)s1;
    //char *p2 = (char *)s2;

    printf("%ld\n", sizeof(stDemo1));

    printf("p1+ : %c\n", *(s1 + sizeof(stDemo1) + 1000));
    printf("p2 : %c\n", (char)s2->buf3);
    printf("p2 - 1 : %c\n", *(s2 - 1));



    free(s1);
    free(s2);









    //int internal_i;

    //int *p1 = &internal_i;
    //int *p2 = &outer_i;

    //printf("internal: %d   outer: %d\n", *p1, *p2);


    return 0;
}