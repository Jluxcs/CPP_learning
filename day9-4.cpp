//内联函数  inline 
#include <iostream>
using namespace std;
inline int Max(int x, int y){
	return (x>y)? x : y;
}

int main(){
	cout<<Max(20,10)<<endl;
	cout<< Max(0,200)<<endl;
	cout<<Max(100,2000)<<endl;
	return 0;
}