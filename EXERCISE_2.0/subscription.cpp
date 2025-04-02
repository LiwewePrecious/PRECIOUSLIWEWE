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

    switch(daysUntilExpiration){
      case 0:
       cout <<"Your subscription has expired";
       break;
      
      case 1:
       cout <<"Your subscription expires within a day.Renew now" <<endl;
       break;
      
      case 2:
       cout << "Your subscription will expire in " <<daysUntilExpiration << " days" <<endl;
        cout << "Renew now and save 10%";
        break;
       
      case 3:
        cout << "Your subscription will expire in " <<daysUntilExpiration << " days" <<endl;
        cout << "Renew now and save 10%";
        break;
      
      case 4:
         cout << "Your subscription will expire in " <<daysUntilExpiration << " days" <<endl;
        cout << "Renew now and save 10%";
        break;
      
      case 5:
       cout << "Your subscription will expire in " <<daysUntilExpiration << " days" <<endl;
        cout << "Renew now and save 10%";
        break;
       
      case 10:
         cout << "Your subscription will expires in 10 days" <<endl;
        cout << "Renew now and save 10%";
        break;
      default:
       cout <<"You have an active subscription";

       return 0;
        
      }


}