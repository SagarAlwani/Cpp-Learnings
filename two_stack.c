/*Two Srack Using Single Array*/
#include<stdio.h>
#include<stdlib.h>
#define n 8
int stack[8],top1 = -1, top2 = (n/2) - 1;
//int t,k;
void push1(int t)
{
	if(top1 == (n/2)-1)
		printf("Stack1 Overflow\n");
	else
		stack[++top1] = t;	
}
int pop1()
{
	if(top1 == -1)
		printf("Stack1 Underflow\n");
	else
		return (stack[top1--]);	
}
void push2(int k)
{
	if(top2 == n-1)
		printf("Stack2 Overflow\n");
	else
		stack[++top2] = k;
}
int pop2()
{
	if(top2 == (n/2) - 1)
		printf("Stack2 Underflow\n");
	else
		return (stack[top2--]);
}
int main()
{
	printf("Pushing in Stack\n");
//	push1(2);
//	push1(3);
//	push1(3);
//	push1(3);
	//push1(4);
	push2(2);
	push2(3);
	push2(3);
	push2(3);
	//push2(4);
	printf("%d",pop2());	
	printf("%d",pop2());
	printf("%d",pop2());
	printf("%d",pop2());
//	printf("%d",pop2());
}
