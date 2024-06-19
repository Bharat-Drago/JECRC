#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={4,1,5,6,8,9,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int i=0;
	int j=n-1;
	while(i<j){
		swap(arr[i],arr[j]);
		i++;
		j--;
	}
	for(int k=0;k<n;k++){
		cout<<arr[k]<<" ";
	}
	cout<<endl;
	return 0;
}