#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, n3;
    cout<<"Enter three numbers:";
    cin>>n1>>n2>>n3;

    if(n1>n2 && n1>n3){
     cout<<"Max is:"<<n1<<endl;
    }
    else if(n2>n1 && n2>n3){
     cout<<"Max is:"<<n2<<endl;
    }
    else{
     cout<<"max is:"<<n3<<endl;
    }
     
    return 0;
}