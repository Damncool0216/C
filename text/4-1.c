//*简单问题算法
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//!任意次方后的最后三位，求一个整数任意次方后的最后三位数，即求X^y的最后三位数

void the_last_three_after_any_power(void)
{
    int i,x,y,z=1;
    printf("please input two number x and y(x^y) :\n");
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++)
        z=z*x%1000;
    printf("the result is : %03d",z);  
}
int main()
{
    the_last_three_after_any_power();
    return 0;
}