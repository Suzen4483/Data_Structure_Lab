#include<iostream>
using namespace std;
int n1,n2,n3;
struct poly{
	int coeff,exp;
};
int read_poly(poly p[]){
	int n;
	cout<<"\nEnter the number of terms in polynomial:\n";
	cin>>n;
	cout<<"\nEnter the coeffiecient and exponent of the polynomial in DESCENDING ORDER\n";
	for(int i=0;i<n;i++){
		cin>>p[i].coeff>>p[i].exp;
	}
	return n;
	
}
int add(poly p1[],poly p2[],poly p3[]){
	int i=0,j=0,k=0;
	while(i<n1 && j<n2){
		if(p1[i].exp>p2[j].exp){
			p3[k]=p1[i];
			i++;k++;
		}
	    else if(p2[j].exp>p1[i].exp){
			p3[k]=p2[j];
			j++;k++;
		}
		else{
			p3[k].coeff=p2[j].coeff+p1[i].coeff;
			p3[k].exp=p2[j].exp;
			j++;k++;i++;
		}
	}
	if(i<n1){
		while(i<n1){
			p3[k]=p1[i];
			i++;k++;
		}
	}
	else{
		while(j<n2){
			p3[k]=p2[j];
			j++;k++;
		}
	}
	return k;
}
void print_poly(poly p[],int n){
	for(int i=0;i<n;i++){
		if(p[i].coeff==0){
			continue;
		}
		else if (p[i].exp==0){
		  cout<<p[i].coeff;	
		}
		else{
			cout<<p[i].coeff<<"x^"<<p[i].exp<<" ";
		}
		
	}
}
int main(){
	poly p1[200],p2[200],p3[400];
	cout<<"Enter first polynomial:\n";
    n1=read_poly(p1);
	cout<<"Enter second polynomial:\n";
	n2=read_poly(p2);
	n3=add(p1,p2,p3);
	cout<<"Sum of the polynomial is :\n";
	print_poly(p3,n3);
	
	
	
	return 0;
}
