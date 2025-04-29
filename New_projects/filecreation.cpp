#include <iostream>
#include <fstream>
using namespace std;
int main(){
    // create and open a text file
    ofstream Myfile("Examplefile.txt");
    //close the file
    Myfile.close();
    return 0;

}