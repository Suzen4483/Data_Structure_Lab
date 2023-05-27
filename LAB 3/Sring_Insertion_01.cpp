#include<iostream>
using namespace std;
int main(){
	char s1[100];
	char s2[50];
	int loc;
	int i;
	cout<<"Enter a string\n";
	cin>>s1;
	cout<<"Enter the string to be inserted\n";
	cin>>s2;
	cout<<"Enter the location at which string is to be inserted\n";
	cin>>loc;
	char temp[100];
	for(i=0;s1[i]!='\0';i++){
		temp[i]=s1[i];
	}
	temp[i]='\0';
	int len;
	for(len=0;s2[len]!='\0';len++);
	int j=0;
	for(i=loc;i<loc+len;i++)
	s1[i]=s2[j++];
	for(i=loc;temp[i]!='\0';i++)
	s1[i+len]=temp[i];
	s1[i+len+1]='\0';
	cout<<"The modified string is "<<s1;
	return 0;
}
