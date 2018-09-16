#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int numLantern;
    long long length;
    int startPoint,endPoint,radius;
    
    cin>>numLantern>>length;
    
    int lanternPoint[numLantern];
    
    for (int i=0; i<numLantern; i++) {
        cin>>lanternPoint[i];
    }
    
    //to sort the lanterns with their respective points
    sort(lanternPoint, lanternPoint+numLantern);
    
    //to set the starting point and the end point of the lanterns
    startPoint=lanternPoint[0];
    endPoint=length-lanternPoint[numLantern-1];
    
    //to set the current radius of light
    //times 2 to get the radius value from the 2 lanterns
    radius=max(startPoint,endPoint)*2;
    
    //to find the gap to lighten up the whole street
    for (int i=1; i<numLantern; i++)
    {
        //to compare the current radius with the next lantern and returns the largest values
        radius=max(radius,lanternPoint[i]-lanternPoint[i-1]);
    }
    
    //to set the output's relative error doesn't exceed 10^-9 
    //divide to get the radius between 2 lantern by 2
    cout<<setprecision(10)<<fixed<<radius/2.0<<endl;

    return 0;
}