#include <stdio.h>  // 입력된 두 실수의 산술 연산

int main()
{
    float a, b;
    float result;

    printf("첫 번째 계산할 값을 입력하세요 => ");
    scanf("%f", &a);

    printf("두 번째 계산할 값을 입력하세요 => ");
    scanf("%f", &b);

    result = a + b;
    printf("%5.2f + %5.2f = %5.2f\n", a, b, result);

    result = a - b;
    printf("%5.2f - %5.2f = %5.2f\n", a, b, result);

    result = a * b;
    printf("%5.2f * %5.2f = %5.2f\n", a, b, result);

    result = a / b;
    printf("%5.2f / %5.2f = %5.2f\n", a, b, result);

    result = (int)a % (int)b;  // 나머지 연산을 위해 실수를 정수로 강제 형 변환한다.
    printf("%d %% %d = %d\n", (int)a, (int)b, (int)result);

    return 0;
}
