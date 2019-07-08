#include <iostream>
using namespace std;

//第一个命名空间
namespace first_space{
	void func(){
		cout<< " fist_space" << endl;
	}
	namespace second_space{
		void func1(){
		cout<< " second_space" << endl;
	}

	}
}

using namespace first_space::second_space;
int main(){
	
	func1();
	return 0;
}