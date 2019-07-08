//c++中的文件操作和流
#include <iostream>
#include <fstream>
//fstream 有三种数据类型  ofstream（创建文件向文件写入信息） ifstream（从文件读取信息）  fstream（两种功能）
using namespace std;

int main()
{
	char data[100];
	//以写模式打开文件
	ofstream outfile;
	outfile.open("afile.dat");

	cout<<"writing to the file"<<endl;

	cout<<"enter your name: ";
	cin.getline(data, 100);

	//向文件写入用户输入的数据
	//使用 << 流插入运算符

	outfile << data <<endl;

	cout<< "enter your age: ";
	cin >> data;
	cin.ignore();

	//再向文件文件写入用户输入的数据

	outfile<< data <<endl;

	//关闭打开的文件
	outfile.close();

	ifstream infile;
	infile.open("afile.dat");
	cout<<"Reading from the file"<<endl;
	//流提取运算符 >> 
	infile >> data;

	//在屏幕上写入数据
	cout << data << endl;

	//再次从文件中读取数据，并显示


	infile>> data;
	cout<< data << endl;

	//关闭打开的文件
	infile.close();

	return 0;
}













