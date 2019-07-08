//duojicheng
#include <iostream>
using namespace std;

//基类  Shape

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

//基类 cost
class Cost
{
public:
	int getCost(int area)
	{
		return area*30;
	}
};

class Rectangle: public Shape, public Cost
{
public:
	int getArea()
	{
		return (width * height);
	}
};


int main()
{
	Rectangle Rect;
	Rect.setWidth(5);
	Rect.setHeight(7);
	int area;

	area = Rect.getArea();
	cout<<"total area:"<< Rect.getArea()<<endl;

	cout<< "total cost"<<Rect.getCost(area)<<endl;

	return 0;
}











