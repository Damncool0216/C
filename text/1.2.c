//*条件判断

#include<stdio.h>
//!判断偶数
void even_number_pd(void)
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
void max_of_3(void)
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
void maxtomin_sort(void)
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
//!判断闰年
void leap_year_pd(void)
{
    int y;
    printf("请输入年份：");
    scanf("%d",&y);
    if((y%4==0&&y%100!=0)||y%400==0)
        printf("\n%d 是闰年",y);
    else
        printf("\n%d 不是闰年",y );
}
//!阶梯问题,每步跨两阶最后剩一阶，每步三阶剩两阶，每步五阶剩四阶，每步六阶剩五阶，每步七阶刚好，求所有三位阶梯数
void stair_p(void)
{
    int i;
    for(i=100;i<1000;i++)
    if(i%2==1&&i%3==2&&i%5==4&&i%6==5&&i%7==0)
    printf("the number of stairs is %d\n",i);
}
//!编程输出国际象棋棋盘
void Chess_board(void)
{
    int i,j;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        if((i+j)%2==0)
        printf("%c%c",219,219);
        else
        printf(" ");
        printf("\n");
    }
}

//!利用switch语句求输入某年某月某日，判断这一天是这一年的第几天
void day_pd(void)
{
    int y,m,d,result=0;
    printf("请分别输入年月日：");
    scanf("%d %d %d",&y,&m,&d);
    switch(m)
    {
        case 1:result=d;
        case 2:result=d+31;
        case 3:result=d+31+28;
        case 4:result=d+31+28+31;
        case 5:result=d+31+28+31+30;
        case 6:result=d+31+28+31+30+31;
        case 7:result=d+31+28+31+30+30+30;
        case 8:result=d+31+28+31+30+30+30+31;
        case 9:result=d+31+28+31+30+30+30+31+31;
        case 10:result=d+31+28+31+30+30+30+31+31+30;
        case 11:result=d+31+28+31+30+30+30+31+31+30+31;
        case 12:result=d+31+28+31+30+30+30+31+31+30+31+30;
    }
    if(m>2&&(y%4==0&&y%100!=0)||y%400==0)//?判断闰年 若为闰年超过二月的要加一天；
    result++;
    printf("这天是这一年的第%d天",result);
}

//!简单计算器
void simple_calculator(void)
{
    float a,b;
    char c;
    float result;
    printf("输入格式：a(+,-,*,/)b\n");
    scanf("%f%c%f",&a,&c,&b);
    switch(c)
    {
        case '+':result=a+b;break;
        case '-':result=a-b;break;
        case '*':result=a*b;break;
        case '/':result=a/b;break;
    }
    printf("结果为%f",result);
}
//
int main()
{
 //even_number_pd();
 //max_of_3();
 //maxtomin_sort();
 //abf();
 //leap_year_pd();
 //stair_p();
 //Chess_board();
 //day_pd();
 //simple_calculator();
 return 0;
}
