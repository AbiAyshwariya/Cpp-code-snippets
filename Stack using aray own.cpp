#include<stdio.h>
#include<stdbool.h>
#define SIZE 6
void push(int x);
int pop(int x);
void peek(int x);
bool isFull();
bool isEmpty();
int main()
{
	int stack[SIZE];
	int top=-1;
	push(10);
	push(20);
	push(30);
	printf("The elements in the stack are: ");
	while(!isEmpty)
	{
		printf("%d",pop(x));
	}
}

bool isFull()
{
	if(top+1==SIZE-1)
	{
		return True;
	}
	else
	{
		return False;
	}
}
bool isEmpty()
{
	if(top==-1)
	{
		return True;
	}
	else
	{
		return False;
	}
}

void push(int x)
{
	if(isFull)
	    printf("Stack Overflow");
	else
	{
	 top++;	
	 stack[top]=x;
	}
}
int pop()
{    
    int x;
	if(isEmpty)
	   return False;
	else
	{
		stack[top]=x;
		top--;
		return x;
	}
}
