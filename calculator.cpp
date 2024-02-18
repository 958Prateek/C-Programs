#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2;
    cout<<"Enter two integers";
    cin>>n1>>n2;

    cout<<"Enter an operator(+,-,*,/,%):";
    char op
    cin>>op;

    switch (op) {
     case'+':
          cout<<"sum is:"<<n1+n2<<endl;
          break;
     case'-' :
          cout<<"difference is:"<<n1-n2<<endl;
          break;
      case'*' :
          cout<<"product is:"<<n1*n2<<endl;
          break; 
      case'/' :
          cout<<"dividion is:"<<n1/n2<<endl;
          break;
      case'%' :
          cout<<"remainder is:"<<n1%n2<<endl;
          break;                        
    }
     
     
    return 0;
}