#include <iostream>
using namespace std;

int main()
{
//define the variables
    long long yellowCrystal,blueCrystal,yellowBall,greenBall,blueBall;
    long long crystal=0;
    
    cin>>yellowCrystal>>blueCrystal;
    cin>>yellowBall>>greenBall>>blueBall;
    
    //yellow counter
    yellowCrystal=yellowCrystal-2*yellowBall-greenBall;
    yellowCrystal*=-1;
        
    //blue counter
    blueCrystal=blueCrystal-3*blueBall-greenBall;
    blueCrystal*=-1;
        
    crystal = yellowCrystal + blueCrystal;
    
    cout<<crystal<<endl;
    
    return 0;
}