/*Singly Linked lISt*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *head;
void create(int t)
{
	struct node *temp, *prev;
	temp = malloc(sizeof(struct node));
	temp->data = t;
	temp->link = NULL;
	if(head == NULL)
	{
		prev = head = temp;
	}
	else
	{
		prev->link = temp;
		prev = temp;
	}
}
void traversal_cum_print()
{
	struct node *temp = head;
	while(temp != NULL)
	{
		printf("->%d",temp->data);
		temp = temp->link;
	}
}
void insert_user_pos(int pos,int info)
{
	struct node *save,*nod,*temp = head;
	int max_node = 0;
	int k = 1;
	while(temp!=NULL)
	{
		temp = temp->link;
		++max_node;
	}
	//printf("%d",max_node);
	//printf("%d",pos);
	if(pos<=max_node+1)
	{
		nod->data = info;
		if(pos == 1)
		{
			nod->link = head;
			head = nod;
		}
	else
	{
		temp = head;
		while(k != pos)
		{
			//printf("%d",k);
			save = temp;
			temp = temp->link;
			++k;
		}
		nod->link = save->link;
		save->link = nod;
	}
	}
	else
		printf("\nPlease Enter a Vailid Position to Insert");
}
void main()
{
	create(10);
	create(20);
	create(30);
	traversal_cum_print();
	insert_user_pos(4,50);
}
