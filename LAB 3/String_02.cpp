#include<iostream>
using namespace std;

int main(){
	char str[100],str2[100];
	cout<<"Enter the first string:";
	gets(str);
	cout<<"Enter the second string:";
	gets(str2);
	
	int i = 0, j = 0;
    char str5[2000];
    
   
	
    while (str[i] != '\0')
    {
        str5[i] = str[i];
        i++;
    }
    while (str2[j] != '\0')
    {
        str5[i] = str2[j];
        j++;
        i++;
    }
    str[i] = '\0';
    cout<<"After Concatenation ";
	cout<<str5;
    return 0;
}
