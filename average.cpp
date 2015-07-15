//this is a program that is written to demo the passing of arrays by reference
//a program by kurian c k

#include<iostream>
using namespace std;

float average(int numbers[],int size){
int sum=0;

	for(int i=0;i++;i<size){			//adding the the numbers
	sum=sum+numbers[i];
	}
	
return sum;
};

int main(int argc, char**argv){
int array[10];
cout<<"enter 10 numbers:"<<endl;
	
	for (int i=0;i<10;i++){ 			// taking input from user
	cin>>array[i];
	}
	
float avg= average(array,10);
cout<<avg<<endl;
return 0;
}
