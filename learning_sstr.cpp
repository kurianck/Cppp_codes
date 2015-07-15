/* this is the first in the series of code that was written to learn input via string stream
coded by Kurian
*/

#include<iostream>
#include<sstream>
#include<vector>

using namespace std;

int main(int argc,char** argv){

string Digits("1 2 3");		// the string that is to be used.
    stringstream ss(Digits); // the string stream along with the string
    string Temp;				// the temp variable that is used to transfer the sstr to the vector
    vector<string>Tokens;		// the string vector.

    while(ss >> Temp)
        Tokens.push_back(Temp);
	ss.clear();
    ss.str(Tokens[0]);

    int Num = 0;
    ss >> Num;
    cout << Num;    
return 0;
}