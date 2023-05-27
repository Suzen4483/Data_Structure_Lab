#include<iostream>
using namespace std;

int stack[100],top=-1,n=100;
void push(int val){
	if (top>n-1){
		cout<<"Stack overflow\n ";
	}
	else {
		top++;
		stack[top]=val;
	
	}
} 
void pop(){
	if(top<=-1){
		cout<<"Stack Underflow\n ";
	}
	else{
		cout<<"The Popped Element is "<<stack[top];
		top--;
	}
}
void peek(){
	cout<<stack[top]<<endl;
}
void display(){
	for(int i=top;i>-1;i--){
		cout<<stack[i]<<"\n";
	}
}

int main(){
	int val,a;
	do{
	cout<<"<<<<<<<<<<<<<<<<<<<Enter your choice>>>>>>>>>>>>>>>>>>>>>>>>\n";
	cout<<"1)Push The value to the Stack\n";
	cout<<"2)Pop the value from the stack\n";
	cout<<"3)Display the stack\n";
	cout<<"4)Peek into the stack\n";
	cout<<"5)Stop\n\n\n";
	cin>>a;

		switch(a){
			case 1:
				cout<<"Enter the value to be pushed into the stack \n";
				cin>>val;
				push(val);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				peek();
				break;
			default :
			    break;	
		}
		
	}while(a!=5);
	
	
	
	return 0;
}
