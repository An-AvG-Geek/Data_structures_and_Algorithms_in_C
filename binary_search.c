// C Program that implents the concept of binary search . It also calculates the 
// time and space complexity of the binary search program .



#include <stdio.h>
void main()
{
    int complexity=0;

    int a[50],limit,i,j,temp,check,right,left=0,middle,flag=0;
    complexity+=2;
    printf("Enter the limit:\n");
    scanf("%d",&limit);
    complexity+=1;
    printf("Enter the elements:\n");
    for(i=0;i<limit;i++){
    complexity+=1;
      scanf("%d",&a[i]);
      complexity+=1;
      }
      complexity+=1;
    
    for(i=0;i<limit-1;i++)
    { 
        complexity+=1;
        for(j=0;j<limit-1-i;j++)
        {
            complexity+=1;
            if(a[j]>a[j+1])
            {
                complexity+=1;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                complexity+=3;

            }
        }
        complexity+=1;

    }
    complexity+=1;
    printf("The sorted array is :\n");
    for(i=0;i<limit;i++){
        complexity+=1;
    printf("%d\t\n",a[i]);
    complexity+=1;
    }
    complexity+=1;
   printf("Enter the element to be searched:\n");
    scanf("%d",&check);
    complexity+=1;

    right=limit-1;
    complexity+=1;
    while(left<=right)
    {complexity+=1;
        middle=(left+right)/2;
        complexity+=1;
        if(check<a[middle])
        {complexity+=1;
            right=middle-1;
            complexity+=1;
        }
        else if (check>a[middle]){
        complexity+=1;
          left=middle+1;
complexity+=1;

}
        else
        {
            complexity+=1;
            printf("The element is present\n");
            flag=1;
            complexity+=1;
            break;
        }}
        if(flag==0)
            {
                complexity+=1;
                printf("not present");
            }
            complexity+=1;
            printf("the time complexity is %d\n",complexity);
            printf("The space complexity is %d \n ",4*11+4*limit);

        }
