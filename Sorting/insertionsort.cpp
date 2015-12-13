#include<iostream>
using namespace std;
void insertionsort(int *a,int size){
	for(int i=1;i<size;i++){
		for(int k=i;k>0&&a[k]<a[k-1];k--){
		//----swap ------
			int temp =a[k];
			a[k]=a[k-1];
			a[k-1]=temp;
		//-----------------
			for(int j=0;j<size;j++)
			cout<<a[j]<<" ";
			cout<<endl;
         }

	}
}

void shellsort(int *a,int size){
	int h=3;
	for(h=3;h>0;h=h-2){
		cout<<h<<endl;
		for(int i=h;i<size;i++){
			for(int k=i;k>h-1&&a[k]<a[k-h];k-=h){
				int temp=a[k];
				a[k]=a[k-h];
				a[k-h]=temp;
				for(int m=0;m<size;m++)
				cout<<a[m]<<" ";
				cout<<endl;
			}
		}
	}
}



int main(){
	cout<<"Enter the size\n";
	int n;
	cin>>n;
	int arr[n];
	cout<<"enter the element\n";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	insertionsort(arr,n);	
//	shellsort(arr,n);
	cout<<"sorted array is: \n";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
    return 0;
}
