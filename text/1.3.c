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
void pr_rhombus(void)
{
    int n;
    printf("输入打印菱形的行数（奇数）：");
    scanf("%d",&n);
    int i,j,k=(n+1)/2;
    for(i=1;i<=k;i++)
    {
        for(j=k-i;j>=0;j--)
        printf(" ");
        for(j=2*i-1;j>0;j--)
        printf("*");
        printf("\n");
    }
      for(i=k-1;i>=1;i--)
    {
        for(j=k-i;j>=0;j--)
        printf(" ");
        for(j=2*i-1;j>0;j--)
        printf("*");
        printf("\n");
    }

}
int main()
{
    //pr_triangle();
    pr_rhombus();
    return 0;
}