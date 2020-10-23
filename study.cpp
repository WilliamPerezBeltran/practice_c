// C++ program to print all unique numbers in a given array using sorting
#include<bits/stdc++.h> 
using namespace std; 

int main(){ 
	vector<int> v = {4,2,5,3,5,8,3};
	sort(v.begin(),v.end());
	for (int i = 0; i < v.size(); ++i){
		cout<<i<<endl;
	}

v.push_back(3); // [3]
v.push_back(2); // [3,2]
v.push_back(5); // [3,2,5]
	return 0; 
}