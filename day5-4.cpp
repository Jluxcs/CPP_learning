#include <iostream>
using namespace std;

const int MAX = 3;
int main(){
    int var[MAX] = {10, 100, 200};
	int *p;

	p = var;
	for (int i=0; i<MAX; i++){
		cout << "var["<< i << "]的地址为"<<endl;
		cout<<p<<endl;

		cout<< "var[" << i << "]的值为"<<endl;
		cout<<*p<<endl;
		p++;
	}
}