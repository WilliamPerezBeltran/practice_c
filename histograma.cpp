#include <iostream>
using namespace std;

void histograma(int my_array[]);



int main(){
	int my_array[10] = {1,4,5,2,3,1,2,1,2,5};
	// int my_array[1,4,5,2,3,1,2,1,2,5];
	histograma(my_array);
}

void histograma(int my_array[]){

	int con_1=0,con_2=0,con_3=0,con_4=0,con_5=0;
	for(int i=0;i<10;i++){
		if(my_array[i]==1){
			con_1++;
		}else if(my_array[i]==2){
			con_2++;
		}else if(my_array[i]==3){
			con_3++;
		}else if(my_array[i]==4){
			con_4++;
		}else if(my_array[i]==5){
			con_5++;
		}
	}

	cout<<"1: "<<con_1<<endl;
	cout<<"2: "<<con_2<<endl;
	cout<<"3: "<<con_3<<endl;
	cout<<"4: "<<con_4<<endl;
	cout<<"5: "<<con_5<<endl;

}
