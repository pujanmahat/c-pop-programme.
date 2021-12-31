//sim of elements of array using pointer 

#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[100];
	int n,i,*p,sum=0;
	p=arr;            //p=&arr[0] assign the address of base elements
	printf("enter any number\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
	    sum=sum+*p;       //sum =sum +(*p+i) no need to increment p in another statement
		p++;             //pointer increment	
	}
	printf("the sum is %d",sum);
	getch ();
	return 0;
}
