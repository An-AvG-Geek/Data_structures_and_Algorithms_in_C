// C program that implements the concept of circular queue using array.


#include<stdio.h>
int a[50],front=-1,rear=-1,max;
void enqueue();
void dequeue();
void display();
void main()
 {
   int choice;
   printf("Enter the maximum of queue\n");
   scanf("%d",&max);
     printf("\tmenu\n");
    printf("1.enqueue\n");
    printf("2.dequeue\n");
    printf("3.display\n");
    printf("4.exit\n\n");
   do
    {
	printf("Enter the choce you want to enter\n");
	scanf("%d",&choice);
	if (choice==1){
	    enqueue();
	    }
	 else if (choice==2){
	   dequeue();
	   }
	 else if (choice==3){
	 display();
	 }
	 
	 else if (choice==4){
	     printf("Exiting ....\n");
	     break;
	     
	     }
	 else {
	    printf("Enter a valid choice\n");
	
     } } while(choice!=4);
 }
void enqueue()
 {
   int val;
   
   if(front==(rear+1)%max)
     {
	printf("queue overflow\n");
     }
   else if(front==-1&&rear==-1)
     {
	printf("Enter the value to be added\n");
   scanf("%d",&val);
	front=0;
	rear=0;
	a[rear]=val;
     }
   
   else
     {
       printf("Enter the value to be added\n");
   scanf("%d",&val);
       rear=(rear+1)%max;
       a[rear]=val;
     }
 }
void dequeue()
 {
  int item;
  if(front==-1&&rear==-1)
  {
   printf("queue underflow\n");
  }
 else if(front==rear)
  {
   item=a[front];
   printf("the dequeued element is %d\n",item);
   front=-1;
   rear=-1;
  }
 else
  {
   item=a[front];
   printf("%d is dequeued element\n",item);
   front=(front+1)%max;
  }
 }
void display() 
 {
  int i;
  if(front == -1)
  printf("queue underflow\n");
  else 
   {
    printf("\nElements of queue: ");
    for (i = front; i != rear; i = (i + 1) %max) 
     {
     	printf("%d ", a[i]);
     }
     printf("%d ", a[i]);
     printf("\nfirst positions is %d \n", front);
      printf("\nlast positions is %d \n", rear);
   }
  printf("\n");
 }
