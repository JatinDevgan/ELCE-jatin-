#include<iostream>
using namespace std;
int main ()
{
int a ;
cout <<"entre salary";
cin>> a; 
int p=a*(0.40);
a=a+p;
a=a-(a/10);
cout <<"NET SALARY IS"<<a<<endl;
return 0;
}