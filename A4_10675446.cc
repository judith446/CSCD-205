#include<iostream>
using namespace std;
int gcd(int arg1,int arg2);
int main (int argc, char**argv)
{int a, b;
cout<<"Enter two positive values"<<endl;
cin>>a;
cin>>b;
int result =  gcd ( a, b);
if(gcd)
{
cout<<"The gcd of "<< a << " and " << b<< " is "<<result<<endl;
}
return 0;
}

int gcd(int arg1, int arg2)
{
return (arg2!=0)? gcd(arg2, arg1 % arg2): arg1;
}
