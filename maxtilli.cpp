#include <iostream>
using namespace std;

int Max_till_i(int arr[],int size){
	int mx=-199999999999999;
	cout<<"The max till i is"<<endl;
	for(int i=0;i<size;i++){
			mx=max(mx,arr[i]);
			cout<<" "<<mx;
			}
}
int main(){
	int n,i;
	cout<<"Enter the array size"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the array elements"<<endl;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	Max_till_i(a,n);
	cout<<endl;
}