#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	T temp;
	for (int i = 0; i < N; i++)
	{
		int j;
		temp = d[i];
		for (j = i-1;j >= 0 && d[j] < temp;j--)
		{
			d[j+1] = d[j];
		}
		d[j+1] = temp;
		if (i != 0 && i != N)
		{
			cout << "Pass " << i << ":";
			for(int i = 0; i < 10; i++) cout << d[i] << " ";
			cout << "\n";
		}
		

	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}