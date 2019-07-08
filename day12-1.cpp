//c++动态内存
//内存分为两部分   栈 以及 堆
//函数内部声明的变量都将占用 栈内存
//堆  在程序运行时动态分配内存  new运算符  delete运算符
// new data_type


double* pvalue = NULL;//初始化为null的指向double类型的指针

//pvalue = new double;

if (!(pvalue = new double))
{
	cout<< "ERROR: out of memory."<<endl;
	exit(1);
}

delete pvalue;//释放pvalue所指向的内存

//malloc()函数  用来分配内存  再c++中不建议使用   new关键字比起malloc()，优点在于  不仅可以分配内存  还可以创建对象
