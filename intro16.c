#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b,d,c,ch;
	printf("\nenter two number");
	scanf("%d%d",&a ,&b);
	printf("\n1. sum");
	printf("\n2. diference");
	printf("\n3. product ");
	printf("\nenter your choice(1-3)");
	scanf("%d",&ch);
	switch (ch)
	{  case1: 
	        c=a+b;
			printf("\n sum of two numbers =%d" ,c); 
			break;
			
			case2:
				c=a-b;
				printf("\n  difference of two numbers=%d",c);
				break;
				
			case3:
				c=a*b;
				printf("\n product of two numbers=%d",c);
				break;
		
		
			default:
				printf("\nwrong choice !! please enter 1/2/3 only");		
			
	}
	
}
