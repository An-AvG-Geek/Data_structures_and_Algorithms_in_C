// C program that implements the concept of stack. Its a menu driven program and has
// 4 different functions : pop peek display push 


#include<stdio.h>
int top=-1;
int stack[100];
int max_size;
void push();
void pop();
void display();
void peek();
void main(){
printf("Enter the limit of the stack\n");
scanf("%d",&max_size);
printf("\tmenu\n");
printf("1.push\n");
printf("2.pop\n");
printf("3.peek\n");
printf("4.display\n");
printf("5.exit\n");
int choice=0;
printf("\n");
while (choice!=5){
    printf("\nEnter the choice");
    scanf("%d",&choice);
    
    if (choice==1){
        push();
        }
        
    else if (choice==2){
        pop();
        }
    else if (choice==3){
        peek();
        }
    else if (choice==4){
        display();
        }
        
    }
printf("Exit from the program\n");
}
void push(){

    if (top==max_size-1){
        printf("STACK OVERFLOW\n");
        }
        
    else{
        printf("Enter the value to be appended\n");
        top+=1;
        
        scanf("%d",&stack[top]);
        }        
        }      
void pop(){
    if (top==-1){
        printf("STACK UNDEFLOW\n");
        }
    else{
        printf("The popped element is %d \n",stack[top]);
        top-=1;
        }
        }                                   
void display(){
    if (top==-1){
        printf("the stack is empty\n"); 
        }
    else{
    printf("the elements of the stack are\n");    
    for (int i=0;i<=top;i++){
        printf("%d ",stack[i]);
    }
    }
}
void peek(){
    if (top==-1){
        printf("The stack is empty\n");
        }
    else{
    printf("the topmost element of the stack is %d",stack[top]);
    }
    }












