/*#include <stdio.h>

int main()
{
    int a;
    int b;
    int l;
    int r;
    scanf("%d", &a);
    scanf("%d", &b);
    l = a * b;
    r = 2 * (a + b);
    printf("직사각혀의 넓이: %d₩n", l);
    printf("직사각형의 둘레: %d₩n", r);

    return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int a,b,c,d,e,f;
    printf("투입한 돈:");
    scanf("%d",&a);

    printf("물건 값:");
    scanf("%d",&b);

    d=(a-(c*500))%100;
    e=(a-(c*500+d*100))%10;
    f=a-b;
    printf("거스름돈:%d\n", f);

    printf("500원 동전의 개수: %d\n",c);
    printf("100원 동전의 개수: %d\n",d);
    printf("10원 동전의 개수:%d\n",e);

    return 0;
}
*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int number;
    scanf("%d", &number);
    switch (number)
    {
    case 1:
        printf("월요일\n");
        break;
    case 2:
        printf("화요일\n");
        break;
    case 3:
        printf("수요일\n");
        break;
    case 4:
        printf("목요일\n");
        break;
    case 5:
        printf("금요일\n");
        break;
    case 6:
        printf("토요일\n");
        break;
    case 7:
        printf("일요일\n");
        break;
    default:
        printf("에러났어요!\n");
    }

    return 0;
}*/

// for문
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    for (int i = 0; i <= 12; ++i)
    {
       swhtch(i)
       {case 0:
    printf("존재하지 않습니다");
    break;
    case 12,1,2;
    printf("겨울");
    break;
    case 3,4,5
    p



    return 0;
}*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int num1;
    int num2;
    scanf("%d\n", &num1);
    scanf("%d\n", &num2);
    if (num1 == num2)
    {
        printf("-1");
    }
    else
    {
        printf("1");
    }
    return 0;
}*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int mabnb nbin(void)
{
    int A;
    int B;
    int C;
    int d;
    int e;
    scanf("%d %d %d", &A, &B, &C);
    d = C / 60;
    e = C % 60;
    printf("%d %d", (A + d),(B+e));

    return 0;
}
*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int a;
    int b;
    int c;
    int average;
    scanf("%d %d %d", &a, &b, &c);
    average = (a + b + c) / 3;
    printf("%0d\n", average);
    return 0;
}*/
/*#define _CRT_SECURE_NO WARNINGS
#include <stdio.h>
int main()
{
    int f;
    scanf("%d", &f);
    for (int i = f; i >= 0; i--)
    {
        for (int ii = f; i <= ii; ii--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if ((a > b || a > c && c + b > a) || (b > a || b > c && a + c > b) || (c > a || c > b && a + b > c))
    {
        if (a == b && b == c)
        {
            printf("정삼각형");
        }
        else if (a == b || b == c || c == a)
        {
            printf("이등변 삼각형");
        }
        else if ((c * c) == (a * a) + (b * b) || (a * a) == (b * b) + (c * c) || (b * b) == (a * a) + (c * c))
        {
            printf("직각 삼각형");
        }
        else
        {
            printf("그냥 삼각형");
        }
    }
    else
    {
        printf("삼각형이 아닙니다.");
    }
    return 0;
}*/
// 자동자판기 시뮬레이션

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int drink, money, lmoney;
    char name;
    printf("음료를 선택하세요(1~4):");
    scanf("%d", &drink);

    if (1 <= drink && drink <= 4)
    {
        printf("금액을 투입하세요:");
        scanf("%d", &money);

        if (drink == 1)
            drink = 1500;
        else if (drink == 2)
            drink = 1300;
        else if (drink == 3)
            drink = 1000;
        else
            drink = 1700;

        lmoney = money - drink;

        if (lmoney >= 0)
        {

            if (drink == 1)
                printf("선택한 음료:콜라,잔돈: %d원\n", lmoney);
            else if (drink == 2)
                printf("선택한 음료:사이다,잔돈: %d원\n", lmoney);
            else if (drink == 3)
                printf("선택한 음료:물,잔돈: %d원\n", lmoney);
            else
                printf("선택한 음료:이온음료,잔돈: %d원\n", lmoney);
        }
        else
            printf("금액이 부족합니다.");
    }

    else
        printf("잘못된 선택입니다.");

    return 0;
}*/
// ATM 지폐 계산기
/*#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int money;
    scanf("%d", &money);
    if (money > 1000)
    {
        printf("50000원:%d장\n", money / 50000);
        printf("10000원:%d장\n", (money % 50000) / 10000);
        printf("5000원:%d장\n", ((money % 50000) % 10000) / 5000);
        printf("1000원:%d장\n", (((money % 50000) % 10000) % 5000) / 1000);
    }
    else
        printf("천원단위로 입력하세요.");
    return 0;
}*/
// 윤년 판별기
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int year;
    scanf("%d", &year);
    if (year % 4 == 0 || year % 100 == 0)
        printf("윤년\n");
    else if (year % 400 == 0)
        printf("윤년\n");
    else
        printf("윤년이 아닙니다\n");

    return 0;
}*/
// 세자리 수의 각 자리수 합 구하기
/*#define _CRT_SECURE_NO WARNINGS
#include <stdio.h>
int main()
{
    int number, hun, ten, one;
    scanf("%d", &number);
    hun = number / 100;
    ten = (number - (hun * 100)) / 10;
    one = (number - (hun * 100) - (ten * 10));
    printf("%d+%d+%d=%d", hun, ten, one, hun + ten + one);
    return 0;
}*/

// 미니 뱅킹 시스템 (예금/출금/잔액 확인)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int base = 0;
    int money, num;
    scanf("%d", &num);
    if (1 <= num && num <= 4)
    {
        if (num == 1)
        {
            printf("입금할 금액:");
            scanf("%d", &money);
            printf("입금완료.현재 잔액:%d원\n", base + money);
        }
        else if (num == 2)
        {
            printf("출금할 금액:");
            scanf("%d", &money);
            if (base >> money)

                printf("출금완료/현재 잔액%d원\n", base - money);

            else
                printf("잔액이 부족합니다");
        }
        else if (num == 3)
            printf("잔액은 %d입니다.", base);
        else
            printf("프로그램을 종료합니다.");
    }
    else
        printf("올바른 번호를 입력하세요");
    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a, i;
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {

        for (int j = 1; j <= a; j++)
        {
            printf("*");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}