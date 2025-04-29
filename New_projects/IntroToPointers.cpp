#include <iostream>
using namespace std;
int main(){
    //declare a pointer and initialize it
    //so that it doesnt store random memory
    int* pPointer = nullptr;
    int integerVar = 5;
    //assign pointer to address of object
    pPointer = &integerVar;
    //output the value of integerVar
    cout <<"integerVar: " <<integerVar <<endl;
    //output the address of integerVar
    cout <<"Address of integerVar: " <<&integerVar<<endl;
    //output address assigned to pPointer
    cout <<"pPointer: " << pPointer<<endl;
    //output the address of pPointer
    cout <<"Address of pPointer: "<< &pPointer;
    return 0;
}