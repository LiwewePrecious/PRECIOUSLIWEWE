#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
/*The <ctime> header defines time related functions functions.
The <cstdlib> header is used to locate memory for random numbers */
int  main(){
    int daysUntilExpiration;
    srand((unsigned)time(NULL));
    daysUntilExpiration = (0 + rand() % (10 - 1 + 1));
      
      if (daysUntilExpiration == 10){
        cout <<"Your subscription will expire soon.Renew now\n";
      }
      else if(daysUntilExpiration <= 5 && daysUntilExpiration != 1){
        cout << "Your subscription will expire in " <<daysUntilExpiration << " days"<< endl;
        cout << "Renew now and save 10%";

      }
      else if (daysUntilExpiration = 1){
        cout <<"Your subscription expires within a day" <<endl;
        cout <<"Renew now and save 20%";

      }
      else if(daysUntilExpiration = 0){
        cout <<"Your subscription has expired";
      }
      else if (daysUntilExpiration > 10){
        cout <<"You have an active subscription";
      }


}