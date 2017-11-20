#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  int n,a,i,q,m,y,z,large=2;
  
  printf("\n\tenter a number\n");
  scanf("%d",&n);
  
  for(i=1;i<n;i++)
  q=n-1;
  for(i=1;i<large;i++)
    {
      m=q;
      y=1;
      a=rand()%q+1;
      z=a;
      
  while(m>0)
    {
      
     while(m%2==0)
      {
        z=z*z%n;
        m=(m/2);
       }
   
   m=m-1;
   y=(y*z)%n;
     }
  
	  if(y!=1)
	    printf("\n\t%d is not prime\n\t",n);
	  else
	    printf("\n\t%d is prime\n",n);
	}
  return 0;
}
