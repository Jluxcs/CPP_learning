//c++传递指针给函数
#include <iostream>
#include <ctime>
using namespace std;

void gerSeconds(unsigned long *par);

int main(){
	unsigned long sec;
	gerSeconds(&sec);
	cout<<"当前的秒数："<<sec<<endl;

}


void gerSeconds(unsigned long *par){
	*par = time(NULL);
	return;
}