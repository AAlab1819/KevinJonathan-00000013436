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
    if(yellowCrystal<2*yellowBall+greenBall) crystal+=2*yellowBall+greenBall-yellowCrystal;
    
    //blue counter
    if(blueCrystal<3*blueBall+greenBall) crystal+=3*blueBall+greenBall-blueCrystal;
        
    cout<<crystal<<endl;
    
    return 0;
}