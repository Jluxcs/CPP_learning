//public private protected
//pubilc继承
#include <iostream>
#include <assert.h>
using namespace std;

/*class A{
public:
	int a;
	A(){
		a1 =1;
		a2 =2;
		a3 = 3;
		a = 4;
	}
	void fun(){
		cout<<a<<endl;
		cout<<a1<<endl;
		cout<<a2<<endl;
		cout<<a3<<endl;
	}
public:
	int a1;
protected:
	int a2;
private:
	int a3;
};

class B : public A{
public:
	int a;
	B(int i){
		A();
		a =i;
	}
	void fun(){
		cout<<a<<endl;
		cout<<a1<<endl;
		cout<<a2<<endl;
		//cout<<a3<<endl;
	}
};

int main(){
	B b(10);
	cout<<b.a<<endl;
	cout<<b.a1<<endl;
	//cout<<b.a2<<endl;
	//cout<<b.a3<<endl;
	system("pause");
	return 0;
}*/

// protected 继承
/*class A{
public:
	int a;
	A(){
		a1 = 1;
		a2 = 2 ;
		a3 = 3;
		a = 4;
	}
	void fun (){
		cout<<a<<endl;
		cout<<a1<<endl;
		cout<<a2<<endl;
		cout<<a3<<endl;
	}
public:
	int a1;
protected:
	int a2;
private:
	int a3;
};

class B : protected A{
public:
	int a;
	B(int i){
		A();
		a = i;
	}
	void fun(){
		cout<<a<<endl;
		cout<<a1<<endl;
		cout<<a2<<endl;
		//cout<<a3<<endl;
	}
};

int main(){
	B b(10);
	cout<<b.a<<endl;
	//cout<<b.a1<<endl;
	//cout<<b.a2<<endl;
	//cout<<b.a3<<endl;
	system("pause");
	return 0;
}*/

/*class A{
public:
	int a;
	A(){
		a1 = 1;
		a2 = 2 ;
		a3 = 3;
		a = 4;
	}
	void fun (){
		cout<<a<<endl;
		cout<<a1<<endl;
		cout<<a2<<endl;
		cout<<a3<<endl;
	}
public:
	int a1;
protected:
	int a2;
private:
	int a3;
};

class B : private A{
public:
	int a;
	B(int i){
		A();
		a = i;
	}
	void fun(){
		cout<<a<<endl;
		cout<<a1<<endl;
		cout<<a2<<endl;
		//cout<<a3<<endl;
	}
};

int main(){
	B b(10);
	cout<<b.a<<endl;
	//cout<<b.a1<<endl;
	//cout<<b.a2<<endl;
	//cout<<b.a3<<endl;
	system("pause");
	return 0;
}*/
















































