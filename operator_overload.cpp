//this is a program to demo operator overloading
//how to overload unary operands?
#include <iostream>
using namespace std;

class new_ops{
int a;
string name;
public:
	new_ops(int b, string input): a(b), name(input) {};
	int value() {return a;}
	string spell(){return name;}
};
int operator + (new_ops & lhs, new_ops & rhs){
return lhs.value()+rhs.value();
};
int operator % (new_ops & lhs, new_ops & rhs){
return lhs.value()*(1+ lhs.value()/rhs.value()));
}

int main(int argc, char **argv){
new_ops h(4,"kiran"),k(8,"niku");
cout<<"the addition operator gives :"<<h+k<<endl;
cout<<"the percentage operator 	   :"<<h%k<<endl;
cout<<h.spell()<<endl;
return 0;
}