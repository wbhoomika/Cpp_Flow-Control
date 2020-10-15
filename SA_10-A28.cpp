/*program to print first n odd number in descending order*/
#include <iostream>
using namespace std;
int main(){

     int  m;
     L1 : cout << "Enter any odd number: ";
     cin >> m;
     if(m % 2 == 0){
         cout << "You entered even number !! Please add odd number." << endl;
         goto L1; // Using goto witj lable L1.
        }
     else{
        for (int i = m; i > 0; i--)
            {
                cout << i-- << endl;
            }
     }
     return 0;
}