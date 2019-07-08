//C++中引用和指针
//1.不存在空引用  必须指向一块合法的内存  2. 一旦引用初始化为一个对象，就不在指向另外一个对象  3.引用必须在创建时初始化
//int i = 1
//int &r = i double &s = d  r是一个初始化为i的整型引用
#include <iostream>
using namespace std;
/*int main(){
	//声明两个变量
	int i;
	double d;

	//声明两个引用
	int& r=i;
	double& s = d;

	i = 5;
	cout<<"i的值是: "<< i << endl;
	cout<<"引用r的值为"<< r << endl;

	d=3.1415;
	cout<<"d的值是: "<< d << endl;
	cout<<"引用s的值为"<< s << endl;

	return 0;

}*/
/*void swap(int& x , int& y);
int main(){
	//局部变量声明
	int a = 100; 
	int b =200;
	cout<<"交换之前a值："<< a << endl;
	cout<<"交换之前b值："<< b << endl;

	swap(a,b);

	cout<<"交换之后a值："<< a << endl;
	cout<<"交换之后b值："<< b << endl;

	return 0;

}

void swap(int& x, int& y){
	int temp;
	temp = x;
	x =y;
	y = temp;
	return;
}*/

/*class Box{
public:
	double length;
	double height;
	double breadth;;
	double getVolume(void){
		return length*height*breadth;
	}    //类成员函数可以在类的内部进行调用  或者是单独使用一个范围解析运算符 ::

};

double Box::getVolume(void){
	return length*height*breadth;
}
int main(){
	Box Box1;
	Box Box2;
	double volume = 0;

	Box1.length = 5;
	Box1.height = 6;
	Box1.breadth = 7;

	Box2.length = 7;
	Box2.height = 8;
	Box2.breadth = 9;


	volume = Box1.length* Box1.height* Box1.breadth;
	cout<< "Box1的体积为：" << volume <<endl;
	volume = Box2.length* Box2.height* Box2.breadth;
	cout<< "Box2的体积为：" << volume <<endl;
	return 0;
}*/

/*class BOX
{
	double width;  //该类的成员被假定为私有成员private
	public:
		double length;
		double height;
		double breadth;
		//成员函数的声明
		double getVolume(void);
		void set_len(double len);
		void set_heigh(double hei);
		void set_br(double br);

};

double BOX::getVolume(void){
	return length*height*breadth;
}
void BOX::set_len(double len){
	length=len;
}
void BOX::set_heigh(double hei){
	height = hei;
}
void BOX::set_br(double br){
	breadth = br;
}



int main(){
	BOX Box1; 
	BOX Box2;
	double volume = 0;

	//Box1详情
	Box1.set_len(6);
	Box1.set_heigh(7);
	Box1.set_br(8);

	//Box2详情
	Box2.set_len(1);
	Box2.set_heigh(2);
	Box2.set_br(3);

	volume = Box1.getVolume();
	cout<<"Box1:"<< volume << endl;
	volume = Box2.getVolume();
	cout<<"Box2:"<<volume<<endl;

	return 0;
}*/


/*class box
{
	public:
		double length;
		double get_width(void);
		void set_width(double wid);
	private:
		double width;	

};

//成员函数的定义
double box::get_width(void){
	return width;
}
void box::set_width(double wid){
	width = wid;
}
int main(){
	box box1;
	//不使用成员函数去设置长度
	box1.length = 10;
	cout<<"length of box1:"<< box1.length<<endl;
	//不使用成员函数去设置宽度
	//box1.width = 10;
	box1.set_width(10);
	cout<<"width of box1:"<<box1.get_width()<<endl;
	return 0;
}*/

class Box
{
	protected:
		double width;
};

class Smallbox:Box
{
	public:
		void setSmallWidth(double wid);
		double getSmallWidth(void);
};

//子类的成员函数
double Smallbox::getSmallWidth(void){
	return width;
}

void Smallbox::setSmallWidth(double wid){
	width = wid;
}


int main(){
	Smallbox box;
	//使用成员函数去设置宽度
	box.setSmallWidth(2);
	cout<<"width of box:"<< box.getSmallWidth()<<endl;
	return 0;
}
//



































