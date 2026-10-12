#include <stdio.h> //goto문 연습

void main()
{
    int hap = 0;
    int i;

    for(i=1; i<=100; i++)
    {
        hap += i;

        if(hap>2000)
            goto p;
    }
p:
    printf("1부터 %d까지 합하면 2000이 넘어요\n", i);
    printf("1부터 %d까지의 합: %d\n", i, hap);

}