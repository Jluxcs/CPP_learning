//c++ 命名空间
// namespace 定义  keyword: namespace namespace_name{ 代码声明 }
// name::code

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

int main(){
	//调用第一个命名空间的函数
	fist_space::func();
	//调用第二个命名空间的函数
	second_space::func();

	return 0;
}
