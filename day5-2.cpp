#include <iostream>
using namespace std;

const int X = 3;
int main(){
	int var[X] = {10, 100, 200};
	int *p;
    p = &var[X-1];
    for (int i = X; i>0; i--){
    	cout << " Address of var ["<<i <<"]="<<endl;
        cout << p << endl;
        cout << " Value of var ["<<i <<"]="<<endl;
        cout << *p<< endl;

        p--;
    }
    return 0;
}