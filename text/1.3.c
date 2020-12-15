//!用#打印三角形
void pr_triangle(void)
{
    int i,j;
    int n;
    printf("输入要打印三角形的行数：");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n-i;j>=0;j--)
        printf(" ");
        for(j=2*i-1;j>0;j--)
        printf("#");
        printf("\n");
    }
}

//!用*打印菱形

int main()
{
    pr_triangle();
    return 0;
}