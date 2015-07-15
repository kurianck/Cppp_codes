//this is a program printing factorial of numbers.

#include<iostream>
using namespace std;

int factorial(int n){
int fact=1;
for(int i=1;i<=n;i++){
fact=fact*i;
}
return fact;
};

int main(int argc, char ** argv){
int number;
cin>>number;
cout<<factorial(number)<<endl;
return 0;
}