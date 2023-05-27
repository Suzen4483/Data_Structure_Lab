#include<iostream>
#include<math.h>
using namespace std;

void tower(int n,char source,char temp,char destination){
	if(n==1){
		cout<<"Move disc 1 from "<<source<<" to "<<destination<<endl;
		return;
	}
	tower(n-1,source,destination,temp);
	cout<<"Move disk "<<n<<" from "<<source<<" to "<<destination<<endl;
	tower(n-1,temp,source,destination);
}
int main(){
	int a;
	char source='A',temp='B',destination='C';
	cout<<"Enter the number of discs ";
	cin>>a;
	int total=pow(2,a)-1;
	tower(a,source,temp,destination);
	cout<<"Total no of moves is "<<total;
	return 0;
}
