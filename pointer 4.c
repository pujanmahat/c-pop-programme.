// pointer to an array

#include<stdio.h>
#include<conio.h>
int main()
{
	int *a[4];//array of integer pointers
	int i;
    int m=1,n=2,o=3,p=4,q=5;
	a[0]=&m;
    a[1]=&n;
	a[2]=&o;
	a[3]=&p;
	for(i=0;i<4;i++)
	{
		printf("%d\t",*a[i]);
	}
	getch();
}
