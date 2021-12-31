#include<stdio.h>
struct personal
{
	char name[10];
	int day;
	char month[10];
	int year;
	float salary;
};
int main ()
{
	struct personal p;
	printf("enter name\n");
	scanf("%[^\n]",p.name);
	printf("enter day,month and year\n");
	scanf("%d%s%d",&p.day,p.month,&p.year);
	printf("enter salary\n");
	scanf("%f",&p.salary);
	printf("name\tday\tmonth\tyear\tsalary\n");
	printf("%s\t%d\t%s\t%d\t%.2f",p.name,p.day,p.month,p.year,p.salary);
	return 0;
	
}
