//STL 标准模板库
//三大组件  容器(containers) 算法(Algorithms) 迭代器（iterators）
//容器：deque  list   vector  map  某一类对象的集合
//算法作用在容器上 排序  初始化   搜素  转换
// 迭代器  对集合进行迭代遍历 

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//创建一个向量存储 int
	vector<int> vec;
	int i;

	//显示原始的vector的大小
	cout<< "vector size is: " << vec.size() << endl;

	//向vector中加入5个值
	for (i=0 ; i<5; i++){
		vec.push_back(i); // 在向量的末尾插入一个值
	}

	//显示一个现在的vector大小
	cout<< "New vector size is: " << vec.size() << endl;  //显示向量的大小

	for(i=0 ; i<5; i++){
		cout<< "value of vec is  ["<< i <<"] = "<< vec[i] << endl;
	}
	//使用迭代器iterator 访问值
	vector<int>::iterator v = vec.begin(); // 指向向量开头的迭代器
	while(v != vec.end()){
		cout<< "value of v ="<< *v <<endl;   //指向向量末尾的迭代器
		v++;
	}
	return 0;

}  












