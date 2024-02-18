#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sp,cp;
    cout<<"Enter your selling price:";
    cin>>sp;
    cout<<"Enter your cost price:";
    cin>>cp;

    if(sp>cp){
     int profit = sp-cp;
     cout<<"Your profit is :"<<endl;
    } 
    else if(cp>sp){
     int loss = cp-sp;
     cout<<"Your loss is:"<<endl;
    }
    else{
     cout<<"No profit or loss:"<<endl;
    }
     
    return 0;
}