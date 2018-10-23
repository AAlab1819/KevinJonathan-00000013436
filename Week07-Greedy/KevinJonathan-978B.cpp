#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int number,index;
    cin >> number;
    string filename;
    cin >> filename;

    while((filename.length()>=3)&&(filename.find("xxx")!=-1)) 
    {
        index = filename.find("xxx");
        filename.erase(index, 1);
    }
    cout<<number-filename.length()<<endl;
    
    return 0;
}