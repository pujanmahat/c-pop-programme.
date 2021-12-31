//pointers example
#include<stdio.h>
#include<conio.h>
int main()
{
	int x=456, *ptr;
	ptr=&x;
    printf("\naddress is %u and the value is %d",ptr,x);
    *ptr=10;
    printf("\naddress of pointer is %u",&ptr);
    printf("\nthe address is %u and the value is %d",ptr,*ptr);
    getch();
    return 0;
}
