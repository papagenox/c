/*
目的：数组元素排序，要求用函数来做数组元素交换

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，输入一行10个整数，程序(可)用下列交换方法对数组进行排序，然后输出
排序后的10个整数。要求：利用函数对两个数组元素进行交换。

交换分两层进行：
1，内层循环，从数组第一个元素开始循环，每次比较相邻两个元素，如果a[i]<=a[i+1]，
则不作处理；否则，利用swap函数来交换数组中a[i]和[i+1]的值。
2，外层循环，如果内层循环没有一次交换数组元素，表明数组已经排序完成，结束循环。
注意：设计函数参数时，有多种方法可采用：
1，可以两个数组元素的地址传给swap函数，
2，也可以将整个数组传给swap函数，同时再传递两个下标。

输入样例：
5 1 2 6 4 9 8 7 3 10

输出样例：
1 2 3 4 5 6 7 8 9 10
*/

#include<stdio.h>
void swap(int *, int *);
int main()
{
    int arr[10];
    int i;
    int status = 1;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    while (status)
    {
        status = 0;
        for (i = 0; i < 9; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(&arr[i], &arr[i + 1]);
                status = 1;
            }
        }
    }
    printf("%d", arr[0]);
    for (i = 1; i < 10; i++)
    {
        printf(" %d", arr[i]);
    }

    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}