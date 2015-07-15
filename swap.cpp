// this is a function that can be used to swap two values

#include<iostream>
using namespace std;

void swap( int &a, int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
};

int main(int argc, char** argv){
int x=2,y=13;
cout<<x<<y<<endl;
swap(x,y);
cout<<x<<y<<endl;
return 0;
}