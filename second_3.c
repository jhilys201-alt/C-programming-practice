#include <stdio.h>

int main()
{
    int a, b;
    int result;
    char k; // 연산자를 입력받을 변수를 문자형으로 선언

    printf("첫번째 숫자 입력: ");
    scanf("%d", &a);

    printf("+ - * / %%: ");
    scanf(" %c", &k); // %c는 문자열 서식문자. %c앞에 공백이 있어야 함.

    printf("두번째 숫자 입력: ");
    scanf("%d", &b);

    if(k == '+'){
        result = a + b;
        printf("%d + %d = %d\n", a, b, result);
    }

    if(k == '-'){
        result = a - b;
        printf("%d - %d = %d\n", a, b, result);
    }

    if(k == '*'){
        result = a * b;
        printf("%d * %d = %d\n", a, b, result);
    }

    if(k == '/'){
        if(b != 0){
            result = a / b;
            printf("%d / %d = %d\n", a, b, result);
        }
        else{
            printf("0으로 나누면 안됩니다.");
        }
    }

    if(k == '%'){
        if(b != 0){
            result = a % b;
            printf("%d %% %d = %d\n", a, b, result);
        }
        else{
            printf("0으로 나누면 안됩니다.");
        }
    }

    return 0;
}
