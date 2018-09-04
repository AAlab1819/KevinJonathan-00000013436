#include <iostream>
using namespace std;

//classic greatest common divisor function 
int gcd(int a, int b)
{
    if(a<b) return gcd(b,a);
    int remainder=a%b;
    if(0 == remainder) return b;
    return gcd(b,remainder);
}
    
int main()
{
    int number;
    int numerator, denominator;

    cin>>number;
    
    for(int i=number/2;i>0;i--)
    {
        if(gcd(i,number-i)==1)	//if the greatest common divisor is irreducible
        {
            numerator=i;
            denominator=number-i;
            break;
        }
    }
    
    cout<<numerator<<" "<<denominator<<endl;
    return 0;
}