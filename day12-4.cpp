#include <iostream>
using namespace std;

int main(){
	int **p;
	int i, j;
	//分配4行 8列的二维数据
	p = new int *[4];
	for (i= 0; i< 4; i++){
		p[i] = new int [8];
	}

	for (i = 0; i < 4 ; i++){
		for (j= 0; j<8; j++){
			p[i][j] = j*i;
		}
	}
	//打印数据
	for (i = 0; i< 4; i++){
		for(j=0; j<8; j++){
			if (j==0) cout<<endl;
			cout<<p[i][j]<<"\t"<<endl;
		}

	}
	//释放申请的堆
	for (i = 0; i<4; i++){
		delete [] p[i];

	}
	delete [] p;
	return 0;	

}