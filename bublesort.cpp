/*This is program for bubble sort*/


#include<iostream>
using namespace std;
void bablesort(int *a,int size){
	int i,j;
	for(i=0;i<size;i++){
		for(j=0;j<size-1;j++){
			if(a[j]>a[j+1]){
				int temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
}

int main(){
	cout<<"Enter the size of array\n";
	int n;
	cin>>n;
	int arr[n];
	cout<<"Enter the element  of array\n";
	for(int i=0;i<n;i++)
		cin>>arr[i];

	bablesort(arr,n);
	cout<<"sorted array is:\n ";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
