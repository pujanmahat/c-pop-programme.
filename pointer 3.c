//display two dimensional array using pointer 

#include<stdio.h>
#include<conio.h>
int main()
{
	int s[100][1000];
	int m,n,i,j;
	printf("enter row and column\n");
	scanf("%d%d",&m,&n);
	printf("enter elements\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&s[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",*(*(s+i)+j));  // in one dimension s[i] is same as *(s+i)
		}
		printf("\n");
	}
	
	getch ();
	return 0;
}
