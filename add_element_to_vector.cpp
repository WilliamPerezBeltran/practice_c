#include <iostream>
#include <vector>
using namespace std;


int main()
{      
    
  vector<int> vector_a;
  vector<int> vector_b;
  vector<int> vector_c;

  vector_a.push_back(0);
  vector_b.push_back(1);
  vector_a.insert(vector_a.end(), vector_b.begin(), vector_b.end());

  for (int i = 0; i < vector_a.size(); ++i){
      cout<<vector_a[i]<<endl;
    }

return 0;
} 

// #include <iostream>
// #include <vector>
// using namespace std;


// int main()
// {      
    
//   vector<int> test1;
//   int tamano=5;
 
//     for (int i = 0; i <= tamano; ++i){
//       test1.push_back(i);
//     }
    
//     for (int i = 0; i <= tamano; ++i){
//       cout<<test1[i]<<endl;
//     }

// return 0;
// } 