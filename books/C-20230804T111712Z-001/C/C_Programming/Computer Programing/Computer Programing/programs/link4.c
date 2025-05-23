#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
/*Declaration of Linked Queue data structure*/
typedef struct node
{
  int data;
  struct node *next;
 }Q;
  Q *front,*rear;
/*
覧覧覧覧覧覧覧覧覧覧覧覧覧
The main Function
Calls:insert,delet,display
Called By:O.S.
覧覧覧覧覧覧覧覧覧覧覧覧覧
*/
void main(void)
{
  char ans;
  int choice;
  void insert();
  Q *delet();
  void display(Q *);
  front=NULL;
  rear= NULL;
  clrscr();
  do
  {
	printf("\n\tProgram For Queue Using Linked List\n");
	printf("\n            Main Menu");
	printf("\n 1.Insert\n 2.Delete \n 3.Display \n 4.Exit");
	printf("\n Enter Your Choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
	 case 1 :   do
				{
				insert();
				printf("Do you want to continue?(y/n) : ");
				flushall();
				ans = getche();
				} while(ans == 'y' || ans == 'Y');
				break;
	 case 2 : front =delet();
		  break;
	 case 3 : display(front);
		  break;
	 case 4 : exit(0);
		  break;
	default: printf("\nYou have entered Wrong Choice\n");
		 break;
   }
 } while(choice!=4);

 getch();
 clrscr();
}
/*
覧覧覧覧覧覧覧覧覧覧覧覧覧
 The get_node function
 Input:temp node
 Output:memory allocated temp node
 Called By:insert
 Calls:none
覧覧覧覧覧覧覧覧覧覧覧覧覧
*/
Q *get_node(Q *temp)
{
 temp =(Q*) malloc(sizeof(Q));
 temp->next = NULL;
 return temp;
}
/*
覧覧覧覧覧覧覧覧覧覧覧覧覧
 The insert Function
 Called By:main
 Calls:get_node
覧覧覧覧覧覧覧覧覧覧覧覧覧
*/
void insert()
{
 char ch;
 Q *temp;
 temp =get_node(temp); //allocates memory for temp node
 printf("\nInsert the element in the Queue : ");
 scanf("%d",&temp->data);

 if(front == NULL)/*creating first node*/
 {
   front= temp;
   rear=temp;
  }
  else                 /*attaching other nodes*/
   {
	rear->next=temp;
	rear=rear->next;
	}
}
/*
覧覧覧覧覧覧覧覧覧覧覧覧覧
 The QEmpty Function
 Called By:delet,display
 Input:front pointer
 Output:If Q empty then returns 1
	 otherwise returns 0
 Calls:none
覧覧覧覧覧覧覧覧覧覧覧覧覧
*/
int Qempty(Q *front)
{
 if(front ==NULL)
  return 1;
 else
  return 0;
}
/*
覧覧覧覧覧覧覧覧覧覧覧覧覧
 The delet Function
 Called By:main
 Calls:Qempty
覧覧覧覧覧覧覧覧覧覧覧覧覧
*/
Q *delet()
{
  Q *temp;
  temp=front;
  if(Qempty(front))
  {
	printf("\n\n\t\tSorry!The Queue Is Empty\n");
	printf("\nCan not delete the element");
  }
  else
   {
	 printf("\n\tThe deleted element is : %d ",temp->data);
	 front=front->next;
	 temp->next=NULL;
	 free(temp);
   }
 return front;
 }
/*
覧覧覧覧覧覧覧覧覧覧覧覧覧
 The display Function
 Input: front pointer
 Called By:main
 Calls:QEmpty
覧覧覧覧覧覧覧覧覧覧覧覧覧
*/
void display(Q *front)
{
 if(Qempty(front))
  printf("\n The Queue Is Empty\n");
 else
 {
   printf("\nThe queue is :  ");
   for(;front !=rear->next;front=front->next)
	 printf("\t%d ",front->data);
 }
 getch();
}


