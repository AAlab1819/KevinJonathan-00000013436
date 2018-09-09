#include <iostream>
using namespace std;

int main()
{
    int strKirito, numDragon;
    
    cin>>strKirito>>numDragon;
    
    int strDragon[numDragon];
    int bonus[numDragon];    
    //to input the dragon's strength and bonus for defeating it
    for(int i=0;i<numDragon;i++)
    {
        cin>>strDragon[i]>>bonus[i];
    }
    
    //sort the dragon's strength and bonus with brick sort
    int temp; //to store temporary number
    int sorted = 0; //to define that the array is unsorted
 
    while (sorted==0)
    {
        sorted = 1; 
 
        //perform sort on odd indexed element
        for (int i=1; i<=numDragon-2; i=i+2)
        {
            if (strDragon[i] > strDragon[i+1])
            {
                temp = strDragon[i];
		strDragon[i] = strDragon[i+1];
		strDragon[i+1] = temp;
                
                temp = bonus[i];
		bonus[i] = bonus[i+1];
		bonus[i+1] = temp;
                sorted = 0;
            }
        }
 
        //perform sort on even indexed element
        for (int i=0; i<=numDragon-2; i=i+2)
        {
            if (strDragon[i] > strDragon[i+1])
            {
                temp = strDragon[i];
		        strDragon[i] = strDragon[i+1];
	        	strDragon[i+1] = temp;
                
                temp = bonus[i];
	        	bonus[i] = bonus[i+1];
	        	bonus[i+1] = temp;
                sorted = 0;
            }
        }
    }
        	
    //to check if Kirito can beat the dragons or not
    for(int i=0; i<numDragon;i++)
    {
        //if Kirito is stronger than the dragon
        if(strDragon[i]<strKirito)
        {
            strKirito=strKirito+bonus[i];
            if(i==numDragon-1)
            {
                cout<<"YES"<<endl;
            }
        }
        //if Kirito is weaker than the dragon #RIPPlotArmor
        if(strDragon[i]>=strKirito)
        {
            cout<<"NO"<<endl;
            break;
        }
    }
    
    return 0;
}