#include <iostream>
using namespace std;

int main()
{
    int secretaries;
    int counter = 0;
    
    cin>>secretaries;
    
    long long id[secretaries];
    //to input the id of secretaries
    for(int i=0;i<secretaries;i++)
    {
        cin>>id[i];
    }
    
    //sort the id of secretaries with shell sort
    int temp; //to store temporary number
    for(int i = secretaries/2; i > 0; i = i/2)
	{
		for(int j = i; j < secretaries; j++)
		{
			for(int k = j-i; k >= 0; k = k-i)
			{
				//if value at higher index is greater, then break the loop.
				if(id[k+i] >= id[k]) break;
				else //switch the values
				{
					temp = id[k];
					id[k] = id[k+i];
					id[k+i] = temp;
				}
			}
		}
	}
	
    for(int i=0; i<secretaries;i++)
    {
        //to count how many pairs of chatting secretaries
        if(id[i]==id[i+1] && id[i]!=0)
        {
            counter++;
        }
        //to check if conferences happens 
        if(id[i]==id[i+2] && id[i]!=0)
        {
            counter=-1;
            break;
        }
    }
    
    cout<<counter<<endl;
    
    return 0;
}