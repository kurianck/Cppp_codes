/* a program to read one line from the file and print it out
a program by Kurian
*/

#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char **argv){

ifstream infile("test.txt");

while(infile.good())
  {
    string sLine;
    getline(infile, sLine);
    cout << sLine << endl;
  }

  infile.close();
return 0;
}