#include <iostream>
using namespace std;
int main() {
	int matrix[20][30];
	int a[100];
	int m;
	int i,j;
	int row;int coloumn;
	cout<<"Enter the order of the matrix:";
	cin>>m;
	cout<<"Enter the elements of the matrix:";
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			if(i>j){
				matrix[i][j]=0;
			}
			else{
			cin>>matrix[i][j];	
			}
			
		}
	}
	
	cout<<"The entered upper triangular matrix is :\n";
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<"\n";
	}
	int count=0;
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
		  if(i<=j){
		  	a[count]=matrix[i][j];
		  	count++;
		    }
		}
	}
	for(int k=0;k<count;k++){
		cout<<a[k]<<" ";
	}
	cout<<"\nEnter the row and coloumn to find the element:\n";
	cin>>row>>coloumn;
	cout<<"The element is : "<<a[(row*m)+coloumn-((row*(row+1))/2)]<<" at "<<(row*m)+coloumn-((row*(row+1))/2);
	return 0;
}

