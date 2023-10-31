// C program that implements the concept of linear search .
// It also calculate the time and space complexity of the program.



#include<stdio.h>

void main(){
	// variable for time complexity
	
	int complexity=0;   
	

	// getting the limit of the array
	
	printf("Enter the limit of the array\n");   
	int limit;
	
	scanf("%d",&limit);
	complexity++;
	
	int array[limit];
	
	int position,key=0;
	complexity++;
	
	// inputting values into the array
	
	printf("Enter the values into the array\n");
	
	for (int i=0;i<limit;i++){
		complexity++;
		scanf("%d",&array[i]);  
		complexity++;
		}
		complexity++;
		
		
		
	// inputting search value
	
	int search;
	
	printf("Enter the element to be searched\n");
	scanf("%d",&search);
	complexity++;
	
	// searching for search in array
	
	for (int i=0;i<limit;i++){
		complexity++;
		
		if(search==array[i]){
		        complexity++;
			key=1;
			position=i;
			complexity++;
			complexity++;
			break;
			}
			}
			
	// printing result
	
	if (key==1){
		printf("the element found at %d th position in the array\n",position);
		complexity++;
		
			
		   
		   }
		   
		   
	else{
		printf("The element not found in the array \n");
		
		}
		
	//printing time complexity of the program
	complexity++;
	
	printf("the time complexity of the program is %d\n",complexity);
	
	// finding  and printing space complexity
	
	printf("the space complexity is %d\n", 6*4+4*limit);
	
	
	
		
		}
		   
		   
		
		
