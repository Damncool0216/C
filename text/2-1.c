//*指针变量
#include <stdio.h>

//!使用指针实现数据转换
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void swap_pointer(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    int *pointer1 = &a, *pointer2 = &b; //*定义指针变量
    swap(pointer1, pointer2);           //*调用swap函数
    printf("%d %d", a, b);
}

//!使用指针实现整数排序,输入三个整数，将其从大到小排序
void exchange(int *p1, int *p2, int *p3)
{
    if(*p1<*p2)
    swap(p1, p2);
    if(*p1<*p3)
    swap(p1,p3);
    if(*p2<*p3)
    swap(p2,p3);
}
void sort_pointer(void)
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int *p1 = &a, *p2 = &b, *p3 = &c;
    exchange(p1,p2,p3);
    printf("%d %d %d",a,b,c);
}
int main()
{
    // swap_pointer();
    sort_pointer();
    return 0;
}