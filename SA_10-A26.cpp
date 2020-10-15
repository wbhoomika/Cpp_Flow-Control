/* Program to input digit and print it in words*/
#include<iostream>
using namespace std;
int main(){
    int n; 
    cout << "\n Enter number between 1 to 10 - ";
    cin >> n;
    switch (n)
    {
        case 1 : cout<<("\n 1 = One");
            break;
        case 2 : cout<<("\n 2 = Two");
            break;
        case 3 : cout<<("\n 3 = Three");
            break;
        case 4 : cout<<("\n 4 = Four");
            break;
        case 5 : cout<<("\n 5 = Five");
            break;
        case 6 : cout<<("\n 6 = Six");
            break;
        case 7 : cout<<("\n 7 = Seven");
            break;
        case 8 : cout<<("\n 8 = Eight");
            break;
        case 9 : cout<<("\n 9 = Nine");
            break;
        case 10 : cout<<("\n 10 = Ten");
            break;
        default : cout<<("\n Number out of range");    
    }
}