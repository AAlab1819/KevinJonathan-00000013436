#include<bits/stdc++.h>
using namespace std;

bool visited[500];
int length[500];
int matrix[401][401]={0};
int depart;

void BFS(bool train, int town, int path) 
{
    for(int i=0; i<500; i++) 
    {
        length[i]=INT_MAX;
        visited[i]=false;
    }
    
    queue<int> queues;
    queues.push(1);
    visited[1]=true;
    length[1]=0;
    
    while(!queues.empty()) 
    {
        depart=queues.front();
        queues.pop();
        
        for(int i=1; i<=town; i++) 
        {
            if(train) 
            {
                if(matrix[depart][i]==1 && visited[i]==false) 
                {
                    queues.push(i);
                    visited[i]=true;
                    length[i]=length[depart]+1;
                    
                    if(i==town) return;
                }
            }
            else 
            {
                if(matrix[depart][i]==0 && visited[i]==false)
                {
                    queues.push(i);
                    visited[i]=true;
                    length[i]=length[depart]+1;
                    
                    if(i==town) return;
                }
            }
        }
    }
}

int main() 
{
    int town, path, depart, arrive;
    int train, bus;
    cin>>town>>path;

    for(int i=0; i<path; i++) 
    {
        cin>>depart>>arrive;
        matrix[depart][arrive]=1;
        matrix[arrive][depart]=1;
    }
    
    if(matrix[1][town]==1) 
    {
        train=1;
        BFS(false, town, path);
        bus=length[town];
    }
    else
    {
        bus=1;
        BFS(true, town, path);
        train=length[town];
    }
    
    int answer=max(bus, train);

    if(answer==INT_MAX)
    {
        cout<<-1<<endl;
    }
    else 
    {
        cout<<answer<<endl;
    }

    return 0;
}