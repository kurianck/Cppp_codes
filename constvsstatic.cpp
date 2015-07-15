#include<iostream>
 using namespace std;
 
 const int g=0;
 
 void somefunction(){
 static int k=0;
 k++;
 cout<<k<<endl;
 }
 
 int main(int argc,char **argv){
 
 for(int h=0;h<5;h++){
 somefunction();
 cout<<g<<endl;
 }
 return 0;
 } 