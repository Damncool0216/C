//*循环的数学应用
 //!序列求和，用while循环计算s=1+1/2+--+1/n;
 void sequence_sum(void)
 {
     int n;
     int fz=1;
     int fm=1;
     printf("input n:");
     scanf("%d",&n);
     double s=0;
     while(fm<=n)
     {
      s+=fz*1.0/fm;
      fm++;
     }
     printf("s= %lf",s);
 }

//!简单的级数运算 ，序列 2/1,3/2,5/3,8/5,13/8求前20项的和
void series_operation()
{
    int fz=2,fm=1;
    double s=0;
    int n=1;
    while(n<=20)
    {
        s=s+fz*1.0/fm;
        fz=fz+fm;
        fm=fz-fm;
        n++;
    }
    printf("%lf",s); 
}
//!用while语句求 n！
void factorial_n(void)
{
    int n;
    double s=1; //
    printf("please input the number:");
    scanf("%d",&n);
    while(n>0)
    {
        s=s*n;
        n--;
    }
    printf("the result is %lf",s);
}
 int main()
 {
     //sequence_sum();
     //series_operation();
     factorial_n();
     return 0;
 }

 