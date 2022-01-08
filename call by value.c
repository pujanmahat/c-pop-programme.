// parameter passing through call by value

#include <stdio.h>
#include <conio.h>
void func(a,b);
int main()
                                                                        
{

	int a=10,b=5;
	// Before call
	printf("the value of a is %d and b is %d\n",a,b);
	
	
	//After call
	
	func(a,b);
	printf("the valude of a is %d and b is %d\n",a,b);
	getch (); 
	return 0;
}

//in function
void func(inta, intb)
{
	int a,b;
	a=a+3;
	b=b+4;
	printf("the value a is %d and b is %d\n",a,b);
}
