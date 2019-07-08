#include <iostream>
using namespace std;

const int X = 3;
int main(){
	int var[X] = {10, 100, 200};
	int *p;
	p = var; //指针中第一个元素的地址
	int i =0;
	while (p <= &var[X - 1]){
		cout << " Address of var ["<<i <<"]="<<endl;
        cout << p << endl;
        cout << " Value of var ["<<i <<"]="<<endl;
        cout << *p<< endl;
        p++;
        i++;
	}
	return 0;
}