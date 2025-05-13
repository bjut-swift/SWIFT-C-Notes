#include <stdio.h>

#define SIZE 15  // 数组大小

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1, mid;

    while (left <= right) {
        mid = (left + right) / 2;

        if (arr[mid] == target) {
            return mid + 1;  // 返回"第几个元素"（从1开始计数）
        } else if (arr[mid] > target) {
            right = mid - 1;  // 在左半部分查找
        } else {
            left = mid + 1;  // 在右半部分查找
        }
    }
    return -1;  // 查找失败
}

int main() {
    int a[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};  // 15 个有序数
    int num, pos;

    printf("请输入要查找的数字: ");
    scanf("%d", &num);

    pos = binarySearch(arr, SIZE, num);

    if (pos != -1) {
        printf("数字 %d 是数组中的第 %d 个元素。\n", num, pos);
    } else {
        printf("无此数\n");
    }

    return 0;
}
