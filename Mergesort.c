#include<stdio.h>
#define MAX 20
void merge(int array[],int start,int mid,int last)
{
  
  int i=start,j=mid+1,index=start,temp[MAX],k;

  
  while((i<=mid) && (j<=last))
    {
      if(array[i] < array[j])
	{
	  temp[index ]= array[i];
	  i++;
	}
      else
	{
	  temp[index] = array[j];
	  j++;
	}
      index++;
    }


  
  if(i>mid)
    {
      while(j<=last)
	{
	  temp[index] = array[j];
	  j++;
	  index++;
	}
    }

  
  else
 {
      while(i<=mid)
	{
	  temp[index] = array[i];
	  i++;
	  index++;
        }
}


  
for(k=start;k<index;k++)
  array[k] = temp[k];
    }



void merge_sort(int array[],int start,int last)
{
  int mid;
  
       if(start<last)
       {
         mid=(start+last)/2;
         merge_sort(array,start,mid);
         merge_sort(array,mid+1,last);
         merge(array,start,mid,last);
       }
}


int main()
{
  int array[MAX],num,i;
  
  printf("\n\tEnter Number of elements\n");
  scanf("%d",&num);
  
  printf("\n\tEnter Array elements\n");
  
  for(i=0;i<num;i++)
    {
      scanf("%d",&array[i]);
    }

  
 printf("\n\tBefore Sorted Array is\n\t");

 
 for(i=0;i<num;i++)
   {
     printf("\t%d",array[i]);
   }


  
 merge_sort(array,0,num-1);
  
 printf("\n\tAfter Sorted Array is\n\t");

 
 for(i=0;i<num;i++)
   {
     printf("\t%d",array[i]);
   }

 
 return 0;
}
