#include<iostream>
using namespace std;
int main(int argc, char**argv)
{
int num,counter = 0;
cout<<"Input number"<<endl;
cin>>num;
for (int i =2; i<num; i++)
{
if (num % i ==0){counter++;}
}
if (counter == 0){cout<<" The number is prime"<<endl;}

else{cout<<"The number is not a prime number"<<endl;}

return 0;
}
