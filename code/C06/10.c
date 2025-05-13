#include <stdio.h>

void strdog(char a[], char b[]) {
    int i = 0, j = 0;

    while (a[i] != '\0') {
        i++;
    }

    while (b[j] != '\0') {
        a[i] = b[j];
        i++;
        j++;
    }

    a[i] = '\0';
}

int main() {
    char str1[100];
    char str2[50];
    gets(str1);
    gets(str2);

    strdog(str1, str2);

    printf("%s\n", str1);
    return 0;
}
