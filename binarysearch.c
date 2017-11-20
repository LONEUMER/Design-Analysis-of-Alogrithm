#include<stdio.h>
#define MAX 20
void binarysearch(int array[],int num)
{
  int start=0,end=num-1,mid,item;
  
  printf("\n\tEnter item to be searched\n");
  scanf("%d",&item);
  
   while(start<=end)
    {
       mid=(start+end)/2;
       
        if(item<array[mid])
	   end=mid-1;
          else
           start=mid+1;
    }
       
      if(item==array[mid])
	printf("\n\t%d found",item);
      else
	printf("\n\t%d not found",item);
      
    }
int main()
{
  int array[MAX],num,i;
  
  printf("\n\tEnter Number of Elements\n");
  scanf("%d",&num);
  
  printf("\n\tEnter Array Elements\n");
  
  for(i=0;i<num;i++)
   {
    scanf("%d",&array[i]);
     }
  
  binarysearch(array,num);
  
  return 0;
}
