#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, vector<int>> tree;
    int number, value, leafCount, spruce=1;
    
    cin>>number; 
    
    //to insert the tree values
    for(int i=2; i<=number; i++)
    {
        cin>>value;
        tree[value].push_back(i);
    }
    
    //to check
    for(int i=1; i<=number; i++)
    {
        if(tree[i].size()==0) continue; //a leaf
        else
        {
            leafCount=0;
            //to count the childrens in the tree
            for(int j=0; j<tree[i].size(); j++)
            {
                if(tree[tree[i][j]].size()==0) leafCount++;
            }
            //to check if the tree is a spruce 
            if(leafCount<3) {
                spruce = 0;
            }
        }
    }
    
    if(spruce==1) cout << "Yes";
    else cout << "No";

    return 0;
}