#include<stdio.h>
int main()
{
  int a[20];
  int n,i,j,key,temp;
  int first,mid,last;
  printf("enter the no. of elements");
  scanf("%d",&n);
  printf("enter the elements\n");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  printf("elements before sorting\n");
  for(i=0;i<n;i++)
    {
      printf("%d\t",a[i]);
    }
  for(i=0;i<n-1;i++)
    {
      for(j=0;j<n-1-i;j++)
        {
          if(a[j]>a[j+1])
          {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
          }
        }
    }
printf("\nthe elements after sorting\n");
for(i=0;i<n;i++)
    {
      printf("%d\t",a[i]);
    }
printf("\nenter the element to be searched\n");
scanf("%d",&key);
first=0;
last=n-1;
while(first<=last)
  {
    mid=(first+last)/2;
    if(key==a[mid])
    {
      printf("the element found at %d",mid+1);
      return 0;
    }
    else if(key<a[mid])
    {
      last=mid-1;
    }
    else
    {
      first=mid+1;
    }
  }
  printf("the element is not found");
  return 1;
  
}