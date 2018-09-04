#include <iostream>
using namespace std;

int main()
{
    int numStudent,teamStudent;
    cin>>numStudent>>teamStudent;
    
    int array[numStudent-1];
    int count=0;
    
    //to store and input ratings of students
    for(int i=0;i<numStudent;i++)
    {
        cin>>array[i];  
    }
    
    //to flag the values which has the same value as the previous one and change it into -1.
    for(int i=0; i<numStudent-1; i++)
    {
        for(int j=i+1; j<numStudent; j++)
        {
            if (array[i]==array[j]) array[j]=-1;
        }
    }
    
    //to count the values which aren't marked to form a team
    for(int i=0;i<numStudent;i++)
    {
        if(array[i]!=-1) count++;
    }
    
    //to show the output
    if(count>=teamStudent) 
    {
        cout<<"YES"<<endl;
        for(int i=0;i<numStudent;i++)
        {
            if(array[i]!=-1&&(teamStudent>0))
            {
                teamStudent--;
                cout<<i+1<<" ";
            }
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
}