#include <iostream>  
using namespace std;  



int main(void) {  
	char c,i=0;
	int caesar,get_index;
	char alphabet[26],alphabet_vector[26];
	// int match_letter(char letter);
	string frase;
	cout<<"dame palabras: ";
	cin>>frase;

	for ( c = 'a'; c <= 'z'; ++c){
		alphabet[i] = c;
		i+=1;
	} 
	// for (int i = 0; i <= 25; ++i){
	// 	cout<<alphabet[i];
	// }
	cout<<" "<<endl;

	for (int i = 0; i <= 25; ++i){
		alphabet_vector[i]=alphabet[(i+3)%27];
	}

	// for (int i = 0; i <= 25; ++i){
	// 	cout<<alphabet_vector[i];
	// }
	cout<<" "<<endl;

	
	for (int i = 0; i <= frase.size(); ++i){
		for (int a = 0; a <= 25; ++a){
			if (alphabet[a] == frase[i]){
				 cout<< alphabet_vector[a];
				break;
			}
			
			
		}
	}
	cout <<""<<endl;




	return 0;

}    
