//*指针与数组
#include <string.h>
#include <stdio.h>

//!使用指针输出数组元素
void array_element_pointer(void)
{
    int a[10];
    int *p=a;//?数组名==数组首元素的地址，&数组名==整个数组的地址
    puts("\nPlease input ten integer:\n");
    for(int i=0;i<10;i++)
    scanf("%d",&a[i]);
    printf("\n");
    for(;p<(a+10);p++)
    printf("%d\t",*p);
}
//!用指针实现逆序存放数组元素值
void reverse_order_stored(int *x,int n)  //?交换函数
{
  int *p,temp,*i,*j,m=(n-1)/2;  //?定义变量
  i=x;      //?变量i存放数组首地址
  j=x+n-1;  //?变量j存放数组尾地址
  p=x+m;    //?变量p存放数组中间地址
  for(;i<=p;i++,j--)    //?交换数组前半部分和后半部分
  {
      temp=*i;
      *i=*j;
      *j=temp;
  }
}
void Reverse_order_stored(void)
{
    int i,a[10]={1,2,3,4,5,6,7,8,9,10};
    printf("the elements of original array:\n");
    for(i=0;i<10; i++)
    printf("%d ", a[i]);
    printf("\n");
    reverse_order_stored(a,10);
    printf("now array:\n");
    for(i=0;i<10; i++)
    printf("%d ",a[i]);
    printf("\n");
}


int main()
{
    // array_element_pointer();
    Reverse_order_stored();
    return 0;
}