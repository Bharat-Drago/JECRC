#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> vec={1,1,2,2,5,3,1,6,7,6,10,11};
	map<int,int> mp;
	for(int i=0;i<vec.size();i++){
		mp[vec[i]]++;
	}
	for(auto p:mp){
		// if(p.second==2){
		// 	cout<<p.first<<"->"<<p.second<<endl;
		// }
		cout<<p.first<<"->"<<p.second<<endl;
	}
	return 0;
}