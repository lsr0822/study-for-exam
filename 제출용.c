
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int num, i;
    scanf("%d", &num);
    for (i = 1; i <= 9; i++)
    {

        printf("%d * %d = %d\n", num, i, i * num);
    }
    return 0;
}*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d", &c);

    for (a = 0; a <= c; a++)
    {
        for (b = 0; b <= c; b++)
        {

            printf("%d", b);
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
    scanf("%d", &c);
    for (a = 0; a <= c; a++)
    {
        for (b = 0; b <= c; b++)
        {
            printf("%d", a);
        }
        printf("\n");
    }
}*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d", &c);
    for (a = 0; a <= c; a++)
    {
        for (b = 0; b <= a; b++)
        {
            printf("%d", b);
        }
        printf("\n");
    }

    return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int d = (n - 1) / 2;
    for (int a = d; 1 <= a; a--)
    {
        for (int b = 1; b <= a; b++)
        {
            printf("^");
        }
        printf("\n");
    }

    return 0;
}*/
//*사각형
/*#define _CRT_SRCURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < n; b++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}*/
//*피라미드
/*#define _CRT_SRCURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b <= a; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/
// *역 삼각
/*#define _CRT_SRCURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int a = 0; a < n; a++)
    {
        for (int b = n; a <= b; b--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

/*#define _CRT_SRCURE_NO_WARNINGS
#include <stdio.h>
int main()
     printf(" ");
        }
        for (int c = 0; c <= a; c++)
        {
            printf("*");
        {
    int n;
    scanf("%d", &n);
    for (int a = 0; a < n; a++)
    {
        for (int b = n; a <= b; b--)
        {
       }
        printf("\n");
    }
    return 0;
}*/

// 2회차
// 1번
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int a = 1; a <= n; a++)
    {
        printf("%d ", a);
    }
    return 0;
}*/
// 2번
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < n; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/
// 3번
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b <= a; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/
// 4번
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int a = 1; a <= n; a++)
    {
        if (a % 2 == 0)
        {
            continue;
        }
        printf("%d ", a);
    }

    return 0;
}*/

// 5번
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < n; b++)
        {
            if (a == 0 || a == n - 1)
            {
                for (int c = 0; c < 1; c++)
                {
                    printf("A");
                }
            }
            else
            {
                if (b == 0 || b == n - 1)
                {
                    for (int d = 0; d < 1; d++)
                    {
                        printf("A");
                    }
                }
                else
                {
                    for (int d = 0; d < (n - 3) / 2; d++)
                        printf("B");
                }
            }
        }
        printf("\n");
    }

    return 0;
}*/
// 6번
/* #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n, a;
    scanf("%d", &n);
    for (a = 0; a < n; a++)
    {
        for (int b = n; a <= b; b--)
        {
            printf(" ");
        }

        for (int b = 0; b <= a; b++)
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

    int n, g, j;
    scanf("%d", &n);

    for (int a = 1; a <= n; a++)
    {
        for (int b = 1; b <= n - a; b++)
        {
            printf("");
        }
        for (int b = 1; b <= a * 2 - 1; b++)
        {
            printf("*");
            j = j + 2;
        }
        for (int b = 1; b <= n - a; b++)
        {
            printf("");
        }
        printf("\n");
    }

    return 0;
}*/

// 8
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (int c = 1; c <= a * b; c++)
    {
        if (c % a == 0 && c % b == 0)
        {
            printf("%d", c);
            break;
        }
    }

    return 0;
}*/

