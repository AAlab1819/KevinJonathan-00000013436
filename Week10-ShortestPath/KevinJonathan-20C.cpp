#include <bits/stdc++.h>
using namespace std;

const int SIZE = 1e5+5;
vector<pair<int,int> > connections[SIZE];
int previous[SIZE];
long long int shortest[SIZE] = {0};
bool visited[SIZE] = {0};

void dijkstra(int start)
{
    typedef tuple<long long int, int, int> path;
    long long int weight;
    int source, destination;
    priority_queue<path, vector<path>, greater<path>> pq;
    pq.push(make_tuple(0, start, -1));
    while(pq.empty() == false) 
    {
        path current = pq.top();
        pq.pop();
        weight = get<0>(current);
        destination = get<1>(current);
        source = get<2>(current);
        
        if(visited[destination] == false)
        {
            visited[destination] = true;
            ::previous[destination] = source;
            for(int i=0; i<connections[destination].size(); i++)
            {
                if(visited[connections[destination][i].first] == false)
                    pq.push(make_tuple(weight+connections[destination][i].second, connections[destination][i].first, destination));
            }
        }
    }
}

int main()
{
    int vertice, edge, edgeA, edgeB, length;
    cin>>vertice>>edge;
    
    for(int i=0; i<SIZE; i++)
    {
        ::previous[i] = -1;
    }
    
    while(edge--)
    {
        cin>>edgeA>>edgeB>>length;
        connections[edgeA].push_back(make_pair(edgeB, length));
        connections[edgeB].push_back(make_pair(edgeA, length));
    }
    
    dijkstra(1);
    
    if(::previous[vertice] == -1) cout << -1;
    else 
    {
        stack<int> vertex;
        
        while(vertice>0) 
        {
            vertex.push(vertice);
            vertice = ::previous[vertice];
        }
        
        while(vertex.empty() == false)
        {
            cout<<vertex.top()<<" ";
            vertex.pop();
        }
    }
    
    return 0;
}