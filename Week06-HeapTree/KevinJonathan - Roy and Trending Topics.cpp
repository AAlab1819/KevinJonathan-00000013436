#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numTopic;
    long long id, z, post, like, comment, share, score;
    vector<pair<long long, long long>> topic;
    map<long long,long long> change;
    
    cin>>numTopic;
    
    for(int i=0;i<numTopic;i++)
    {
        cin>>id>>z>>post>>like>>comment>>share;
        score = post*50 + like*5 + comment*10 + share*20 - z;
        topic.push_back(make_pair(score, id));
        change[id] = z;
    }
    
    make_heap(topic.begin(), topic.end());
    
    for(int i=0;i<5;i++)
    {
        cout<<topic.front().second<<" "<<change[topic.front().second] + topic.front().first<<endl;
        pop_heap(topic.begin(),topic.end());
        topic.pop_back();
    }
    return 0;
}