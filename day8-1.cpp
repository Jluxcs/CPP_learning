//构造函数 构造函数名字和类名完全一样  2. 创建一个类的对象时，该构造函数会被执行 
#include <iostream>
using namespace std;
class Line
{
    public: 
    	void setLength(double len);
    	double getLength(void);
    	Line();  //构造函数

    private:
    	double length;
};

//成员函数的定义  包括这个构造函数
Line::Line(void){
	cout<<"off check function line"<< endl;
}

void Line::setLength(double len){
	length = len;
}

double Line::getLength(void){
	return length;
}

int main(){
	Line line;
	line.setLength(6.4);
	cout<< "Length of line: "<< line.getLength()<<endl;
	return 0;

}





















