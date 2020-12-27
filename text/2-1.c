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
    if (*p1 < *p2)
        swap(p1, p2); //*调用前面写的swap函数，3次比较后完成排序
    if (*p1 < *p3)
        swap(p1, p3);
    if (*p2 < *p3)
        swap(p2, p3);
}
void sort_pointer(void)
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int *p1 = &a, *p2 = &b, *p3 = &c;
    exchange(p1, p2, p3);
    printf("%d %d %d", a, b, c);
}

//!指向结构体变量的指针,通过结构体指针变量实现在窗体上显示学生信息
struct student
{
    int num;
    char name[20];
    char sex;
    int age;
    float score;
};
void struct_pointer(void)
{
    struct student student1 =
        {
            1001, "liming", 'M', 20, 92.5};
    struct student *p;
    p = &student1;
    printf("Number:%d\n", p->num);
    printf("Name:%s\n", p->name);
    printf("Sex:%c\n", p->sex);
    printf("Age:%d\n", p->age);
    printf("Score:%f\n", p->score);
}

int main()
{
    // swap_pointer();
    // sort_pointer();
    struct_pointer();
    return 0;
}