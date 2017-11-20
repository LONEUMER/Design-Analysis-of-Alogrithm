#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define MAX 10

int i,j;

int repeatedelement(int *arr,int num)
{
  while(1)
    {
  i=rand()%num+1;
  j=rand()%num+1;
  
  if((i!=j)&&(arr[i]==arr[j]))
      return i;
    }
}
int main()
{
  int arr[MAX],num;
  
  printf("\n\tenter number of elements\n");
  scanf("%d",&num);
  
  printf("\n\tEnter array elements\n");
  
  for(i=1;i<=num;i++)
    {
      scanf("%d",&arr[i]);
    }
  
  repeatedelement(arr,num);
  
  printf("\n\t%d is repeated\t",arr[i]);
  
  return 0;
}
