#include<stdio.h>
void main()
{
 int files[25],n,i;
 printf("enter the total number of processes: ");
 scanf("%d",&n);
 printf("enter the size of the processes: ");
 for(i=0;i<n;i++)
   scanf("%d",&files[i]);
 int mem=0;
 for(i=0;i<n;i++)
 {
  printf("\n P%d from address %d to %d\n",i,mem,mem+files[i]);
  mem=mem+files[i];
 }
}
