#include<iostream>
using namespace std;

long factorial(int num){
	if(num==1||num==0){
		return 1;
	}
	else{
		return factorial(num -1)*num;
	}
}
int main(){
	int num;
	cout<<"Enter the nuumber"<<endl;
	cin>>num;
	
	long ans=factorial(num);
	cout<<"The factorial of the given number is "<<ans;
	return 0;
}