// 9번
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n > 0)
    {

        printf("%d", n % 10);
        n = n / 10;
    }

    return 0;
}
*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    char name[10];
    int age;
    double height;
    scanf("%s %d %lf", name, &age, &height);
    printf("이름: %s,나이:%d살, 키: %.1lf cm\n", name, age, height);
    return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a;
    printf("1.햄버거\n2.피자\n3.떡볶이\n");
    scanf("%d", &a);
    if (a == 1)
        printf("선택한 메뉴:햄버거");
    else if (a == 2)
        printf("선택한 메뉴:피자");
    else if (a == 3)
        printf("선택한 메뉴:떡볶이");
    else
        printf("없는 메뉴입니다");
    return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    double kor, eng, math;
    scanf("%lf %lf %lf", &kor, &eng, &math);
    printf("총점:%.0lf, 평균:%.1lf", kor + eng + math, (kor + eng + math) / 3);
    return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("몫:%d\n나머지:%d\n", a / b, a % b);
    return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int c;
    double a, b;
    scanf("%d", &c);
    if (c == 1)
    {
        scanf("%lf", &a);
        printf("%.0lf inch=%.2lfcm", a, a * 2.54);
    }
    else
    {
        scanf("%lf", &a);
        printf("%.0lfF=%.2lfC", a, (a - 32) * 5 / 9);
    }
    return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%d ", a);
        if (b > c)
            printf("%d %d", b, c);
        else
            printf("%d %d", c, b);
    }
    else if (b > a && b > c)
    {
        printf("%d ", b);
        if (a > c)
            printf("%d %d", a, c);
        else
            printf("%d %d", c, a);
    }
    else
    {
        printf("%d ", c);
        if (a > b)
            printf("%d %d", a, b);
        else
            printf("%d %d", b, a);
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

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    scanf("%d", &a);
    b = a / 1000;
    c = (a % 1000) / 100;
    d = (a % 100) / 10;
    e = a % 10;
    if (b == c || c == d || e == d)
        printf("NO");
    else
        printf("YES");
    return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int a = 0; a < n; a++)
    {
        if (a % 2 == 0)
            printf("%d ", a);
    }
    return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    if (m + n <= 10)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                printf(" ");
            }
            for (int j = 0; j <= i; j++)
            {
                printf("%d", m + j);
            }
            for (int j = 0; j < n - i - 1; j++)
            {
                printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int age;
    char name[10];
    scanf("%s %d", name, &age);
    printf("%s(%d생)", name, age);
    return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d %d %d", c, b, a);
    return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%.3lf", a + b);
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    double n;
    scanf("%lf", &n);
    printf("%.0lf", n);
    return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d시간 %d분 %d초 ", n / 3600, (n % 3600) / 60, (n % 3600) % 60);
    return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("정수 평균:%.d\n실수 평균:%.2lf", (int)(a + b + c) / 3, (a + b + c) / 3);
    return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n > 0)
        printf("양수");
    else
        printf("음수");
    if (n % 2 == 0)
        printf("짝수");
    else
        printf("홀수");
    return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int t, r;
    scanf("%d %d", &t, &r);
    if (r >= 0 && r <= 100)
    {
        if (t >= 30)
            printf("매우 더움\n");
        if (t >= 20 && t < 30)
            printf("따뜻함\n");
        if (t >= 10 && t < 20)
            printf("선선함\n");
        if (t < 10)
            printf("추움\n");
        if (r >= 60)
            printf("우산 꼭 챙기세요\n");
        if (t >= 25 && r >= 50)
            printf("무더위 + 비 조심!\n");
        if (t >= 10 && r < 20)
            printf("선선함\n");
        if (t < 5 && r >= 30)
            printf("눈 또는 진눈깨비 가능성\n");
    }
    return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    for (int a = 1; a <= n; a++)
    {
        if (a % 2 == 1)
        {
            sum += a;
        }
    }
    printf("%d\n", sum);
    return 0;
}*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n, d = 0;
    scanf("%d", &n);
    int a, b;
    for (a = 2; a <= 9; a++)
    {
        if (a % 2 == 1)
        {
            printf("== %d단 ==\n", a);
            for (b = 1; b <= 5; b++)
            {
                printf("%dX%d=%d\n", a, b, a * b);
            }
        }
    }

    return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int a = 0; a <= n / 2; a++)
    {
        for (int b = 0; b < n / 2 - a; b++)
        {
            printf("^");
        }
        for (int b = 0; b < 2 * a + 1; b++)
        {
            printf("*");
        }
        for (int b = 0; b < n / 2 - a; b++)
        {
            printf("^");
        }
        printf("\n");
    }

    return 0;
}*/

/*#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < n; b++)
        {
            if (a == 0 || a == n - 1)
                printf("A");
            else
            {
                if (b == 0 || b == n - 1)
                    printf("A");
                else
                    printf("B");
            }
        }
        printf("\n");
    }

    return 0;
}*/

/*#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int a = 0; a < n - 1; a++)
    {
        for (int b = 0; b < n - a - 1; b++)
        {
            printf(" ");
        }
        for (int b = 0; b < 2 * a + 1; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < a; b++)
        {
            printf(" ");
        }
        for (int b = 0; b < 2 * n - 2 * a - 1; b++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}*/

/*#define _CRT_SECUE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < n; b++)
        {
            if (a == 0 || a == n - 1)
            {
                printf("A");
            }
            else
            {
                if (b == 0 || b == n - 1)
                {
                    printf("A");
                }
                else
                    printf("B");
            }
        }
        printf("\n");
    }
    return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int a = 0; a < n - 1; a++)
    {
        for (int b = 0; b < n - a - 1; b++)
        {
            printf(" ");
        }
        for (int b = 0; b < 2 * a + 1; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < a; b++)
        {
            printf(" ");
        }
        for (int b = 0; b < 2 * n - 2 * a - 1; b++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}*/