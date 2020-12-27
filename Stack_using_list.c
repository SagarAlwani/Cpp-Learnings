/*Stack using Singly Linked list*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *next;
	int data;
};
struct node *header;
struct node *top;
struct node *head;
void push(int t)
{
	struct node *temp,*prev;
	temp = malloc(sizeof(struct node));
	temp->data = t;
	//temp->next = NULL;
	temp->next = head;
	head = top = temp;
	/*if(head == NULL)
		head = top = prev = temp;
	else
	{
		prev->next = temp;
		temp->data = t;
		temp->next = NULL;
	}
*/	
}
struct node *pop()
{
	struct node *temp;
	if(top == NULL)
	{
		printf("Stack UNderflow");
		exit(0);
		//return (0);
	}	
	temp = top;
	head = head->next;
	top = top->next;	
	return(temp);
}
void insert(int t)
{
	struct node *temp,*prev;
	temp = malloc(sizeof(struct node));
	temp->data = t;
	temp->next = NULL;
	if(header == NULL)
		header = prev = temp;
	else
	{
		prev->next = temp;
		prev = temp;
	}	
}
void show()
{
	struct node *temp = header;
	while(temp!=NULL)
	{
		printf("->%d",temp->data);
		temp = temp->next;
	}
}
void reverse()
{
	int k = 0;
	struct node *t,*temp = header;
	//temp1 = header;
	while(temp!=NULL)
	{
		push(temp->data);
		temp = temp->next;
	}
	struct node *k = temp;
	while(k!=NULL)
	{
		printf("%d",pop()->data);
		 	
	}
		/*if(t == NULL)
		{
			printf("%d",(pop()->data));
			t = pop();
			
		}
			
		else
		{
			t->next = pop();
			t = t->next;
		}	
		--k;
	}*/
}
void main()
{
	insert(10);
	insert(20);
	insert(30);
	insert(40);
	insert(50);
	printf("\n");
	show();
	printf("\nNow Reversed Linked List\n");
	reverse();
	show();
}
