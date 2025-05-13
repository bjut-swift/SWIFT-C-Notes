#include <stdio.h>
#include <string.h>
int main()
{
    void aeiou(char str1[], char str2[], char result[]);
    char str1[1000], str2[1000], result[1000];
    gets(str1);
    gets(str2);
    aeiou(str1,str2,result);
    printf("元音字母组成的新字符串: %s\n", result);

    return 0;

}
void aeiou(char str1[], char str2[], char result[])
{
    strlwr(str1);
    strlwr(str2);
    int j = 0;
    for (int i = 0;i < strlen(str1);i++)    //str1[i] != '\0'
    {
        if (str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u')
        {
            result[j] = str1[i];
            j++;
        }
    }
    for (int i = 0;i < strlen(str2);i++)
    {
        if (str2[i] == 'a' || str2[i] == 'e' || str2[i] == 'i' || str2[i] == 'o' || str2[i] == 'u')
        {
            result[j] = str2[i];
            j++;
        }
    }
    result[j] = '\0';
}