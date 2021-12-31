// test whether file opened or not
#include<stdio.h>
#include<conio.h>
int main()
{
	FILE*fp;
	fp=fopen("sample.text","w+");
	if(fp=NULL)
	{
		printf("error:the file cannot be opened");
	}
	else 
	{
		printf("the file has been opened");
		fclose(fp);
	}
	remove("sample.text");
	getch ();
	return 0;
}
