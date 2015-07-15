/* A program to demonstrate the possibility of difference between compound statement and
/* simple arithmetic statement.
/* credits due wienman in lynda series. */
# include <iostream>
using namespace std;

int & function(int & a){
	cout<<"function called"<<endl;
	return ++a;
	}

int main(int argc, char** argv){
	int i=10;
	printf("i is:%d \n",i);
	printf("i=i+1 is:%d \n",function(i)=function(i)+1);
	printf("i+=1 is: %d \n",function(i)+=1);
	return 0;
	}