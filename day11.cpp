//c++ 多态
#include <iostream>
using namespace std;
class Shape
{
protected:
	int width, heigth;
public:
	Shape( int a= 0, int b =0)
	{
		width = a;
		heigth = b;
	}
	virtual int area() = 0;

};


class Rectangle: public Shape
{
public:
	Rectangle(int a= 0, int b=0):Shape(a,b){ }
	int area()
	{
		cout<< "Rectangle class area: "<<endl;
		return (width*heigth);
	}
};

class Triangle: public Shape{
public:
	Triangle(int a= 0, int b=0):Shape(a,b){ }
	int area()
	{
		cout<< "Triangle class area: "<<endl;
		return (width * heigth / 2);
	}
};

//程序的主函数

int main(){
	Shape *shape;
	Rectangle rec(10, 7);
	Triangle tri(10, 5);

	//存储矩形的地址
	shape = &rec;
	//调用求矩形面积的函数
	shape->area();

	//存储三角形的地址
	shape = &tri;
	shape->area();

	return 0;

}

//纯虚函数



















