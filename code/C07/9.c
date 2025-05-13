#include <stdio.h>
#include <string.h>

// **1️⃣ 输入职工信息**
void inputEmployees(int ids[], char names[][50], int n) {
    for (int i = 0; i < n; i++) {
        printf("请输入第 %d 个职工的职工号: ", i + 1);
        scanf("%d", &ids[i]);
        printf("请输入第 %d 个职工的姓名: ", i + 1);
        scanf("%s", names[i]);
    }
}

// **2️⃣ 按职工号排序（冒泡排序）**
void sortEmployees(int ids[], char names[][50], int n) {
    int temp_id;
    char temp_name[50];

    for (int j = 0; j < n - 1; j++) {
        for (int i = 0; i < n - 1 - j; i++) {
            if (ids[i] > ids[i + 1]) {
                // **交换职工号**
                temp_id = ids[i];
                ids[i] = ids[i + 1];
                ids[i + 1] = temp_id;

                // **交换姓名**
                strcpy(temp_name, names[i]);
                strcpy(names[i], names[i + 1]);
                strcpy(names[i + 1], temp_name);
            }
        }
    }
}

// **3️⃣ 折半查找职工号**
void searchEmployee(int ids[], char names[][50], int n, int target) {
    int left = 0, right = n - 1, mid;

    while (left <= right) {
        mid = (left + right) / 2;

        if (ids[mid] == target) {
            printf("✅ 职工号 %d 的姓名是: %s\n", target, names[mid]);
            return;
        } else if (ids[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    printf("❌ 未找到职工号 %d\n", target);
}

// void lookfor(int a[], char b[][50],int n)
// {
//     if (a[i] == k)
//     puts(b[i]);
//     else if (k > a[i])
//     {
//         for (i = 3 / 2 + 1;i < 3;i++)
//         {
//             if (a[i] == k)
//             {
//                 puts(b[i]);
//                 break;
//             }
//             else
//             {
//                 for (i = 3 / 2 - 1;i >= 0;i--)
//                 if (a[i] == k)
//             {
//                 puts(b[i]);
//                 break;
//             }
//             }
//         }
//     }
// }

// **主函数**
int main() {
    int n, target;
    printf("请输入职工人数: ");
    scanf("%d", &n);

    int ids[n];        // **存储职工号**
    char names[n][50]; // **存储职工姓名**

    // **1. 录入职工信息**
    inputEmployees(ids, names, n);

    // **2. 排序职工信息**
    sortEmployees(ids, names, n);

    // **3. 打印排序后的职工列表**
    printf("\n📋 排序后的职工列表：\n");
    printf("---------------------\n");
    printf("| 职工号  | 姓名    |\n");
    printf("---------------------\n");
    for (int i = 0; i < n; i++) {
        printf("| %6d  | %-6s |\n", ids[i], names[i]);
    }
    printf("---------------------\n");

    // **4. 查找职工号**
    printf("\n请输入要查找的职工号: ");
    scanf("%d", &target);
    searchEmployee(ids, names, n, target);

    return 0;
}
