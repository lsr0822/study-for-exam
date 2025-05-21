// oj.8-1
/*#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void draw_box(int h, int w, char c1, char c2)
{
    for (int i = 0; i < h; i++)
    {
        for (int ii = 0; ii < w; ii++)
        {
            if (i == 0 || i == h - 1)
            {
                printf("%c", c1);
            }
            else
            {
                if (ii == 0 || ii == w - 1)
                {
                    printf("%c", c1);
                }
                else
                    printf("%c", c2);
            }
        }
        printf("\n");
    }
}
double area(int h, int w)
{
    return (float)(h * w);
}
int main()
{

    int h, w = 0;
    char c1, c2;
    scanf("%d %d %c %c", &h, &w, &c1, &c2);
    draw_box(h, w, c1, c2);
    printf("area is %f\n", area(h, w));
    return 0;
}*/
// oj.8-2 좀 어려웠음
/*#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int count1;
int count2;
void print_line(int s)
{
    if (s >= 0)
    {
        printf("*");
        count2++;
    }
    for (int i = 0; i < s - 2; i++)
    {
        printf("-");
        count1++;
    }
    if (s >= 2)
    {
        printf("*");
        count2++;
    }
    printf("\n");
}
int main()
{
    int s;
    count1 = 0;
    count2 = 0;
    while (1)
    {
        scanf("%d", &s);
        if (0 >= s || s > 9)
            break;
        print_line(s);
    }
    printf("the number of - prints is %d\n", count1);
    printf("the number of * prints is %d\n", count2);
    return 0;
}*/

// oj.8-3
/*#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_sum(int n)
{
    static int sum = 0;
    static int first = 1;

    if (first)
    {
        sum = 0;
        first = 0;
    }

    printf("%d", n);
    sum += n;

    if (n > 0)
    {
        printf("+");
        print_sum(n - 1);
    }
    else
    {
        printf("=%d\n", sum);
        first = 1;
    }
}

void main()
{
    int n;
    while (1)
    {
        scanf("%d", &n);
        if (n <= 0)
            break;
        print_sum(n);
    }
}*/
