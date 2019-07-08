#include <iostream>
using namespace std;

int main(){
	int year;
	cin>> year;
	if (year%4 == 0){
		if (year%100 == 0){
			if (year%400 == 0)
				cout<< "The year "<< year<< "is 闰年。"<< endl;
			else
				cout<< "The year "<< year<< "is not 闰年。"<< endl;
		}
		else
			cout<< "The year "<< year<< "is 闰年。"<< endl;
    }
    else
    	cout<< "The year "<< year<< "is not 闰年。"<< endl;
		
	return 0;
}
