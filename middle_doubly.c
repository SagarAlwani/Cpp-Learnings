/*ALgo/Code to insert a node in the middle of a linked List*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev, *next;
};
struct node *head;
void create(int t)
{
	struct node *temp, *pre;
	temp = malloc(sizeof(struct node));
	temp->prev = temp->next = NULL;
	temp->data = t;
	if(head == NULL)
	{
		head = pre = temp;
	}
	else
	{
		pre->next = temp;
		temp->prev = pre;
		pre = temp;
	}
}
void in_mid(int t)
{
	int count = 0;
	struct node *traverse = head;
	struct node *save;
	while(traverse != NULL)
	{
		++count;
		traverse = traverse->next;
	}
	count = count%2 == 0 ? count/2 : ((count/2) + 1);
	int k = 0;
	traverse = head;
	while(k!=count)
	{
		save = traverse;
		traverse = traverse->next;
		++k;
	}
	struct node *temp;
	temp = malloc(sizeof(struct node));
	//temp->prev = temp->next = NULL;
	temp->data = t;
	temp->next = save->next;
	save->next = traverse->prev = temp;
	temp->prev = save;
}
void print()
{
	struct node *temp = head;
	 while(temp!= NULL)
	 {
	 	printf("->%d",temp->data);
	 	temp = temp->next;
	 }
}
void print_rev()
{
	struct node *temp = head;
	while(temp->next!=NULL)
		temp = temp->next;
	while(temp!=NULL)
	{
		printf("->%d",temp->data);
		temp = temp->prev;
	}
}
void main()
{
	create(10);
	create(20);
	create(30);
	create(40);
	printf("\n");
	print();
	in_mid(25);
	printf("\n");
	print();
	printf("\n");
	print_rev();
}
