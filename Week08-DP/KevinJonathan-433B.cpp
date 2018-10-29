#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number,answer,type,left,right;
    cin>>number;
    long long cost[number],stored[number];

	//to store the cost of the stones in an array which will be sorted
	for(int i=1;i<=number;i++)
	{
	    cin>>cost[i];
	    stored[i]=cost[i];
	    cost[i]+=cost[i-1];
	}
	
	sort(stored+1,stored+number+1);
	
	//to create an array which stores costs of the sorted stones
	for(int i=1;i<=number;i++)
	{
	    stored[i]+=stored[i-1];
	}
	
	cin>>answer;
	//to answer the questions according to the question types
	for(int i=1;i<=answer;i++)
	{
		cin>>type>>left>>right;
		if(type==1) cout<<cost[right]-cost[left-1]<<endl;
		else cout<<stored[right]-stored[left-1]<<endl;
	}

	return 0;
}