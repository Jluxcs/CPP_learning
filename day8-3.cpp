//析构函数 它会在每次删除所创建的对象的时候执行
#include <iostream>
using namespace std;
class Line
{
	public:
		void setLength(double len);
    	double getLength(void);
    	Line();  //构造函数声明
    	~Line();  //析构函数的声明
    
    private:
    	double length;
};

//成员函数定义， 包括构造函数 析构函数
Line::Line(void)
{
	cout<< "Object is being created"<< endl;
}

Line::~Line(void)
{
	cout<<"Object is being deleted"<< endl;
}

void Line::setLength(double len){
	length = len;
}

double Line::getLength(void){
	return length;
}

//程序的主函数
int main()
{
	Line line;
    //设置长度
	line.setLength(6.0);
	cout<<"Length of line :"<< line.getLength()<< endl;
	return 0;
}










