#include<bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    int n;
    cin>>n;
    int arr[n];
    priority_queue<double> s; 
  
    // min heap to store the greater half elements 
    priority_queue<double,vector<double>,greater<double> > g; 
  
    cin>>arr[0];  
    double med = arr[0]; 
    s.push(arr[0]); 
  
    cout << med << endl; 
  
    for (int i=1; i < n; i++) 
    { 
        cin>>arr[i];
        double x = arr[i]; 
  
        //left side heap has more elements) 
        if (s.size() > g.size()) 
        { 
            if (x < med) 
            { 
                g.push(s.top()); 
                s.pop(); 
                s.push(x); 
            } 
            else
                g.push(x); 
            med = (s.top() + g.top())/2.0; 
        } 
  
        //both heaps are balanced
        else if (s.size()==g.size()) 
        { 
            if (x < med) 
            { 
                s.push(x); 
                med = (double)s.top(); 
            } 
            else
            { 
                g.push(x); 
                med = (double)g.top(); 
            } 
        }
        //right side heap has more elements 
        else
        { 
            if (x > med) 
            { 
                s.push(g.top()); 
                g.pop(); 
                g.push(x); 
            } 
            else
                s.push(x); 
  
            med = (s.top() + g.top())/2.0; 
        } 
        
        cout << med << endl; 
        
        
    } 
    return 0; 
} 