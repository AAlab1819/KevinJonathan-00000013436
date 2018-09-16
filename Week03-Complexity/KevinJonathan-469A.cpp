#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int level,levelX,levelY,pass,count=0;
    
    cin>>level;
    
    int levelArray[level]={0}; //to flag the levels that aren't passed yet
    
    //to set the levels passable by Little X
    cin>>levelX;
    for(int i=0;i<levelX;i++)
    {
        cin>>pass;
        levelArray[pass-1]=1; //set the level to passed
    }
    
    //to set the levels passable by Little Y
    cin>>levelY;
    for(int i=0;i<levelY;i++)
    {
        cin>>pass;
        levelArray[pass-1]=1; //set the level to passed
    }
    
    //to count the levels that are passed
    for(int i=0;i<level;i++) 
    {
        if(levelArray[i]==1) count++;
    }
    
    if(count==level) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
    
    return 0;
}