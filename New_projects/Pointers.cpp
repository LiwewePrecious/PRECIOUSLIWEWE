#include <iostream>
using namespace std;
int main(){
    int firstvalue;
    int secondvalue;
    int* pPointer = nullptr;
    //assign pointer with address of firstvalue
    pPointer = &firstvalue;
    *pPointer = 10;//indirection
    //assign pointer with address of secondvalue
    pPointer = &secondvalue;
    *pPointer = 20;//indirection
    cout <<"Firstvalue is " << firstvalue <<endl;
    cout <<"secondvalue is "<<secondvalue<<endl;
    return 0;
}