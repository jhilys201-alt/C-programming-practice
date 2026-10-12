#include <stdio.h>

void main()
{
    int a, b;
    int basu, i;
    int hap = 0;

    printf("합계의 시작값: ");
    scanf("%d", &a);

    printf("합계의 끝값: ");
    scanf("%d", &b);

    printf("배수: ");
    scanf("%d",&basu);

    i = a;
    while(i <= b)
    {
        if(i % basu == 0)
            hap += i;

        i++;
    }

    printf("%d부터 %d까지의 %d배수의 합계: %d", a, b, basu, hap);

}