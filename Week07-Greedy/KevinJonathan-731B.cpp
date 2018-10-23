#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long number;
    cin>>number;
    long team[number];
    
    for(int i=0; i<number; i++) 
    {
        cin>>team[i];
    }
    
    for(int i=0; i<number; i++)
    {
    	if(team[i]%2==1)
    	{
    	    if(team[i+1]==0||i==number-1)
    	    {
    	        cout<<"NO"<<endl;
    	        return 0;
    		}
    		team[i+1]--;
    	}
    }
    cout<<"YES"<<endl;
    
    return 0;
}