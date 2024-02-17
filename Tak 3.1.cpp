#include<stdio.h>

int main(void)
{
	int testcases,input,lost_check;
	scanf("%d",&testcases);
	
        while(testcases>0)
	{
		lost_check = 0;
		scanf("%d",&input);
		if(input==1)
		{
			lost_check =1; 
		}
		else if((input-1)%4==0)
		{
			lost_check = 1;
		}
		
		if(lost_check)
		printf("ALICE\n");
		else
		printf("BOB\n");
		testcases--;
	}
}