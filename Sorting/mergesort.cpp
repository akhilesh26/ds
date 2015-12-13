#include<iostream>
using namespace std;
void merge(int * a,int l1,int r1, int l2,int r2){
	cout << "Merging " << l1 << ", " << r1 << " and " << l2 << ", " << r2 << endl;
	int b[r2-l1+1];//local array 
	int i,j,k;
	i=l1,j=l2;
	k=0;

	while(k<r2-l1+1){
	  //overflow condition------------------
		if(i>r1){
			b[k]=a[j];
			j++;
		}
		else if(j>r2){
			b[k]=a[i];
			i++;
		}
	  //------------------------------------
		else if((a[i]>a[j])){
			b[k]=a[j];
			j++;
		}
		else{
			b[k]=a[i];
			i++;
		}
		k++;
	}
	//copy arrray from local to main array-------
	for(k=0;k<r2-l1+1;k++){
		a[k+l1]=b[k];
	}
}

void mergesort(int *a,int l,int r){
	cout << "Sorting " << l << " to " << r << endl;
	if(r==l) {
		cout << "Base case: " << l << endl;
		return ;
	}
	else{
		int mid=(r+l)/2;
		mergesort(a,l,mid);
		mergesort(a,mid+1,r);
		merge(a,l,mid,mid+1,r);
	}
}

int main()
{
    int n;
	cout<<"Enter the length of arrray\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	mergesort(arr,0,n-1);
	cout<<"\n sorted array is : \n";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";

	return 0;
}
