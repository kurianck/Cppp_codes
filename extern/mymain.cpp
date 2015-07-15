#include<iostream>

using namespace std;

extern void func();
extern int var;

int main(int argc, char**argv){
cout<<" This program demos the extern class:"<<endl;
func();
return 0;
}