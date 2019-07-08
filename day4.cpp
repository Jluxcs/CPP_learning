//c++函数  strcat()字符串拼接  memcpy()
//函数的定义 
/*return_type function_name(parameter list){
    body of the function	
}*/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

/*int max(int x, int y);
int main(){
	int num1, num2;
	cout<< "输入两个数："<< endl;
	cin>>num1;
	cin>>num2;
	int max_ = max(num1, num2);
	cout<< "最大值为："<< max_<<endl;
	return 0;
}
int max(int x, int y){
    int t;
	if (x>y){
		t = x;
	}
	else
		t = y;
	return t;
}*/	
/*void output();
int main(){
	output();
	return 0;
}

void output(){
	cout<< "hello world"<<endl;
}*/

//lambda   [capture](parameters)->return-type{body}
//type  arrayname  [array size]
 /*int main(){
	int arr[10];
	int i;
	for (i = 0;i<10;i++){
		arr[i] = i;
	}
	for (i = 0;i<10; i++){
		cout<< arr[i]<<endl;
	}
	
	return 0;
}*/

/*int main(){
	char arr[6] = {'h','e','l','l','o','\0'};
	string arr1 = "hello";
	int len = arr1.size();
	cout<<len<<endl;
	return 0 ;
}*/
int main(){
	int var =20;
	int *ip;
	ip = &var;
	
	cout<<var<<"  "<< ip <<" "<< *ip << endl;
	return 0;
}






























