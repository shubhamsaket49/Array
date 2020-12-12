#include<iostream>
using namespace std;

void rotateArray(int arr[],int n,int d)
{
	cout<<"Enter the value of rotating number of elements"<<endl;
	cin>>d;
	int tmp[d];
	for(int i=0;i<d;i++)
	{
		
		tmp[i]=arr[i];
	}
	for(int i=0;i<n-d;i++)
	{
		arr[i]=arr[i+d];
	}
	for(int i=0;i<d;i++)
	{
		arr[i+n-d]=tmp[i];
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
	 rotateArray(arr,n,d);
	cout<<"Elements of the array after rotation are"<<endl;
	 display(arr,n);
}
