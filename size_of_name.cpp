//program to determine the size of a string;

#include<iostream>

using namespace std;

int main(int argc, char **argv){
string name;
int size;
cout<<"enter your name"<<endl;
cin>>name;
for(size=0;name[size]!=0;size++);
cout<<size<<endl;
}