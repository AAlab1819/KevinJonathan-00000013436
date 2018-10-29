#include <bits/stdc++.h>
using namespace std;

int main()
{
	int number;
	long long liter,temp,amount=0,minPrice=1e18;
	
    cin>>number>>liter;
    long long price[number];
    
    for (int i=0; i<number; i++)
    {
        cin>>price[i];
    }

	//to compare the values if it's cheaper to buy 2 bottles of the smaller type
    for (int i=1; i<=number; i++)
    {
        price[i] = min(price[i], price[i-1]*2);
    }

	
    for (int i=number-1; i>=0; i--)
    {
        temp=liter/(1<<i);
	//to find the cheapest amount of price to pay for the lemonade
        amount+=temp*price[i];
        liter-=temp<<i;
        minPrice=min(minPrice, amount+(liter>0)*price[i]);
    }
    cout<<minPrice<<endl;

	return 0;
}