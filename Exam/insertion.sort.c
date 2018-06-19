/*
目的：插入排序

输入输出格式说明：
1，每一行末尾可见字符后面没有不可见字符；
2，每一行的末尾都有一个换行符，但是最后一行没有换行符；
3，如果只有一行，则末尾没有换行符；
4，所有标点符号均为西文标点符号。

题目描述：
写一程序，实现下面的插入排序。输入一个正整数n（1<=n<=10），以及n个整数，
程序利用选择排序对这n个整数进行排序，并输出排序后的n个整数。

插入排序（英语：Insertion Sort）是一种简单直观的排序算法。它的工作原理是
通过构建有序序列，对于未排序数据，在已排序序列中从后向前扫描，找到相应位
置并插入。插入排序在实现上，通常采用in-place排序，因而在从后向前扫描过程
中，需要反复把已排序元素逐步向后挪位，为最新元素提供插入空间。

一般来说，插入排序都采用in-place在数组上实现。具体算法描述如下：
1, 从第一个元素开始，该元素可以认为已经被排序
2, 取出下一个元素，在已经排序的元素序列中从后向前扫描
3, 如果该元素（已排序）大于新元素，将该元素移到下一位置
4, 重复步骤3，直到找到已排序的元素小于或者等于新元素的位置
5, 将新元素插入到该位置后
重复步骤2~5

输入样例：
10
5 1 2 6 4 9 8 7 3 10

输出样例：
1 2 3 4 5 6 7 8 9 10
*/

#include<stdio.h>
void insertion_sort(int [], int);
int main()
{
    int arr[10];
    int i, n;

    scanf("%d", &n);
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    insertion_sort(arr, n);
    printf("%d", arr[0]);
    for (i = 1; i < n; i++)
    {
        printf(" %d", arr[i]);
    }

    return 0;
}
void insertion_sort(int arr[], int len)
{
    int i, j, temp;
    for (i = 1; i < len; i++)
    {
        temp = arr[i];
        for (j = i; j > 0 && arr[j - 1] > temp; j--)
            arr[j] = arr[j - 1];
        arr[j] = temp;
    }
}