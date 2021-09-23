#include <stdio.h>
void main()
{
	int i=1,sum=0;
	do
	{
    	printf("\n%d",sum);
		sum=sum+i;	
		i++;
	}
	while(i<=10);
	getch();	
	}
