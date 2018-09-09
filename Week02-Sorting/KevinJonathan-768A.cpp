#include <iostream>
using namespace std;
 
int main()
{
    long numSteward; 
    int countSteward=0;
    
    cin>>numSteward;
    
    long long steward[numSteward];
    
    for(int i=0; i<numSteward; i++) {
        cin >> steward[i];
    }

    //sort the steward's strength with cocktail sort
    int temp; //to store temporary number
    int swapped = 1; //as a flag to mark if the position of steward is swapped
 
    do
    {
        swapped = 0; //reset the flag
        
        //to compare all steward's strength from left to right
        for (int i=0; i<numSteward-1; i++) 
        {
            if (steward[i]>steward[i+1]) {
                temp = steward[i];
                steward[i]= steward[i+1];
                steward[i+1] = temp;
                swapped = 1;
            }
        }
        
        if (swapped==0) break; //array is sorted.
        
        swapped = 0; //reset the flag again
        
        // from right to left, doing the
        // same comparison as in the previous stage
        for (int i = numSteward-2; i >= 0; i--) {
            if (steward[i]>steward[i+1]) {
                temp = steward[i];
                steward[i]= steward[i+1];
                steward[i+1] = temp;
                swapped = 1;
            }
        }
    }while(swapped!=1);

    int lowest=steward[0];
    int highest=steward[numSteward-1];
    
    //counting the stewards between the lowest and highest steward's strength value
    for(int i=0; i<numSteward; i++)
    {
        if(steward[i]!=lowest&&steward[i]!=highest) countSteward++;
    }    
    cout<<countSteward<<endl;
    
    return 0;
}