#include <iostream>
using namespace std;  //using 指令

//第一个命名空间
namespace fist_space{
	void func(){
		cout<< " fist_space" << endl; 
	}
}

//第二个命名空间
namespace second_space{
	void func(){
		cout<< " second_space" << endl;
	}
}

//使用using指令  在调用函数时  无需指定哪个命名空间  只需要提供函数或者变量名即可
using namespace fist_space;
int main(){
	//调用第一个命名空间的函数
	func();
	return 0;
}