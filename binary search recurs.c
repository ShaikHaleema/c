//binary search through function recursive
#include<stdio.h>
int binary_search(int *a,int n,int i,int se)
{
int l=0,h=n-1,m=(l+h)/2;
if(a[m]==se)return m;
return -1;
if(a[m]<se)return binary_search(a,n,m+1,se);
if(a[m]>se)return binary_seaarch(a,m,m,se);
}
int main()
{
int se,n,i;
printf("enter the size of the array");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&se);
int res=binary_search(a,n,0,se); 
if(res==-1)printf("element not found");
else
printf("element found at %d index",res);
}

