#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long employee;
	int group = 0;
	
	cin >> employee;
	int manager[employee];
	
	for (int i = 1; i <= employee; i++)
	{
		cin >> manager[i];
	}
	
	//to count the group
	for(int i = 1;i <= employee;i++)
	{
		int count = 1;
		int next = manager[i];
        while(next != -1)
        {
          count++;
          next = manager[next];
        }
        group = max(group,count);
	}
	
	cout << group;
    
    return 0;
}