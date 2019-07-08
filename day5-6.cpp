#include <iostream>
using namespace std;

const int MAX = 4;
int main(){
    /*const char *names[MAX] = {"zhang", "zhao", "qian", "Li"};
    for (int i =0; i< MAX; i++){
    	cout<< "Value of names[" << i << "] =";
    	cout<< names[i]<<endl;
   }*/



	int var = 100;
	int *p;
	int **pp;
	p = &var;//var的地址

	pp = &p;//使用&获取p的地址
	cout <<" var的值："<< var<< endl;
	cout << "*p 的值:"<< *p<<endl;
	cout << "**pp 的值:"<<**pp<<endl;
	cout <<" var的地址："<< &var<< endl;
	cout<< "var的地址"<<p<< endl;
	cout<< "p的地址"<<&p<< endl;
	cout<< "var的地址"<<*pp<< endl;
	cout<<"pp的地址"<<&pp<<endl;
    return 0;
}