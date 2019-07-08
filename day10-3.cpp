#include <iostream>
using namespace std;

class Box
{
public:
	double getVolume(){
		return length * width * height;
	}
	void setLength(double len){
		length = len;
	}
	void setWidth(double wid){
		width = wid;
	}
	void setHeight(double hei){
		height = hei;
	}
	//用于重载+运算符，将两个box对象相加

	Box operator+(const Box& b)
	{
		Box box;
		box.length = this->length + b.length;
		box.width = this->width + b.width;
		box.height = this->height + b.height;
		return box;
	}

private:
	double length;
	double width;
	double height;

};

int main()
{
	Box Box1;
	Box Box2;
	Box Box3;

	//Box1
	Box1.setHeight(5);
	Box1.setWidth(6);
	Box1.setLength(7);

	//Box2
	Box2.setHeight(2);
	Box2.setWidth(3);
	Box2.setLength(4);

	cout<< "Box1的体积："<< Box1.getVolume()<< endl;
	cout<< "Box2的体积："<< Box2.getVolume()<< endl;

	Box3 = Box1 + Box2;

	cout<< "Box3的体积："<< Box3.getVolume()<< endl;

	return 0;


}



















