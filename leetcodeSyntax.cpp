#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> swapAdjacent(vector<int> nums){
	for(int i=0;i<nums.size()-1;i=i+2){
		swap(nums[i],nums[i+1]);
	}
	return nums;
}
int main(){
	int n;
	cin>>n;
	vector<int> nums(n);
	for(int i=0;i<n;i++){
		cin>>nums[i];
	}
	// vector<int> vec(3,5);
	// vec[0]=10;
	// cout<<vec.size()<<endl;
	// vec.push_back(1);
	// vec.push_back(3);
	// cout<<vec.size()<<endl;
	// // vec.pop_back();
	// cout<<vec.size()<<endl;
	// sort(vec.begin(),vec.end());
	// reverse(vec.begin(),vec.end()-1);
	vector<int> ans=swapAdjacent(nums);
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
}