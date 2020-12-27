/*Queue Implementation uisng Array*/
#include<stdio.h>
#include<conio.h>
int queue[30],rear = -1, front = -1;
void enqueue(int t)
{
	if(front == -1)
		front = rear = 0;
/*	if(front == 0 && rear == 29)
		printf("Stack Overflow\n"); return;
*/	if (rear == 29)
		rear = 0;
		rear = rear+1;
	queue[rear] = t; 	
}
int dequeue()
{
	if(front == -1)
	{
		printf("Queue Underflow");
		return;
	}
	return(queue[front]);
	if(front == rear)
		front = rear = -1;
	else if(front == 29)
		front = 0;
	else
		front+=1;		
}
void main()
{
	enqueue(10);
	enqueue(10);
	enqueue(10);
	enqueue(10);
	printf("%d",dequeue());
	printf("%d",dequeue());
	printf("%d",dequeue());
	printf("%d",dequeue());
	
}
