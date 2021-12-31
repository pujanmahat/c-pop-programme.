// program to illustrate pointer and structure

#include<stdio.h>
#include<conio.h>
struct book
{
	char name[100];
	char author[100];
	int price;
};
int main()
{
    struct book b= {"physics","pujan mahat",1000};
	struct book *ptr;
    ptr=&b;
	printf("name of book is %s\nauthor is %s\nprice is %d\n",ptr->name,ptr->author,ptr->price);
	getch(); 
	return 0;		
}
