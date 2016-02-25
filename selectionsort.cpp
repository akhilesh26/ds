#include<iostream>
using namespace std;
void selectionsort(int *a,int size){
	for(int i=0;i<size;i++){
		int k=i;
		for(int j=i+1;j<size;j++){
			if(a[j]<a[k])
				k=j;  //k is index of minimum num
		}
	//swap k index num with i index num
		int temp=a[i];
		a[i]=a[k];
		a[k]=temp;
	}   
}

int main()
{
	int i,j,n;
	cout<<"enter the size of array\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the element of array\n";
	for(i=0;i<n;i++)
	cin>>arr[i];
	selectionsort(arr,n);
	cout<<"sorted array is:\n";
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
}

