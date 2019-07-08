///\new  delete  关键字的demo

#include <iostream>
using namespace std;

int main(){
	double pvalue = NULL;
	pvalue = new double;

	pvalue = 65734.9324;
	cout<<"value of pvalue: "<< pvalue << endl;
	delete pvalue;
	return 0;
}