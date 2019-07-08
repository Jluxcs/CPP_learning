#include <iostream>
using namespace std;

int main()
{
	float a,b;
	char cal;
	cout<< "请输入op"<<endl;
	cin>>cal;
	cout<< "请输入两个数字"<<endl;
	cin>>a >>b;

	switch(cal)
	{
		case '+':
			cout<< "结果是："<< a+b<< endl;
			break;
		case '-' :
			cout<< "结果是："<<a-b<< endl;
			break;
		case '*':
			cout<< "结果是："<<a*b<< endl;
			break;
		case '/' :
			cout<< "结果是："<<a/b<< endl;
			break;
	    default :
	    	cout<< "please input correct char!"<< endl;
	    	break;
	}

	return 0;
}