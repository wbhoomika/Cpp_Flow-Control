// Check if given character is letter or digit.
#include <iostream>
using namespace std;
int main(){

    char  x;
    cout << "Enter any character: ";
    cin>> x;
    if ( x >= 48 && x <= 57){
        cout << "Entered character is digit" << endl;
    }  
    else if ( (x >= 65 && x <= 90) || (x >= 97 && x <= 122)){
        cout << "Entered character is letter" << endl;
    }
    else{
        cout << "Entered character is Special Character" << endl;
    }
      

     return 0;
}