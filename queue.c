// C program that implement the concept of queue.
// Its a menu driven program that has 4 menu enqueue, dequeue , peek and display.





#include<stdio.h>
int front=0;
int rear=-1;
int queue[100];
int max_size;
void enqueue();
void dequeue();
void peek();
void display();
void main(){
    printf("Enter the limit of the queue\n");
    scanf("%d",&max_size);
    printf("\tmenu\n");
    printf("1.enqueue\n");
    printf("2.dequeue\n");
    printf("3.peek\n");
    printf("4.display\n");
    printf("5.exit\n");    
    int choice=0;
    while (choice!=5){
        printf("\nEnter the choice\n");
        scanf("%d",&choice);               
        if (choice==1){
        enqueue();
        }
       else if (choice==2){
       dequeue();
       }
       else if (choice==3){
       peek();
       }
       else if (choice==4){
       display();
       }
    }
    }    
void enqueue(){
    if (rear==max_size-1){
        printf("QUEUE OVERFLOW\n");
        }
    else{
       printf("enter the value to be appended \n");
       int value;
       scanf("%d",&value);
       rear++;              
       queue[rear]=value;
       }       
       }       
void dequeue(){
    if (front>rear){
    printf("QUEUE UNDERFLOW\n");
    }
    else{
        printf("The popped element is %d\n",queue[front]);
        front++;
        }    
}
void display(){
    if (front>rear){
        printf("the queue is empty\n");
        }
    else{
        printf("The elements of the queue are are \n");
        
        for (int i=front;i<=rear;i++){
            printf("%d ",queue[i]);
            }
            }        
}
void peek(){
    if (front>rear){
        printf("the queue is empty\n");
        }
    else{
        printf("the frontmost element is %d\n",queue[front]);
        }
}

       
       

       
    
    
    

