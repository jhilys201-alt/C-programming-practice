#include <stdio.h>  // 동전 교환 프로그램

int main()
{
    int money;
    int C500, C100, C50, C10;

    printf("교환할 돈은?: ");
    scanf("%d", &money);

    C500 = money / 500;
    money = money % 500;

    C100 = money / 100;
    money = money % 100;

    C50 = money / 50;
    money = money %50;

    C10 = money / 10;
    money = money % 10;

    printf("오백 원 짜리 ==> %d개\n", C500);
    printf("백 원 짜리 ==> %d개\n", C100);
    printf("오십 원 짜리 ==> %d개\n", C10);
    printf("십 원 짜리 ==> %d개\n", C50);
    printf("바꾸지 못한 잔돈 ==> %d개\n", money);

    return 0;
}