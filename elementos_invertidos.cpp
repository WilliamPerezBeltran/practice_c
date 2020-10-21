#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(){  

	int n,init_value=0;
	vector<int> vector_a,vector_b;

	cout<<"deme el valor de n"<<endl;  
	cin>>n;

	for (int i = 0; i < n; ++i){
		if (i ==0){
			vector_a.push_back(init_value);
		}else{
			vector_a.insert(vector_a.end(), vector_b.begin(), vector_b.end());
			vector_b.clear();
		}

		for (int j=0;j < vector_a.size(); ++j){
			if (vector_a[j] == 0){
				vector_b.push_back(1);

			}else{
				vector_b.push_back(0);
				
			}
		}
	}

	for (int i = 0; i < vector_a.size(); ++i){
		cout<<vector_a[i]<< " ";
	}
	cout<<""<<endl;

	return 0;
} 

// borrar los elementos de un vector
// https://stackoverflow.com/questions/1525535/delete-all-items-from-a-c-stdvector

// agregar un vector a otro vector
// https://stackoverflow.com/questions/2551775/appending-a-vector-to-a-vector