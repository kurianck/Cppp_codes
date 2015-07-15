/*A program to check whether given word is a palindrome
a program by kurian.
*/

#include <iostream>

using namespace std;

int main(int argc,char **argv){
string name;							//variables
int length,i;
bool verify=true;

cout<<"enter your name"<<endl;					//input
cin>>name;
for(length=0;name[length]!=0;length++);			//determining length

for(i=0;name[i]!=0;i++){						//iterating through alphabets 
	
	if(name[i]==name[length-i-1]){				//check if nth=(length-n)th alphabet
	continue;
	}
	
	else{
	verify=false;
	break;
	}
}

if(verify){
cout<<"it is a palindrome"<<endl;				//output
}
else{
cout<<"its not a palindrome"<<endl;
}

return 0;
}