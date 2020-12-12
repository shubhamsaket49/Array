#include<bits/stdc++.h>
using namespace std;
int binary(int arr[],int n,int x)
{
 int l=0;
 int r=n-1;
 int mid=0,flag=0;
 cout<<"Enter the Searching element"<<endl;
 cin>>x;
 while(l<=r)
 {
 	mid=(l+r)/2;
 	if(arr[mid]==x)
 	{
 		flag=1;
 		break;
	 }
	else if(arr[mid]<x) l=mid+1;
	else r=mid-1;
}
if(flag==1)
 cout<<"Element found at "<< mid<<endl;
else
  cout<<"Element is not found"<<endl;
 	
}
int main()
{
	int i,n,x;
	cout<<"Enter the number of elements in sorted array"<<endl;
	cin>>n;
	int *arr=new int[n];
	cout<<"Enter the elements in sorted order in an array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	binary(arr,n,x);
}
