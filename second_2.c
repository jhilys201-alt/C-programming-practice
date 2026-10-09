#include <stdio.h>

void main()
{
    int a, b;
    int result;
    int k;

    printf("첫번째 숫자 입력: ");
    scanf("%d", &a);

    printf("<1>덧셈, <2>뺄셈, <3>곱셈, <4>나눗셈");
    scanf("%d", &k);

    printf("두번째 숫자 입력: ");
    scanf("%d", &b);

    if(k == 1){
        result = a + b;
        printf("%d + %d = %d\n", a, b, result);
    }

    if(k == 2){
        result = a - b;
        printf("%d - %d = %d\n", a, b, result);
    }

    if(k == 3){
        result = a * b;
        printf("%d * %d = %d\n", a, b, result);
    }

    if(k == 4){
        result = a / b;
        printf("%d / %d = %d\n", a, b, result);
    }
}