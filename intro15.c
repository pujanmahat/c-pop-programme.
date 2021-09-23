#include <stdio.h>
#include <conio.h>
void main()
{
	int eng,nep,comp,eco,acc ,total;
	float per;
	printf("\nenter a marks of english");
	scanf("%d",&eng);
	printf("\nenter a marks of nepali");
	scanf("%d",&nep);
	printf("\nenter a marks of computer");
	scanf("%d",&comp);
	printf("\nenter a marks of economics");
	scanf("%d",&eco);
	printf("\nenter a marks of account:");
	scanf("%d",&acc);
	total=eng+nep+comp+eco+acc;
	per=(float)total/5;
	printf("\ntotal marks obtained=%d \ntotal percentage=%f",total,per);
    if(eng>=35&&eco>=35&&nep>=35&&comp>=35&&acc>=35)
    {
    	if(per>=75)
    	printf("\ndistinction");
    	
    	else if (per>=65)
    	printf("\nfirst division");
    	
    	else if(per>=50)
    	printf("\nsecond division");
    	
    else 
    	printf("\nfailed");
    	getch;
    
    	
	}
	
}
