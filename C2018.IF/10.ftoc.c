/*
目的：温度转换，输入输出。

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，输入一个浮点数f代表华氏温度，转换成摄氏温度并输出。但是，
当转换后的摄氏温度小于-273.15度时，输出Invalid。
注意：输入一个浮点数，无换行符。输出一个浮点数，精确到小数点后2位，
末尾无换行符。

输入样例：
32.0

输出样例：
0.00
*/

#include<stdio.h>
int main()
{
    float c, f;
    scanf("%f", &f);
    c = (f - 32) / 1.8;
    if (c < -273.15)
        printf("Invalid");
    else
        printf("%.2f", c);

    return 0;
}