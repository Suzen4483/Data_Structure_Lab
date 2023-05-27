#include <iostream>
using namespace std;

int Fib(int n){

    static int a = 0, b = 1, term;
    
    if(n > 0)
    {    
        term = a + b;
        a = b;    
        b = term;    
    
        cout << term << ", ";    
        Fib(n-1);    
    }
    
}

int main()
{
    int n;
    cout<<"Enter the number of terms u want in the fibbonaci series \n";
    cin>>n;
    
    cout << "0, 1, ";
    
    Fib(n-2);

    return 0;
}
