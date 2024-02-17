#include<stdio.h>
#include<conio.h>

int main()
 {
  int i,arr[20],j,no;
  printf("Enter size of array: ");
  scanf("%d",&no);
  printf("Enter any %d elements in array: ",no);
  for(i=0;i<no;i++)
  {
   scanf("%d",&arr[i]);
  }
  for(i=0; i<no; i++)
   {
    for(j=i+1;j<no;j++)
    {
    if(arr[i]==arr[j])
    {
    printf("\nThe Element %d is present in the position %d",arr[i],j+1);
    }
   }
   }
  getch();
 }