#include <iostream>
#include <string>
 using namespace std;

int main(){
    string array_Of_Strings [8] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
     
    for(int k = 0; k < 8; k++){
        string precious = array_Of_Strings [k];
      if (precious[0]== 'B'){
         cout<< precious <<endl;     
         }

    }

}