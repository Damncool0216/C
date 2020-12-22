//*函数
#include<stdio.h>
#include<math.h>

//!输出两个数中的最大值
int max_of2(int x, int y)
{
  int z=x>y?x:y;
  return z;
}

//!递归解决年龄问题,有五个人坐在一起，问第五个人多少岁？他说比第四个人大2岁，第四个人说他比第三个人大2岁，第三个人比第二个大2岁，第二个比第一个大2岁，第一个人10岁
int f(int x)
{
  if(x==1)
  return 10;
  else
  return f(x-1)+2;
}

