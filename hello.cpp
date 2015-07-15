#include<iostream.h>

/*this program generates square of the number by adding the series*/
int square(int number){
int i,sum=0;
for(i=0;i<=number;i++){
sum=sum+i;
}
return sum*2-number;
}


int main(){
int k,result;

cin>>k;
result=square(k);
cout<<result<<endl;
char a = '2'; 
int i = a - 48;
cout<<i<<endl;
}