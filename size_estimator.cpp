/* A program to study the size of a structure*/

# include <iostream>
 using namespace std;
 
 struct f{
 char a;
 int u;
 };
 
 int main( int argc, char** argv){
 cout<<(int)sizeof(struct f)<<endl;
 }