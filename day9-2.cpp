#include <iostream>
using namespace std;

class Line
{
private:
	int a;
public:
	Line(int b){
		a = b;
		cout<< "b的值为：" << b<< endl;
	}
	Line(const Line &c){
		a = c.a;
		cout<< "copy"<< endl;
	}
	~Line(){
		cout<< "delete"<< endl;
	}
	void display(){
		cout<< a<< endl;
	}
};

void func(Line c)
{
	cout<<"func"<<endl;
}
//Line C(A)
int main(){  
	Line A(100);
	Line B = A;
	B.display();
	func(A);
	return 0;
}














