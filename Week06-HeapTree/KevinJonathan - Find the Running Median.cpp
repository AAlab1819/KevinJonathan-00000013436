#include<bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    int number;
    cin>>number;
    int array[number];
    priority_queue<double> stream; 
    double temp;
    
    // min heap to store the greater half elements 
    priority_queue<double,vector<double>,greater<double>> greater; 
  
    cin>>array[0];  
    double median = array[0]; 
    stream.push(arr[0]); 
  
    cout<<median<<endl; 
  
    for (int i=1; i < n; i++) 
    { 
        cin>>array[i];
        temp = array[i]; 
  
        //left side heap has more elements) 
        if (stream.size()>greater.size()) 
        { 
            if (temp<median) 
            { 
                greater.push(stream.top()); 
                stream.pop(); 
                stream.push(x); 
            } 
            else greater.push(x); 
            median = (stream.top() + greater.top())/2.0; 
        } 
  
        //both heaps are balanced
        else if (stream.size()==greater.size()) 
        { 
            if (temp<med) 
            { 
                stream.push(x); 
                median = (double)stream.top(); 
            } 
            else
            { 
                greater.push(x); 
                median = (double)greater.top(); 
            } 
        }
        
        //right side heap has more elements 
        else
        { 
            if (x>med) 
            { 
                stream.push(greater.top()); 
                greater.pop(); 
                greater.push(x); 
            } 
            else stream.push(x); 
            median = (stream.top() + greater.top())/2.0; 
        } 
        cout<<median<<endl; 
    } 
    return 0; 
} 