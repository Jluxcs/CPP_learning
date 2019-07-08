//c++继承
//class name-class(public protected private)  ji-class
#include <iostream>
using namespace std;

//基类
class Shape
{
public:
	void setWidth(int w)
	{
		width = w;
	}
	void setHeight(int h)
	{
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
		return (width * height);
	}

};


int main(){
	Rectangle Rect;
	Rect.setWidth(5);
	Rect.setHeight(4);

	cout<<"面积是："<< Rect.getArea()<<endl;

	return 0;
}













