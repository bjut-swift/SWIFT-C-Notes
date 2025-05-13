#include <stdio.h>
#include <string.h>

int main()
{
	void swap(char *p1, char *p2, char *p3); 
	char a[100], b[100], c[100], *p1, *p2, *p3;
	p1 = &a[0];
	p2 = &b[0];
	p3 = &c[0];
	gets(a);
    gets(b);
    gets(c);
	swap(p1, p2, p3);
	puts(a);
    puts(b);
    puts(c);
	return 0;
}

void swap(char *p1, char *p2, char *p3)
{
	char t[100];
	if(strcmp(p1, p2) > 0)
	{
        strcpy(t,p1);
		strcpy(p1,p2);
        strcpy(p2,t);
	}
	if(strcmp(p1, p3) > 0)
	{
        strcpy(t,p1);
		strcpy(p1,p3);
        strcpy(p3,t);
	}
	if(strcmp(p2, p3) > 0)
	{
        strcpy(t,p2);
		strcpy(p2,p3);
        strcpy(p3,t);
	}
}