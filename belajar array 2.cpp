#include <iostream>
using namespace std;

int main(){
	int myArray [5] = {100,200,300,400,500};
//	for (int i=0; i<5; i++){
//		cout<<"Value of element "<< i <<" is "<< myArray[i]<<endl;
//		cout<<"Address of element "<< i <<" is "<< * myArray<<endl;
//	}
	cout << sizeof(myArray)<<endl;
    //kalo ini 4 bit dikali banyak array (4bit * 5 = 20)
	cout << sizeof(myArray)/ sizeof(*myArray)<<endl;
    //dimensi nya berapa gituu
	
        cout<<endl;
    	cout << sizeof(double)<<endl;
        //double itu 8 bit
        //int 4 bit

        cout<<endl;
    	cout << sizeof(char)<<endl;
        //char itu 1 bit
 



//    cout<< myArray<<endl;
//    cout<< myArray;
	return 0;
}
