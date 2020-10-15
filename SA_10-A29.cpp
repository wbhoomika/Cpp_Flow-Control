// Given four sides of rectangle. Find whether area > perimeter
#include <iostream>
using namespace std;
int main(){
    
    int  area, perimeter, l, b;
    cout << "Enter length: ";
    cin>> l;
    cout << "Enter Breadth: ";
    cin>> b;
    area = l * b;
    perimeter = 2 * (l + b);
    if ( area > perimeter){
        cout << "Area is greater." << endl;
    }
    else {
        cout << "Area is not greater." << endl;
    }
    return 0;
}
