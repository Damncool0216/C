//*数组

#include<stdio.h>
#include<math.h>
#include<string.h>

//!逆序存放数据，任意输入5个数据，编程实现将这5个数据逆序存放，并将最终结果显示在屏幕上
void reverse_order_stored()
{
    int a[5],i,tmp;
    printf("please input array a:\n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(i=0;i<2;i++)
    {
        tmp=a[i];
        a[i]=a[4-i];
        a[4-i]=tmp;
    }
    printf("\n");
    printf("now array :\n");
    for(int i=0;i<5;i++)
    printf("%d ",a[i]);
}
int main()
{
    reverse_order_stored();
    return 0;
}

