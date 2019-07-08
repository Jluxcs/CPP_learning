//重载函数  重载运算符

//在一个作用域里面 我们可以声明几个功能类似的同名函数。但是同名函数的形式参数（参数的个数   类型  顺序）必须不同。

#include <iostream>
using namespace std;

class PrintData
{
public:
	

	void print(int i, int j){
		cout<< "输："<< j <<" g"<< endl;
	}
	
	void print(char c[]){
		cout<< "输出："<< c << endl;
	}
};

int main()
{
	PrintData pd;
	pd.print(5);
	pd.print(788.22);
	char c[] = "hello world";
	pd.print(c);
	return 0;

}



