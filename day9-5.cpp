//c++ this指针  只有成员函数才有this指针
#include <iostream>
using namespace std;

class Box
{
public:
	Box(double l =2, double b = 2, double h = 2)
	{
		cout<<"hello"<<endl;
		length = l;
		breadth = b;
		heigth = h;
	}
	double Volume(){
		return length*breadth*heigth;
	}
	int compare(Box box)
	{
		return this->Volume() > box.Volume();
	}
	private:
		double length;
		double breadth;
		double heigth;
};

int main()
{
	Box Box1(3.3, 1.2, 1.5);
	Box Box2(7.5, 4.6, 3.6);

	if(Box1.compare(Box2))
	{
		cout<<"smaller"<<endl;
	}
	else
	{
		cout<<"bigger"<<endl;
	}
	return 0;
}












