/*Ek acha Queue banane ki recipe*/
#include<stdio.h>
#include<stdlib.h>
#define size 30
int queue[30];
int front = -1,rear = -1;
void enqueue(int t)
{
	if((front == 0 && rear == size-1)||(front == rear+1))
	{
		printf("\nQueue Overflow\n");
		exit(0);
	}
	if(front == -1)
	{
		front = rear = 0;
		queue[rear] = t;
	}	
	else
		queue[++rear] = t;
}
int dequeue()
{
	int t;
	if(front == -1 || rear == -1)
	{
		printf("\nQueue Underflow\n");
		exit(0);
	}
	else if(front == rear)
	{
		t = queue[front];
		front = rear = -1;
		return t;
	}
	else
		return(queue[front++]);
}
void main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	//enqueue(50);
	printf("%d ",dequeue());
	printf("%d ",dequeue());
	printf("%d ",dequeue());
	printf("%d ",dequeue());
	/*printf("%d ",dequeue());
	printf("%d ",dequeue());
*/}
