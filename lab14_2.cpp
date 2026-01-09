#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

//Do not modify source code above this line
void showMatrix(const bool bdata[][N]){
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cout << bdata[i][j] << " ";
		}
		cout << "\n";
	}
}
void inputMatrix(double data[][N]){
	for(int i = 0; i < N; i++){
		cout << "Row " << i+1 << ": ";
		for(int j = 0; j < N; j++){
			cin >> data[i][j];
		}
	}
}

void findLocalMax(const double data[][N], bool bData[][N]){
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			bData[i][j] = false;
		}
	}

	for(int i = 1; i < N-1; i++){
		for(int j = 1; j < N-1; j++){
			if(data[i][j] >= data[i-1][j] && data[i][j] >= data[i+1][j] && data[i][j] >= data[i][j-1] && data[i][j] >= data[i][j+1]){
				bData[i][j] = true;
			}
		}
	}
}