#include <iostream>
using namespace std;

int main() {
	int matrix[50][50], array[50];
	int row, column, n;
	
	cout << "Enter order of matrix\n";
	cin >> n;
	
	cout << "Enter upper triangular matrix elements\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if(j>=i){
			cin >> matrix[i][j];
		   }
		   else{
		   	matrix[i][j]=0;
		   }
		}
	}
	
	int flag = 0;
	cout << "\nThe matrix is\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			array[flag] = matrix[i][j];
			flag++;
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}
	for(int i=0;i<flag;i++){
		cout<<"\n"<<array[i]<<" "<<"\n";
	}
	
	cout << "Enter row and column to find element\n";
	cin >> row;
	cin >> column;
	
	cout << "The element is\n" << array[(row * n) + column-((row*(row+1))/2)];

	return 0;
}
