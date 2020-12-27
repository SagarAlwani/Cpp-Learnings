#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *prev,*next;
	int data;
};
struct node *head;
void insert(int t)
{
	struct node *temp;
	temp = malloc(sizeof(struct node));
	temp->data = t;
	temp->prev = temp->next = NULL;
	if(head == NULL)
	{
		head = temp;
		temp->prev = NULL;
		//temp->next = NULL;
	}
	else
	{
		struct node *t1 = head;
		while(t1->next!= NULL)
		{
			t1 = t1->next;
		}
		t1->next = temp;
		temp->prev = t1;
	}	
}
void show()
{
	struct node *temp = head;
	while(temp != NULL)
	{
		printf("->%d",temp->data);
		temp = temp->next;
	}
}
void reverse_show()
{
	struct node *temp = head;
	while(temp->next!= NULL)
		temp = temp->next;
	while(temp != NULL)
	{
		printf("->%d",temp->data);
		temp = temp->prev;
	}
}
void main()
{
	insert(10);
	insert(20);
	insert(30);
	show();
	printf("\n");
	reverse_show();
}
