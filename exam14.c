#include <stdio.h> // 중첩 for문으로 구구단 출력

void main()
{
    int i, k;

    for(i=2; i<=9; i++)
    {
        printf(" #제%d단#", i);
    }
    
    printf("\n\n");

    for(i=1; i<=9; i++)
    {
        for(k=2; k<=9; k++)
        {
            printf("%2dX%2d=%2d", k, i, k*i);
        }
        printf("\n");
    }
}