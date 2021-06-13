#include <stdio.h>
#include <stdlib.h>

// Creating node with data and a pointer
struct node {
int data;
struct node *next;
}*head;

void createList(int n);
void search_element(int data);
void displayList();

int main()
{
int n, data, element;
printf("\nEnter the total number of nodes: ");
scanf("%d", &n);
createList(n);
printf("\nThe List is \n");
displayList();
printf("\nEnter the element to be searched in the list : "); // value of the element to be searched in the list
scanf("%d",&element);
search_element(element);
return 0;
}

void createList(int n)
{
struct node *newNode, *temp;
int data, i;
head = (struct node *)malloc(sizeof(struct node));
// When the list is empty
if(head == NULL)
{
printf("Unable to allocate memory.");
}
else
{
printf("\nEnter the data of node 1: ");
scanf("%d", &data);
head->data = data;
head->next = NULL;
temp = head;
for(i=2; i<=n; i++)
{
newNode = (struct node *)malloc(sizeof(struct node));
if(newNode == NULL)
{
printf("Unable to allocate memory.");
break;
}
else
{
printf("\nEnter the data of node %d: ", i);
scanf("%d", &data);
newNode->data = data;
newNode->next = NULL;
temp->next = newNode;
temp = temp->next;
}}}}

void search_element(int data)
{
int count = 0;
struct node* temp;
temp = head;
while(temp != NULL) // Start traversing from head node
{
if(temp -> data == data)
{
printf("\nElement found at position %d",count);
break;
}
else
{
count = count + 1;
temp = temp -> next;
}
//printf("\n Element %d is not found in the list\n",data);
}

}

void displayList()
{
struct node *temp;
if(head == NULL)
{
printf("List is empty.");
}
else
{
temp = head;
while(temp != NULL)
{
printf("%d\t", temp->data);
temp = temp->next;
}
printf("\n");
}}
