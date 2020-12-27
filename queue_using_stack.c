#include<stdlib.h>
#include<stdio.h>
#define size 30
int stack1[size],stack2[size];
int top1 = -1,top2 = -1;
void push1(int t)
{
	if(top1 == size-1)
		printf("Stack1 Overflow");
	else
		stack1[++top1] = t;	
}
int pop1()
{
	if(top1 == -1)
		printf("Stack1 Underflow");
	else
		return (stack1[top1++]);	
}
void push2(int t)
{
	if(top2 == size-1)
		printf("Stack2 Overflow");
	else
		stack2[++top2] = t;	
}
int pop2()
{
	if(top2 == -1)
		printf("Stack2 Underflow");
	else
		return (stack2[top2++]);	
}/*By Making enqueue Operation Costly*/
void enqueue(int t)
{
	if(top1 == -1)
		push1(t);
	else
	{
		while(top1!=-1)
			push2(pop1());
		push2(t);
		while(top2!=-1)
			push1(pop2());	
	}	
}
int dequeue()
{
	if(top1 == -1)
		printf("queue Underflow");
	else
		return (pop1());	
}
void main()
{
	enqueue(1);
	enqueue(2);
	printf("%d",dequeue());
}
