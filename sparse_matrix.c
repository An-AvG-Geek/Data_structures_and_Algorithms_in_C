// C program that takes in a sparse matrix and prints its tuple form .




#include<stdio.h>
void main(){

printf("Enter the rows of the sparse matrix\n");
int row;
scanf("%d",&row);
int col;
printf("Enter the coloumns of the sparse matrix\n");
scanf("%d",&col);

printf("Enter the values into the matrix\n");
int sparse[row][col];
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        scanf("%d",&sparse[i][j]);
        }
      }
      int count=0;
      
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        if (sparse[i][j]!=0){
        count++;
        
        }
      }
      }
      
int tuple[count+1][3];


tuple[0][0]=row;
tuple[0][1]=col;
tuple[0][2]=count;


int tuple_row=1;
int tuple_col=0;

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
    tuple_col=0;
        if (sparse[i][j]!=0){
            tuple[tuple_row][tuple_col]=i;
            tuple_col++;
            tuple[tuple_row][tuple_col]=j;
            tuple_col++;
            tuple[tuple_row][tuple_col]=sparse[i][j];
            tuple_col++;
            tuple_row++;                          
        }
      }
     } 
printf("The sparse matrix is \n"); 
printf("row coloumn value\n");
     
for (int i=0;i<tuple_row;i++){
    for(int j=0;j<3;j++){
        printf("%d\t",tuple[i][j]);
        }
        printf("\n");
       }  
    }  
