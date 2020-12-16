//*进制转换

#include<stdio.h>
#include<string.h>
//! 十进制转换十六进制
void d_n(void)
{
   int i;
   printf("Please input decimalism number:\n"); 
   scanf("%d", &i);
   printf("the hex number is %x",i);
}
//! n进制转换十进制 （暂时还没搞明白）
void n_d(void)
{
  long t1;
  int i,n,t,t3;
  char a[100];
  printf("Please input a number string:\n");
  gets(a);
  strupr(a);
  t3=strlen(a);
  t1=0;
  printf("Please input n(2or8or16):\n");
  scanf("%d",&n);
  for(i=0;i<t3;i++)
  {
     if((a[i]-'0'>=n&&a[i]<'A')||(a[i]-'A'+10)>=n)
     {
        printf("date error!!");
        return;
     }
     if(a[i]>='0'&&a[i]<='9')
     t=a[i]-'0';
     else if(n>=11&&(a[i]>='A'&&a[i]<='A'+n-10))
     t=a[i]-'A'+10;
     t1=t1*n+t;
  }
  printf("the decimalism is %ld",t1);
}
int main()
{
   //d_n();
   n_d();
   return 0;
}



