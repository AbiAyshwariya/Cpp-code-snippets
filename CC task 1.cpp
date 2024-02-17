#include <stdio.h>

int main() 
{
    int N;
    scanf("%d", &N);
    char* winner;
    if (N % 2 == 0) {
         winner = "Alice";
    } else {
        winner = "Bob";
    }
  printf("%s\n", winner);
}