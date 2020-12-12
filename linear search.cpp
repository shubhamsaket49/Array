#include<iostream>
using namespace std;
int linear(int arr[],int n,int x)
{
	int i,flag=0;
	cout<<"enter the element which u want to search"<<endl;
	cin>>x;
	for(i=0;i<n;i++)
	{
	if(x==arr[i])
	{
		flag=1;
		break;
		
	}
	else
	   flag=0;
	    
}
if(flag==1) 
   cout<<"element found at index" << i<<endl;
else
   cout<<"-1"<<endl;
}
int main()
{
	int i,n,x;
	int *arr= new int[n];
	cout<<"enter the elements of an array"<<endl;
	cin>>n;
	cout<<"enter the elements of an array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	linear(arr,n,x);
}
