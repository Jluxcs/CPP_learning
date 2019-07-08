#include <iostream>
using namespace std;


double getAverage(int *arr, int size);
int main(){
	int a[5] = {1000, 3, 5, 30, 4};
	double avg;
	avg = getAverage(a, 5);
	cout<<"平均数："<< avg<< endl;
	return 0;

}

double getAverage(int *arr, int size)
{
	int i , sum = 0;
	double avg;
	for (i=0; i< size; ++i){
		sum+=arr[i];
	}
	avg = double(sum) / size;
	return avg;
}