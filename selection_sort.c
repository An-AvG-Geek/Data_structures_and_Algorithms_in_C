// C program to implement the concept Selection Sort. It also calculates the time and 
// space complexity of the program .



#include<stdio.h>
void main(){
    printf("Enter the limit of the array\n");
    int limit;
    int min_index;
    int temp;
    int complexity=0;
    
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
    

    // sorting code using selection sort

    for (int i=0;i<limit;i++){
        complexity+=1;
    
        for(int j=i+1;j<limit;j++){
            complexity+=1;

            min_index=i;
            complexity+=1;
            if (a[j]<a[min_index]){
complexity+=1;
            
                min_index=j;
                complexity+=1;}
            
            if (a[i]>a[min_index]){
                complexity+=1;

                temp=a[i];
                complexity+=1;
                a[i]=a[min_index];
                complexity+=1;
                a[min_index]=temp;
                complexity+=1;


            }
        
    }
    complexity+=1;

}
complexity+=1;



// printint sorted array

printf("The elements of the array are \n");
for (int i=0;i<limit;i++){
    complexity+=1;
    printf("%d ",a[i]);
    complexity+=1;
}
complexity+=1;
complexity+=1;
printf("\nThe space complexity of the program is %d\n",complexity);
printf("the time compliexity of the program is %d \n ",6*4+4*limit);


}
