#include<iostream>
using namespace std ;
int main () {
    int num , temp=0;
    cout << "ENTER NUMBER";
    cin >> num ; 
    while (num>0)
    {temp=temp+(num%10);
        num=num/10;
        /* code */
    }
    cout<< "sum of digits" << temp << endl;
    return 0 ;
}

