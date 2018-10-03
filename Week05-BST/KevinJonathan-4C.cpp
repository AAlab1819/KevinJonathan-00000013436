#include <bits/stdc++.h>
using namespace std;

int main()
{
    int request;
    string name;
    map<string,int>data;
    
    cin>>request;
    
    //to check the data
    for(int i=0;i<request;i++)
    {
        cin>>name;
        //to check if the name isn't registered yet
        if (data[name]==0)
        {
            data[name]=1;
            cout<<"OK"<< endl;
        }
        //to output the same name appended with the numbers
        else
        {
            cout<<name<<data[name]<<endl;
            data[name]+=1;
        }
    }
    return 0;
}