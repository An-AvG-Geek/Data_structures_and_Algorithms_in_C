// Program to implement the concepts of bubble sort in C.
//It also calculates the time and space complexity of the program.


#include<stdio.h>
void main(){
    int limit;
    int temp;
    int complexity=0;
    
    printf("Enter the limit of array\n ");
    scanf("%d",&limit);
    complexity+=1;
    int a[limit];

    printf("Enter the values into the array\n");
    
    for (int i=0;i<limit;i++){
        complexity+=1;
        scanf("%d",&a[i]);
        complexity+=1;

    }
    complexity+=1;

    for (int i=0;i<limit;i++ ){
        complexity+=1;
        for (int j=i+1;j<limit;j++){
            complexity+=1;
            if (a[i]>a[j]){
                complexity+=1;
                temp=a[i];
                complexity+=1;
                a[i]=a[j];
                complexity+=1;
                a[j]=temp;
                complexity+=1;


            }
        }
        complexity+=1;
    }
    complexity+=1;

    printf("the sorted array is \n");
    for (int i=0;i<limit;i++){
        complexity+=1;
        printf("%d ",a[i]);
        complexity+=1;

    }
    complexity+=1;
    printf("\nThe time complexity will be %d\n",complexity);
    printf("\nThe space complexity will be %d\n",5*4+4*limit);


}
