/* Program to check if square root of a number is prime. */
# include <iostream>
# include <math.h>
using namespace std;
int main(){
    int n, i, m=0, flag=0;  
    cout << "Enter the Number: ";  
    cin >> n;  
    m = sqrt(n);  
    for(i = 2; i <= m; i++)  
    {  
      if(n % i == 0)  
      {  
          cout<<"The number "<< n <<" is not Prime."<<endl;  
          flag = 1;  
          break;  
      }  
  }  
  if (flag==0)  
      cout << "The number "<< n <<" is Prime."<<endl;  
  return 0;  
}