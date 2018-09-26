#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long button;

    cin>>button;
    
    int sum=button;
    //to count the total of attempt with fibonacci
    for(int i=1;i<button;i++)
    {
        sum+=(button-i)*i;
    }
    
    cout<<sum<<endl;
	return 0;
}