// C program that implements the concept of polynomial representation using structures.


#include<stdio.h>
void main(){
int num,i;
struct poly{
int coef;
int expo;
}s[50];

printf("Enter the number of terms of the polynomial \n");
scanf("%d",&num);
printf("Enter the coeffiecneits and exponenets of the polynomial\n");
for (int i=0; i<num;i++){
    scanf("%d",&s[i].coef);
    scanf("%d",&s[i].expo);
}
printf("The polynomial represetnation using structure is \n");

for (i=0;i<num;i++){
    printf("%dx^%d",s[i].coef,s[i].expo);
    if (i!=num-1){
        printf("+");
        }
      }
    }    

