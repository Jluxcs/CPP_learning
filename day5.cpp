#include <iostream>
using namespace std;
const int MAX = 3;
int main(){
	/*int var=20;
	int *ip; //指针变量
	ip = &var;
	cout<<ip<<endl;
	//参看指针中地址的值
	cout<<*ip<<endl;
	return 0;*/
    //int *p = NULL;
    //cout<<"NULL的值"<<NULL<<endl;
    //指针的算数运算（+ - * /）  指针是一个用数值来表示的地址
    int var[MAX] = {10, 100, 200};
    int *p;  //指针变量
    p = var;  //指针中的数组地址
    for (int i=0;i<MAX;i++){
    	cout << " Address of var ["<<i <<"]="<<endl;
        cout << p << endl;
        cout << " Value of var ["<<i <<"]="<<endl;
        cout << *p<< endl;

        p++;
    }
    

    return 0;
}