#include <stdio.h>
#include<math.h>
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
//!打印余弦曲线
 void pr_cos(void)
 {
  double y;
  int x,m;
  for(y=1;y>=-1;y-=0.1)
  {
      m=acos(y)*10;
      for(x=0;x<=64;x++)
      {
          if(x==m||x==64-m)
          printf("*");
          else
          printf(" ");
      }
      printf("\n");
  }
}
//!打印正弦曲线(感觉有点奇怪)
void pr_sin(void)
{
  double y;
  int x,m;
  for(y=1;y>=-1;y-=0.1)
    {
      m=asin(y)*10;
      for(x=0;x<=64;x++)
      {
          if(x==m||x==32-m||(x==64-m&&m>=32))
          printf("*");
          else
          printf(" ");
      }
      printf("\n");
    }
}
//!打印九九乘法表
void pr_multiplication_table(void)
{
    int i,j;
    for(i=0;i<=9;i++)
    {
    for(j=1;j<=i;j++)
    printf("%d * %d = %-4d",i,j,i*j);
    printf("\n");
    }
}
//!打印杨辉三角
void pr_yanghui_triangle(void)
{
    
}
int main()
{
    //pr_triangle();
    //pr_rhombus();
    // pr_cos();
    //pr_sin();
    pr_multiplication_table();
    return 0;
}