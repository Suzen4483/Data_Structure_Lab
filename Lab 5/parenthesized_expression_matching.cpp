#include<iostream>
#include<string.h>
using namespace std;
char stack[100];
int top=-1,n=100;
void push(int val){
	if (top>n-1){
		cout<<"Stack overflow\n ";
	}
	else {
		top++;
		stack[top]=val;
	
	
	}
} 
 char pop(){
	if(top<=-1){
		cout<<"Stack Underflow\n ";
	}
	else{
		
		top--;
	}
	return stack[top+1];
}
int match(char a,char b){
	if(a=='('&& b==')'){
		return 1;
	}
	if(a=='{' && b=='}'){
		return 1;
	}
	if(a=='[' && b==']'){
		return 1;
	}
	return 0;
}
void check(char exp[]){
	int i;
	
	for(i=0;i<strlen(exp);i++){
		if(exp[i]=='(' || exp[i]=='[' || exp[i]=='{' )
		push(exp[i]);
		else if(exp[i]==')' || exp[i]==']' || exp[i]=='}' )
		if(top==-1){
			cout<"Invalid equation\n";
			return ;
		}
		else {
			char temp =pop();
			if(match(temp,exp[i])!=1){
				cout<<"Invalid Expression\n";
				return ;
			}
		}
	}
	if(top==-1){
		cout<<"Valid Expression\n";
		return ;
	}
	else{
		cout<<"Invalid expression\n";
		return ;
	}
}
int main(){
	char exp[200];
	int valid;
	cout<<"Enter the expression:\n";
	gets(exp);
	check(exp);
	return 0;
}
