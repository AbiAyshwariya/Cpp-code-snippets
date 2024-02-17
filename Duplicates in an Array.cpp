#include<stdio.h>
int main()
{
	int n,i,j,a[50],search;
	int length = sizeof(a)/sizeof(a[0]);    
	printf("\n Enter the number of the elements: ");
	scanf("%d",&n);
	printf("\n Enter the elements one by one: ");
	for(i=0;i<n;i++)
	{
	 scanf("%d",&a[i]);
	}
	printf("\n The Created Array :");
	printf("[");
	for(i=0;i<n;i++)
	{
	 printf("%d ",a[i]);
	}
	printf("]");
	printf("\n=========================");
	printf("\nDuplicates in an array: ");
	for(int i = 0; i < length; i++) 
	{    
      for(int j = i + 1; j < length; j++) 
	   {    
         if(a[i] == a[j])    
            printf("%d\n", a[j]);    
        }    
    }    
    
}