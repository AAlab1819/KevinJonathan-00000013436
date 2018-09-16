#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int panned,oofed,trampled,threatened,damaged=0;
    long dragon;
    
    cin>>panned;
    cin>>oofed;
    cin>>trampled;
    cin>>threatened;
    cin>>dragon;
    
    if(panned==1||oofed==1||trampled==1||threatened==1) damaged=dragon;
    else
    {
        for(int i=1;i<=dragon;i++)
        {
            if(i%panned==0||i%oofed==0||i%trampled==0||i%threatened==0) damaged++;
        }
    }
    
    cout<<damaged<<endl;

    return 0;
}