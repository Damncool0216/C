#include<stdio.h>
//!判断偶数
void oushupd(void)
{
    int value;
    printf("请输入一个整数：\n");
    scanf("%d", &value); 
    if(value%2==0) //*判断value能否被二整除
    printf("%d 是偶数\n",value);//*能为偶数
    else 
    printf("%d 不是偶数\n",value);
}
//!输入三个整数，求其中最大值
void maxof3(void)
{
    int a,b,c,max;
    printf("请输入三个整数：");
    scanf("%d %d %d",&a,&b,&c);
    max=a; //*假设a最大
    if(b>max)//*max与b比较，若b>max,将b的值赋给max
    max=b;
    if(c>max)//*同理，两次比较后出最大值
    max=c;
    printf("最大值为%d",max);
}

//!输入四个整数，要求从大到小排序
void maxtominsort(void)
{
    int i,a[4],j,tmp;
    printf("请输入四个整数：\n");
    for(i=0;i<4;i++)
    scanf("%d",&a[i]);
    for(i=0;i<4;i++)//*利用冒泡排序进行排序
    {
       int flag=1;
       for(j=i+1;j<4;j++)
        {
            if(a[i]<a[j])
            {
            tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
            flag=0;
            }
        }
        if(1==flag)
        break;
    }
    printf("排序后为：\n");
    for(i=0;i<4;i++)
    printf("%d ",a[i]);
}
//!输入整数a和b，若a方+b方>100，则输出a方+b方的值，否则输出a+b；
void abf(void)
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c=a*a+b*b;
    if(c>100)
    printf("%d",c);
    else
    printf("%d",a+b);
}
int main()
{
 //oushupd();
 //maxof3();
 //maxtominsort();
 abf();
 return 0;
}
