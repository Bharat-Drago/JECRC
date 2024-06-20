#include<bits/stdc++.h>
using namespace std;
bool slidingWindow(vector<int> &vec,int target){
	bool check=false;
	//fixed window
	// int i=0;
	// int j=0;
	int sum=0;
	// for(j=0;j<k;j++){
	// 	sum+=vec[j];
	// }
	// while(j<vec.size()){
	// 	if(sum==target){
	// 		check=true;
	// 	}
	// 	sum-=vec[i];
	// 	sum+=vec[j];
	// 	i++;
	// 	j++;
	// }

	//variable window
	int i=0;
	int j=0;
	while(j<vec.size()){
		sum+=vec[j];
		while(sum>target){
			sum-=vec[i];
			i++;
		}
		if(sum==target){
			check=true;
		}
		j++;
	}

	return check;
}
int main(){
	int n;
	cin>>n;
	vector<int> vec(n);
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
	// int k;
	// cin>>k;
	int target;
	cin>>target;
	cout<<slidingWindow(vec,target)<<endl;
	return 0;
}