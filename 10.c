#include<stdio.h>
int binsrc(int x [ ],int low,int high,int key)
{
int mid;
while(low<=high)
{
mid=(low+high)/2;
if(x[mid]==key)
return mid;
elseif(x[mid]<key)
low=mid+1;
else
high=mid-1;
}
return -1;
  }
Int main() 

{
int a[20],key,i,n,succ;
printf("Enter the n value up to max of 20"); scanf("%d",&n);
if(n>0)
{
printf("enter the elements in ascending order\n"); for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the key element to be searched\n"); scanf("%d",&key);
succ=binsrc(a,0,n-1,key); if(succ>=0)
printf("Element found in position = %d\n",succ+1); else
printf("Element not found \n");
}
else
printf("Number of element should be greater than zero\n"); return 0;
}
