#include <iostream>
using namespace std;
int main(){
    //declare pointer and initialize it 
    //so that it doesnt store a random address
    int *pPointer = nullptr;
    int integerVar = 5;
    pPointer = &integerVar;
    
    //output the value of integerVar
    cout << "IntegerVar: " << integerVar <<endl;
    cout << "Address of integerVar: " <<&integerVar <<endl;
    cout << "pPointer: "<< pPointer<< endl;
    cout << "Address of pPointer: " << &pPointer << endl;
    return 0;
}