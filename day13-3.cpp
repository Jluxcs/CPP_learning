//c++模板
//模板函数  定义的一般形式
//template <class type> ret-type func_name(parameter list){函数主体}
#include <iostream>
#include <string>
using namespace std;
template <typename T>
inline T Max (T& a, T& b)
{
	return a < b ? b:a;
}

int main()
{
	int i = 39;
	int j = 20;
	string s1 = "Hello";
	string s2 = "World";
	cout<<"Max: "<< Max(i, j)<< endl;
	cout<<"Max: "<< Max(s1, s2)<< endl;
	return 0;
}