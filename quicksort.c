#include <stdio.h>
#define MAX 30
 
void quick_sort(int[],int,int);
int partition(int[],int,int);
 
int main()
{
    int array[MAX],num,i;
    printf("\n\tEnter number of Elements\n");
    scanf("%d",&num);
    printf("\nEnter array elements\n");
    
    for(i=0;i<num;i++)
        scanf("%d",&array[i]);


     printf("\nArray Before sorting\n\n");
    
    for(i=0;i<num;i++)
        printf("%d\t",array[i]);
    quick_sort(array,0,num-1);
    printf("\n\nArray After sorting:\n\n");
    
    for(i=0;i<num;i++)
        printf("%d\t",array[i]);
    
    return 0;        
}
 
void quick_sort(int array[],int beg,int end)
{
    int j;
    if(beg<end)
    {
        j=partition(array,beg,end);
        quick_sort(array,beg,j-1);
        quick_sort(array,j+1,end);
    }
}
 
int partition(int array[],int beg,int end)
{
    int piv,i,j,temp;
    piv=array[beg];
    i=beg;
    j=end+1;
    
    do
    {
        do
            i++;
            
        while((array[i] < piv)&&(i <= end));
        
        do
            j--;
        while(piv < array[j]);
        
        if(i<j)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }while(i < j);
    
    array[beg] = array[j];
    array[j] = piv;
    
    return(j);
}

