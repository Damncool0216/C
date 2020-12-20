//*数组

#include <stdio.h>
#include <math.h>
#include <string.h>

//!逆序存放数据，任意输入5个数据，编程实现将这5个数据逆序存放，并将最终结果显示在屏幕上
void reverse_order_stored()
{
    int a[5], i, tmp;
    printf("please input array a:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < 2; i++)
    {
        tmp = a[i];
        a[i] = a[4 - i];
        a[4 - i] = tmp;
    }
    printf("\n");
    printf("now array :\n");
    for (int i = 0; i < 5; i++)
        printf("%d ", a[i]);
}

// !从键盘中任意输入10个整型数据存放到数组a中，编程求出a中相邻两元素之和，并将这些和存放到数组b中按每行3个元素的形式输出。
void sum_of_adjacent_elements(void)
{
    int a[11], i, b[10];
    printf("please input array a:\n");
    for (i = 1; i < 11; i++)
        scanf("%d", &a[i]);
    for (i = 1; i < 10; i++)
        b[i] = a[i] + a[i + 1];
    for (i = 1; i < 10; i++)
    {
        printf("%-4d", b[i]);
        if (i % 3 == 0)
            printf("\n");
    }
}

//!班级竞选班长，共有三个候选人，输入参加选举的人数及每个人选举的内容，输出3个候选人最终的得票数及无效选票数。
void count_of_votes(void)
{
    int v1 = 0, v2 = 0, v3 = 0, v0 = 0, i, n, a[50];
    printf("please imput the number of electorate :\n");
    scanf("%d", &n);
    printf("please input 1or2or3\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        if (a[i] == 1)
            v1++;
        else if (a[i] == 2)
            v2++;
        else if (a[i] == 3)
            v3++;
        else
            v0++;
    }
    printf("The result :\n");
    printf("candicate1:%d\ncandicate2:%d\ncandicate3:%d\nnonuser:%d\n", v1, v2, v3, v0);
}
//! 模拟比赛打分，首先从键盘中输入选手人数，然后输入对每个选手的打分情况。这里假设裁判有5位，在输入完以上要求内容后，输出每个选手的成绩。假设有五位选手，每位裁判对每位选手的打分已知，请编程输出每个选手的成绩。
void game_score(void)
{
    int n, i, j = 1;
    float a[50], b[50], sum = 0;
    printf("please input the number of players:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("player %d\n", i);
        printf("please input score:\n");
        for (; j < 5 * n + 1; j++)
        {
            scanf("%f", &a[j]);
            sum += a[j];
            if (j % 5 == 0)
                break;
        }
        b[i] = sum;
        sum = 0;
        j++;
    }
    j = 1;
    printf("player      judgeA  judgeB  judgeC  judgeD  judgeE  total\n");
    for (i = 1; i <= n; i++)
    {
        printf("player%d", i);
        for (; j < 5 * n + 1; j++)
        {
            printf("%8.1f", a[j]);
            if (j % 5 == 0)
                break;
        }
        printf("%8.1f\n", b[i]);
        j++;
    }
}
//!对调最大值与最小值位置，输入一组数据，找出这组数据中最大数与最小数，将最大数和最小数位置互换，将互换或的这组数据再次输出
void swap_position(void)
{
    int a[20], i, ma, mi, max, min, n;
    printf("please input the number of elements:");
    scanf("%d", &n);
    printf("please input the element:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    max = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            ma = i;
        }
    }
    min = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            mi = i;
        }
    }
    a[ma] = min;
    a[mi] = max;
    printf("\nthe position of min is %3d", mi);
    printf("\nthe position of max is %3d\n", ma);
    printf("now array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}
//!输入10个数字，要求位置互换。即第一个与最后一个，第二个与最后第二个互换
void swap_position_2(void)
{
    int a[11], i, tmp;
    printf("please input array:\n");
    for (i = 1; i <= 10; i++)
        scanf("%d", &a[i]);
    for (i = 1; i <= 5; i++)
    {
        tmp = a[i];
        a[i] = a[11 - i];
        a[11 - i] = tmp;
    }
    printf("now array:\n");
    for (i = 1; i <= 10; i++)
        printf("%d ", a[i]);
}

//!求二维数组对角线之和，有一个4*4矩阵，要求出其从左上到右下的对角线之和
void sum_of_diagonal(void)
{
    int i, j, sum = 0;
    int a[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%5d", a[i][j]);
            if (i == j)
                sum = sum + a[i][j];
        }
        printf("\n");
    }
    printf("the sum of the diagonal is %d\n", sum);
}
//!将一个3列4行的二维数组行列交换
void transpose_ranks(void)
{
    int i, j;
    int a[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int b[3][4];
    printf("the original array:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%5d", a[i][j]);
            b[j][i] = a[i][j];
        }
        printf("\n");
    }
    printf("now array:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%5d", b[i][j]);
        printf("\n");
    }
}

//!设计魔法阵，打印5阶魔法阵，即它的每一行，每一列，对角线之和均相等
void mofangzhen(void)
{
    int i, j, x = 1, y = 3, a[6][6] = {0};
    for (i = 1; i <= 25; i++)
    {
        a[x][y] = i;
        if (x == 1 & y == 5)
        {
            x = x + 1;
            continue;
        }
        if (x == 1)
            x = 5;
        else
            x--;
        if (y == 5)
            y = 1;
        else
            y++;
        if (a[x][y] != 0)
        {
            x = x + 2;
            y = y - 1;
        }
    }
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
}

int main()
{
    // reverse_order_stored();
    // sum_of_adjacent_elements();
    //count_of_votes();
    // game_score();
    // swap_position();
    //swap_position_2();
    // sum_of_diagonal()
    //transpose_ranks();
    mofangzhen();
    return 0;
}
