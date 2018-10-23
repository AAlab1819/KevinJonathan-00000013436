#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int number, seqA, seqB = 0, seqC = 0;
    cin>>number;

    for(int i=0; i<number; i++)
    {
        cin >> seqA;
        if(seqA >= 0) seqB += seqA;
        else seqC += seqA;
    }
    cout<<seqB-seqC<<endl;
    
    return 0;
}