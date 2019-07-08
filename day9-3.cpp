// c++友元函数  定义在类的外部 可以访问类的私有和保护成员  友元函数不是成员函数
//友元函数 友元类


#include <iostream>
using namespace std;

class Box
{
	double width;

public:
	friend void printWidth(Box box);
	void setWidth(double wid);
	~Box();
};

//成员函数的定义
void Box::setWidth(double wid)
{
	width = wid;
}

Box::~Box(void)
{
	cout<<"delete"<<endl;
}
void printWidth(Box box)
{
	cout<< " width of Box:"<<box.width<<endl;
}

int main(){
	Box box;
	box.setWidth(10);
	printWidth(box);
	return 0;

}

