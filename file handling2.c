//wap to open a file "Inventory.txt"store record of three items containing item name,item id,price,quantity. extended the program to read this data from filr inventory and display along with amount of each item.
#include<stdio.h>
#include<conio.h>
int main()
{
	char name[30];
	int id,quant,i;
	float price,amount;
	FILE*fp;
	fp=fopen("inventory.text","w");
	printf("enter items details\n");
	for (i=1;i<=3;i++)
	{
		printf("name\tid\tquant\tprice\n");
		scanf("%s%d%d%f",name,&id,&quant,&price);
		fprintf(fp,"%s%d%d%f",name,id,quant,price);
	}
	fclose(fp);
	fp=fopen("inventory.text","r");
	printf("inventory information\n");
	printf("name\tid\tquant\tprice\tamount\n");
	for (i=1;i<=3;i++)
{
	fscanf(fp,"%s%d%d%f",name,&id,&quant,&price);
	amount=price*quant;
	fprintf(stdout,"\n%s\t%d\t%d\t%.2f\t%.2f\n",name,id,quant,price,amount);
	printf("\n");
}
fclose(fp);
return 0;
}
