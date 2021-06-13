#include<stdio.h>
 
#include<conio.h>
 
#include<malloc.h>
 
typedef struct nodetype
 
{ int info;
 
  struct nodetype *next;
 
} node ;
 
void createlist(node **,int );
 
void deleteatlast(node **);
 
void display(node *);
 
void main()
 
{
 
	node *start;
 
	int item,n,i;
 
	start=NULL;
 
	printf("Enter no. of nodes :\n");
 
	scanf("%d",&n);
 
	for(i= 0 ;i< n ;i++)
 
	{
 
		printf("Item for node %d :\n",i+1);
 
		scanf("%d",&item);
 
		createlist(&start,item) ;
 
	}
 
	printf("The list is :\n");
 
	display(start);
 
	printf("\nPress any key to delete last node");
 
	getch();
 
	deleteatlast(&start);
 
	printf("\nThe list after the deletion at first is :\n");
 
	display(start);
 
	getch();
 
}
 
void createlist(node **start,int item)
 
{ 
 
	node *ptr,*last;
 
	ptr =(node*)malloc(sizeof(node));
 
	ptr->info = item ;
 
	ptr->next = NULL;
 
	if(*start == NULL)
 
	*start = ptr ;
 
	else
 
	{
 
		last = *start ;
 
		while(last->next !=NULL)
 
		{  
 
			last = last->next;
 
		}
 
		last->next = ptr ;
 
	}
 
}
 
void deleteatlast(node **start)
 
{ 
 
	node *ptr,*cptr;
 
	int temp;
 
	if((*start)->next == NULL)
 
	{ 
 
		ptr = *start ;
 
		*start = NULL;
 
		temp = ptr->info;
 
	}
 
	else
 
	{ 
 
		cptr = *start ;
 
		ptr =(*start)->next;
 
		while(ptr->next != NULL)
 
		{ 
 
			cptr = ptr;
 
			ptr = ptr->next;
 
		}
 
		cptr->next = NULL;
 
		temp = ptr->info;
 
	}
 
	free(ptr);
 
	printf("\nDeleted item is %d : \n",temp);
 
}
 
void display(node *start)
 
{   int n = 0;
 
     while(start !=NULL)
 
     { printf("\t %d",start->info);
 
       n++;
 
       start = start->next;
 
     }
 
     printf("\n Total number of nodes : %d",n);
 
}
