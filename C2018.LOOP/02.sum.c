/*
目的：求和。

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，输入一组整数，计算这组整数的和并输出。
注意：输入一行整数，数量未知，但以-1作为结束符（不计入累加和中），
中间以空格分隔，最后无换行符。输出这些整数之和，末尾无换行符。

输入样例：
1 2 6 7 8 9 10 3 4 5 -1

输出样例：
55
*/

#include<stdio.h>
int main()
{
    int a, sum;
    sum = 0;

    scanf("%d", &a);
    while (a != -1)
    {
        sum = sum + a;
        scanf("%d", &a);
    }
    printf("%d", sum);

    return 0;
}