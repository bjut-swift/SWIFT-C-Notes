#include <stdio.h>
#include <string.h>

int main()
{
    void sequence(char str[]);
    char str[1000];
    gets(str);
    sequence(str);
    puts(str);
    return 0;

}

void sequence(char str[])
{
    char t;
    int len = strlen(str);
    for (int j = 0; j < len - 1; j++) 
    {
        for (int i = 0; i < len - 1 - j; i++) 
		{
			if(str[i] > str[i+1])
			{	
				t = str[i];
				str[i] = str[i+1];
				str[i+1] = t;
			}
		}	
	}	
}