//*趣味运算
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//!有一个十层的架子，第一层放了多少糖果不知道，但是每层放的糖果数都是前一层的2倍多一块，第十层放了4607个糖果，问第一层放了多少糖果
int amount_candy(int x)  //*每一层的数量关系是确定的，且最后一层的数量知道，故可以用递归来计算
{
    if(x==10)
    return 4607;
    else
    return (amount_candy(x+1)-1)/2;/
}
int main()
{
    printf("%d",amount_candy(1));
    return 0;
}
