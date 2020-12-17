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
    for(x=1;x<10;x++)//*x在最高位 不能为0
    for(y=1;y<10;y++)//*同上
    for(z=0;z<10;z++)
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

//!对调数问题，
void swap_number(void)
{
    int n,i,flag=1;
    printf("please input a integer number:");
    scanf("%d",&n);
    while(1)
    {
        if(n<10||n>=100||n%10==0||(n%10==n/10%10))//*判断输入的n是否符合对调数规定
        {
            printf("input error!\nplase input again:");
            scanf("%d",&n);
        }
        else
        break;
    }
    for(i=10;i<100;i++) //*穷举每一个两位数
    {
        if(i%10==i/10%10||i%10==0)//*判断是否符合对调数规定
        continue;
        else
        { 
            int sn=n%10*10+n/10;//*百个位对调后的n
            int si=i%10*10+i/10;//*同上
            if((n+i)==sn+si)
            {
                printf("%d + %d = %d + %d\n",n,i,sn,si);
                flag=0;
            }
        }
    }
    if(flag==1)
    printf("NOT FOUND");
}
//!求解平方和 ，任意给出一个自然数k，数k不为0，计算其各位数字的平方和k1，再计算k1的各位数字的平方和k2，重复此过程，最终得到数1或者145，此时再做数的平方和运算它最终结果将始终是1或145。
 void sum_of_sqares(void)
 {
     long int a[10],n,i;
     p: printf("please input a number:");
     scanf("%d",&n);
     if(n==0)
     goto p;
     while(n!=1&&n!=145)
     {
         printf("n=%ld->",n);
         i=1;
         while(n>0)
         {
             a[i++]=n%10;
             n/=10;
         }
         n=0;
         i--;
         while(i>=1)
         {
             printf("%ld*%ld",a[i],a[i]);
             if(i>1)
             printf("+");
             n+=a[i]*a[i];
             i--;
         }
         printf("=%ld\n",n);
     }
 }

 //!已知两个三位数abc和xyz，其中a、b、c、x、y、z未必是不同的；而ax、by、cz是三个两位数。试编程求三位数abc和xyz
 void find_numbers(void)
 {
     int i,j;
     int count=0;
     for(i=100;i<1000;i++)
     for(j=100;j<1000;j++)
     {
      int a=i/100%10,b=i/10%10,c=i%10;
      int x=j/100%10,y=j/10%10,z=j%10;
      int ax=a*10+x,by=b*10+y,cz=c*10+z;
      if(a!=0&&b!=0&&c!=0&&x!=0&&ax!=by&&ax!=cz&&by!=cz)
      {
          printf("abc=%d\txyz=%d\n",i,j);
          count++;
          if(count>10)//*可以输入的数太多了 所以限制了个数
          return;
      }
     }
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
     //pr_number();
     //swap_number();
     //sum_of_sqares();
     //find_numbers();
     return 0;
 }

 