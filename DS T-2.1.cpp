void fun(int n)
{
    Stack S;  
    while (n > 0)
    {
      push(&S, n%2);
  
      n = n/2;
    }
    while (!isEmpty(&S))
      printf("%d ", pop(&S)); 
}
