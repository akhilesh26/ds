#include<iostream>
#include<cstdio>
using namespace std;
//partition return the position of pivot
int  partition(int *a,int l,int r){
     int k=l;
	for(int i=l;i<r;i++){
		if(a[k]>a[i+1]){
			int j = k+1;
			int temp=a[k];
			a[k]=a[i+1];
			a[i+1]=temp;
			k=i+1;
            int temp1 =a[k];
			a[k]=a[j];
			a[j]=temp1;
			k=j;

		}
	}
	printf("Partition from %d to %d, index = %d\n", l, r, k);
	return k;
}
 void quicksort(int *a ,int l,int r, int size){
	printf("quicksort call from %d to %d\n", l, r);
 	if(r<=l) {
//		printf("Base case: %d\n", r);
		return;
	}
	int p=partition(a,l,r);
	for(int i=0;i<size;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	quicksort(a,l,p-1,size);
	quicksort(a,p+1,r,size);
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
		cout << arr[i] << " ";
	}
	cout << endl;
    quicksort(arr,0,n-1,n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}


