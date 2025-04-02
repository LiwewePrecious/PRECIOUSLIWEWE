#include <iostream>
#include <string>
#include <sstream>
using namespace std;
bool me(string wishnumber);

int main(){
    string wishnumber;
    int p = 0;
    int j;
    int count = 0;
    
    
    cout <<"Enter an integer value between 5 and 10\n";
    while(p == 0){
        cin >> wishnumber;

        if (me(wishnumber) == false){
            cout << "You have entered an invalid number. Please try again\n";

        }
        else{  
             j = stoi(wishnumber);

                if(j >=5 && j<=10){
                    p = 1; } 
                else {
                    cout <<"Please enter a number between 5 and 10" <<endl;
                }  

        }
       
        
    }
    cout << "Your Input value "<<wishnumber << " has been accepted";

    return 0;
}

bool me(string wishnumber){
    for (char ch: wishnumber){
        if (!isdigit(ch)){
            return false;
        }
    }
    return true;
}