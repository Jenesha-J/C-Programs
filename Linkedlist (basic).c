//Linked list (basic - creation)

#include<stdio.h>
#include<stdlib.h>
struct Node				//struct to create a node
{
	int data;
	struct Node *next;
};

struct Node *head=NULL;  //initially head is null (or) list is empty

void insertatlast(int val)    //func to add node at end of list
{
	struct Node *newNode = malloc(sizeof(struct Node));   //create new struct 
	newNode->data=val;  //assign the value to the data field of node
	newNode->next=NULL; //since the node created is the last node its next is NUll;
	
	if(head==NULL)		// if list is empty
	{
		head=newNode;  //assign the newly created node as head
	}
	else{				// if list has nodes find the last node in the list to add the new node.
		struct Node* temp=head;
		while(temp->next !=NULL)	//if it not the last node move to next node.
		{
			temp=temp->next;
		}
		temp->next=newNode;			//after last node os identified its next should point to the newly created node.
	}
}

void insertatbegin(int val)
{
	struct Node*newNode =  malloc(sizeof(struct Node));
	newNode->data=val;
	if(head==NULL)
	{
		newNode->next=NULL;
		head=newNode;
	}
	else
	{
		newNode->next=head;
		head=newNode;
	}
}
void display()		//func to display list 
{
	struct Node* temp=head;
	if(head == NULL)
	{
		printf("Linked list is empty\n");
		return;
	}
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
int main()		//driver code
{
	int choice,val;
	while(1)
	{
		printf("0: Display Data\n");
		printf("1: Insert Data at last\n");
		printf("2: Insert at Beginning\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 0:
				display();
				break;
			case 1:
				printf("Enter the value to Insert:\n");
				scanf("%d",&val);
				insertatlast(val);
				break;
			case 2:
				printf("Enter the value to Insert:\n");
				scanf("%d",&val);
				insertatbegin(val);
			default:
				printf("Enter a valid chioce\n\n");
				break;
		}
	}
		
}