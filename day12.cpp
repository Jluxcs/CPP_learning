//c++异常处理
//异常处理会涉及3个关键字  try  catch  throw
//当问题出现时，程序会抛出一个异常，通过使用throw关键字完成
//catch 捕获异常
//try  
//std::exception   所有c++异常的父类

#include <iostream>
using namespace std;

double division(int a, int b)
{
	if(b == 0)
	{
		throw "error";

	}
	return (a/b);
}


int main()
{
	int x = 50;
	int y = 10;
	double z = 0;


	try{
		z = division(x, y);
		cout<< z << endl;
	}catch (const char* msg){
		cout<< msg << endl;
	}
	return 0;
}