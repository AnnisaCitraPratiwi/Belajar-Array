#include <iostream>
using namespace std;

int main(){
	char jurusan [] = {"ilkom unila"};
	char jurus []= {'a','b','c','\0'};
	//null char ('\0') after 'a'
	
	cout<< *jurusan <<endl;
	cout<< * jurus <<endl;
	
	//bintang itu indeks pertama gituh
	
	string fakultas [] = {"fmipa","fp","fk"};
	cout<< *fakultas<<endl;
	cout<< fakultas [1]<<endl;
	cout<< fakultas [2]<<endl;
}
