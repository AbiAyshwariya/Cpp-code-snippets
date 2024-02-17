#include<stdio.h>
int main()
{
	int a[50],n,i,search,j,temp,x;
	int max = a[0] ;
	printf("Enter the number of the elements: ");
	scanf("%d",&n);
	printf("\nEnter the number one by one: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe Array Entered is: ");
	printf("[");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("]");
	printf("\n=================================");
	printf("\nEnter the Searching element: ");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(a[i]==search)
		{
			printf("The number %d is present in the position:%d",search,i);
		}
	}
	for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (a[i] > a[j]) 
                {
 
                    temp =  a[i];
                    a[i] = a[j];
                    a[j] = temp;
 
                }
 
            }
 
        }
        printf("\n =================================");
        printf("\n The Sorted Array is: ");
        printf("[");
        for (i = 0; i < n; ++i)
        {
            printf("%d ", a[i]);
	    }
	    printf("]");
	    printf("\nThe minimum element in the array is:%d",a[0]);
	     for (int i = 0; i<n; i++) 
		 {     

           if(a[i] > max)   
		   { 
             max = a[i];    
           }
	     }
          printf("\nLargest element present in given array: %d\n", max);  
	    

	return 0;
}