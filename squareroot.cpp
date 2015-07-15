//this is the program to find the square root
//a program by kurian c k

#include<iostream>

using namespace std;

float sq_rt( float operand){
static int funccall=0;
float mantissa;
for(int i=0;i*i<=(int) operand;i++){
mantissa=i;
}

	//this part needs some work
	if(funccall<=2){
	int decimals= (operand*100)%100;
	int tailo=sq_rt(decimals);
	funccall++;
	}
	
float tailo=(float) tailo/10;
return mantissa+tailo;
};

int main(int argc, char** argv){
int nmber;
cin>>nmber;
cout<<sq_rt(nmber)<<endl;
}