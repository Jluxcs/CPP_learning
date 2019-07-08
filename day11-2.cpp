//抽象类的实例
#include <iostream>
using namespace std;

class Shape{
public:
	virtual int getArea() = 0;  //提供框架接口的纯虚函数
	void setWidth(int w){
		width = w;
	}
	void setHeight(int h){
		height = h;
	}
protected:
	int width;
	int height;
};

class Rectangle: public Shape
{
public:
	int getArea()
	{
		return (width*height);
	}

};

class Triangle: public Shape
{
public:
	int getArea()
	{
		return (width*height)/2;
	}

};

int main(){
	Rectangle Rect;
	Triangle Tri;

	Rect.setHeight(5);
	Rect.setWidth(6);

	cout<<"Total Rectangle area: "<<Rect.getArea()<<endl;


	Tri.setHeight(4);
	Tri.setWidth(3);
	cout<<"Triangle area: "<<Tri.getArea()<<endl;
	return 0;
}






















