//*字符和字符串操作
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//!计算字符串中有多少个单词
void count_words(void)
{
    char a[100];
    int xiabiao = 0;
    int count = 1;
    gets(a);
    for (int i = 0; a[i] == ' '; i++)
        xiabiao++;
    for (int i = xiabiao; a[i] != '\0'; i++)
    {
        if (a[i] == ' ')
            count++;
    }
    printf("%d\n", count);
}

//!字符串倒置
void convert_string(void)
{
    char a[100]; //*定义数组
    printf("input the string:\n");
    gets(a);                          //*输入字符串
    int len = strlen(a);              //*计算字符串长度
    for (int i = 0; i < len / 2; i++) //*换位置
    {
        int tmp;
        tmp = a[i];
        a[i] = a[len - 1 - i];
        a[len - 1 - i] = tmp;
    }
    printf("now string:\n%s", a);
}

//!字符串替换
void replace_string(void)
{
    char s1[1000], s2[1000];
    int position;
    printf("\nplease input original string:");
    gets(s1);
    printf("\nplease input substitute string:");
    gets(s2);
    printf("please input the substitute position:");
    scanf("%d", &position);
    int i = 0, j = 0;
    for (j = position - 1; s1[j] != '\0'; j++)
        if (s2[i] != '\0')
        {
            s1[j] = s2[i];
            i++;
        }
        else
            break;
    printf("\nthe final string:%s", s1);
}

//!回文字符串，正读反读都一样的字符串
int palindrome(char str[], int k, int i)//*定义函数判断是否为回文字符串
{
    if (str[k] == str[i - k] && k == 0)
        return 1;
        else if(str[k] ==str[i - k])
        palindrome(str,k-1,i);//*递归调用
        else
        return 0;

}
void Palindrome(void)
{
    int i=0,n=0;
    char ch,str[20];
    while((ch=getchar())!='\n')
    {
        str[i]=ch;
        i++;
    }
    if(i%2==0)
    n=palindrome(str,(i/2),i-1);
    else
    n=palindrome(str,(i/2-1),i-1);
    if(n==0)
    printf("not palindrome");
    else
    printf("palindrome");
}
//!字符升序排列，将已经升序排好的字符串数组a和字符串数组b按升序归并到字符数组c中并输出



int main()
{
    // count_words();
    // convert_string();
    //replace_string();
    Palindrome();
    return 0;
}