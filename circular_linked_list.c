#include<stdlib.h>
#include<stdio.h>
struct node
{
	int data;
	struct node *link;
};
struct node *head;
void insert(int t)
{
	struct node *temp,*prev;
	temp = malloc(sizeof(struct node));
	temp->data = t;
	temp->link = NULL;
	if(head == NULL)
	{
		head = prev = temp;
		temp->link = head;
	}	
	else
	{
		prev->link = temp;
		prev = temp;
		temp->link = head;
	}	
}
void show()
{
	struct node *temp = head;
	/*printf("->%d",temp->data);
	temp = temp->link;
	*/do
	{
		printf("->%d",temp->data);
		temp = temp->link;
	}while(temp!=head);
}
void delete(int t)
{
	struct node *prev = head,*temp = head->link;
	if(t == head->data)
	{
		struct node *ti = head->link;
		while(ti->link!=head)
			ti = ti->link;	
		head = head->link;
		ti->link = head;
	}
	while(temp!=head)
	{
		if(temp->data == t)
		{
			prev->link = temp->link;
			return;
		}
		prev = temp;
		temp = temp->link;
	}
}
void main()
{
	insert(10);
	insert(20);
	insert(30);
	show();
	delete(20);
	printf("\n");
	show();
}
