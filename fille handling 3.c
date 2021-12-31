#include<stdio.h>
#include<conio.h>
struct student
{
	char name[30];
	int roll;
	float marks[3];
	char address[30];
	float avg;
};
int main()
{
	struct student s[10];
	int i;
	FILE*fp;
	fp=fopen("student.txt","w");
	printf("enter student details\n");
	printf("name\troll\taddress\tmaths\tscience\tenglish\n");
	for(i=0;i<10;i++)
	{
		scanf("%s%d%%s%f%f%f",s[i].name,s[i].address,&s[i].roll,&s[i].marks[0],&s[i].marks[1],&s[i].marks[2]);
		fprintf(fp,"%s%d%s%f%f%f",s[i].name,s[i].address,&s[i].roll,&s[i].marks[0],&s[i].marks[1],&s[i].marks[2]);
    }
    fclose(fp);
    fp=fopen("student.txt","r");
    printf("\nname\troll\taddress\tmaths\tscience\tenglish\n");
    for(i=0;i<10;i++)
    {
    	fscanf(fp,"%s%d%s%f%f%f",s[i].name,&s[i].roll,s[i].address,&s[i].marks[0],&s[i].marks[1],&s[i].marks[2]);
    	s[i].avg=(s[i].marks[0]+s[i].marks[1]+s[i].marks[2])/3;
    	if(s[i].avg>80)
    	{
    		printf("%s\t%d\t%s\t%f\t%f\t%f\n",s[i].name,s[i].roll,s[i].address,s[i].marks[0],s[i].marks[1],s[i].marks[2],s[i].avg);
		}
	}
	fclose(fp);
	getch();
	return 0;
	}
