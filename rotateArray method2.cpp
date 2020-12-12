#include<iostream>
using namespace std;
void rotateArray(int arr[],int start,int end)
{
	cout<<"Enter the size of an array"<<endl;
	cin>>start;
	cout<<"Enter the no. of rotation in an array"<<endl;
	cin>>end;
	
	while(start<end)
	{
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}
void display(int arr[],int n)
{
	cout<<"Elements in an array"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int i,j,n,d;
	int *arr= new int[n];
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	cout<<"Enter the elements in an array"<<endl;
	for(i=0;i<n;i++)
	 cin>>arr[i];
	rotateArray(arr,0,d-1);
	rotateArray(arr,d,n-1);
	rotateArray(arr,0,n-1);
	cout<<"Elements of the array after rotation are"<<endl;
	 display(arr,n);
}
