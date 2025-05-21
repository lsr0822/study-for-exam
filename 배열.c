// 2025.05.16

// oj.7-1
/*#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int N[10];
    printf("input the 10 integer values : ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &N[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%2d : ", N[i]);

        for (int ii = 0; ii < N[i]; ii++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}*/
// oj.7-2
/*#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int score[3][5], i, j;

    for (i = 0; i < 3; i++)
    {
        printf("%dth kor eng mat score : ", i + 1);
        for (j = 0; j < 3; j++)
            scanf("%d", &score[i][j]);

        score[i][3] = score[i][0] + score[i][1] + score[i][2]; // sum
        score[i][4] = score[i][3] / 3;                         // avg (정수형 평균)
    }

    printf("kor     eng    mat    sum    avg\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
            printf("%-8d", score[i][j]);
        printf("\n");
    }

    return 0;
}*/

// oj.7-3
/*#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int arr[5], i, j, temp;

    printf("input the 5 values : ");
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("After bubble sorting : ");
    for(i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}*/
// oj.7-4
/*#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int num[100], n, sum = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        sum += num[i];
    }

    printf("%d\n", sum / n);

    return 0;
}*/

// oj.7-5
/*#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int num[5], n;
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 5 - 1; i++)
    {
        for (int ii = 0; ii < 5 - 1 - i; ii++)
        {
            if (num[ii] > num[ii + 1])
            {
                n = num[ii + 1];
                num[ii + 1] = num[ii];
                num[ii] = n;
            }
        }
    }

    for (int ii = 0; ii < 5; ii++)
    {
        if (num[ii] == num[4])
        {
            sum += 1;
        }
    }
    printf("%d %d", num[4], sum);
    return 0;
}*/

// oj.7-6
/*#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a[10], max, idx;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    idx = 0;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            idx = i;
        }
    }
    printf("%d", idx);
    return 0;
}*/
// oj.7-8
/*#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 9; i++)
    {
        for (int ii = 0; ii < 9 - i; ii++)
        {
            if (a[ii] > a[ii + 1])
            {
                int b = a[ii + 1];
                a[ii + 1] = a[ii];
                a[ii] = b;
            }
        }
    }
    for (int ii = 0; ii < 10; ii++)
    {
        printf(" %d", a[ii]);
    }
    return 0;
}*/
#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a[100][100], n;
    int b = 1, sum;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int ii = 0; ii < n; ii++)
        {
            a[i][ii] = b++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum += a[i][i];
    }
    printf("%d", sum);
    return 0;
}