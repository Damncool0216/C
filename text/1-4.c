//*循环的数学应用
#include <stdio.h>
#include<math.h>
#include <stdlib.h>
#include <time.h>
 //!序列求和，用while循环计算s=1+1/2+--+1/n;
 void sequence_sum(void)
 {
     int n;
     int fz=1;
     int fm=1;
     printf("input n:");
     scanf("%d",&n);
     double s=0;
     while(fm<=n)
     {
      s+=fz*1.0/fm;
      fm++;
     }
     printf("s= %lf",s);
 }

//!简单的级数运算 ，序列 2/1,3/2,5/3,8/5,13/8求前20项的和
void series_operation()
{
    int fz=2,fm=1;
    double s=0;
    int n=1;
    while(n<=20)
    {
        s=s+fz*1.0/fm;
        fz=fz+fm;
        fm=fz-fm;
        n++;
    }
    printf("%lf",s); 
}
//!用while语句求 n！
void factorial_n(void)
{
    int n;
    double s=1; //
    printf("please input the number:");
    scanf("%d",&n);
    while(n>0)
    {
        s=s*n;
        n--;
    }
    printf("the result is %lf",s);
}

//!计算1-3+5-7+···-99+101的值
void dd_sum(void)
{
    int a=1;
    int s=0;
    int n=1;
    while(a!=101)
    {
        s=s+a*n;
        n=-n;
        a=abs(a)+2;
    }
    printf("%d",s);
}
//!特殊等式，xyz+yzz=532,求x,y,z(xyz和yzz分别表示一个三位数)
void special_equations(void)
{
    int x,y,z;
    for(x=1;x<10;x++)
    for(y=1;y<10;y++)
    for(z=1;z<10;z++)
    {
        if(100*x+10*y+z+100*y+10*z+z==532)
        printf("x= %d y= %d z= %d\n",x,y,z);
    }
}

//!求一个正整数的因子
void find_factors(void)
{
    int n;
    printf("please put a positive integer:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    if(n%i==0)
    printf("%d\t",i); 
}
//!随机产生一个无重复的10个数的序列，找出其中因子有5的所有数
void random_pd_factors(void)
{
 int i=0;
 int a[10];
 srand((unsigned int)time(NULL));//*srand()函数是伪随机数发生器种子，它给rand()函数一个产生一个起点。在单独使用rand()函数的时候，它将1作为默认参数。srand()的形参是一个无符号的类型，即unsigned类型，可以是int,float,char等等。但在这里为了达到随机数效果，将使用time()函数来产生一个起点，它直接作用于rand()函数。
 while(i<=10)
 {
     a[i]=rand()%100; //*rand()是生成伪随机数的函数，它会按照一定的序列来生成随机数，但是它序列是固定的
     i++;            //*不想生成的随机数太大，故%100取三位数数字
 }
 for(int i=0;i<10;i++)
 printf("%d ",a[i]);
 printf("\n");
 for(int i=0;i<10;i++)
 if(a[i]%5==0&&a[i]>=5)
 printf("%d ",a[i]);
}
//!一块钱兑换方案，如果要将整钱兑换成零钱，那么一元钱可兑换成一角、两角或五角，问有几种兑换方案
void one_dollar_exchange(void)
{
    int y,l,w;
    for(y=0;y<=10;y++)
    for(l=0;l<=5;l++)
    for(w=0;w<=2;w++)
    if(y+l*2+w*5==10)
    printf("一角%d个 两角%d个 五角%d个\n",y,l,w);
}

//!输出0~9组成的所有无重复的三位数
void pr_number(void)
{
    int bw,sw,gw;//*定义百位，十位，个位数
    for(bw=1;bw<10;bw++)
    for(sw=1;sw<10;sw++)
    for(gw=0;gw<10;gw++)
    if(bw!=sw&&bw!=gw&&sw!=gw)
    printf("%d\t",bw*100+sw*10+gw);
}


 int main()
 {
     //sequence_sum();
     //series_operation();
     //factorial_n();
     //dd_sum();
     //special_equations();
     //find_factors();
     //random_pd_factors();
     //one_dollar_exchange();
     pr_number();
     return 0;
 }

 