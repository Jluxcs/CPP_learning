//带参数的构造函数   

#include <iostream>
using namespace std;
class Line
{
    public: 
    	void setLength(double len);
    	double getLength(void);
    	Line(double len);  //构造函数

    private:
    	double length;
};

//成员函数的定义  包括这个构造函数
Line::Line(double len){
	cout<<"off check function line,length = "<< len<< endl;
	length = len;
}

void Line::setLength(double len){
	length = len;
}

double Line::getLength(void){
	return length;
}

int main(){
	Line line(10.0);
	cout<< " length of line : "<<line.getLength()<<endl;
	line.setLength(6.4);
	cout<< "Length of line: "<< line.getLength()<<endl;
	return 0;

}
