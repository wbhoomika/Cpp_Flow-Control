/* Program to print the following series:
    a. 1 4 7 10.......40
    b. 1 -4 7 -10....-40 */
#include <iostream>
using namespace std;
int main()
{

    int i, j;
    for (j = 1; j <= 40; j += 3){
        cout << j << " ";
        ;
    }
    cout << "\n"<< endl;

    for (i = 1; i <= 40; i += 3){
        if (i % 2 == 0){
            cout << "-"  << i << " ";
        }
        else{
            cout << i << " ";
        }
    }
    return 0;
}