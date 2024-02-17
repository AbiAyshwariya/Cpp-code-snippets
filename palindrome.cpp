#include <stdio.h>
int main(){
   char string[100];
   int start, middle, end, length = 0;
   gets(string);
   while ( string[length] != '\0' )
      length++;
   end = length - 1;
   middle = length/2;
   for( start = 0 ; start < middle ; start++ ){
      if ( string[start] != string[end] ){
         printf("NO");
         break;
      }
      end--;
   }
   if( start == middle )
      printf("YES");
   return 0;
}