#include <stdio.h>
#include <conio.h>
int main()
{
	char string[100];
	printf("enter your name full name:");
    scanf("%[^\n]",string);
    printf("your full name is %s",string);
	getch();
	return 0;
}
