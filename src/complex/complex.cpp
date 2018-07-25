// complex.cpp
// Multiplying complex numbers

#include <iostream>	// contains the definition of cout, endl
#include <complex>	// contains the complex class definition
#include <cmath>

using namespace std; // cout, endl, complex are all part of this namespace
typedef complex<float> complexnumb;
int main()
{
    

    float a,b,c,sq,x1,x2,y1,y2;
    char q;
    while(q!='q'){
    
    cin>>q;
    if(q=='q'){
        break;
    }
    
    else {
        cin>>b>>c;
        a=q-48;
        cout<<a<<endl;
    sq=b*b-4*a*c;
    
    if (sq>=0){
    x1 = ((-b+sqrt(sq))/(2*a));
    y1=0;
    y2=0;
    x2 = ((-b-sqrt(sq))/(2*a));
    }
    
    else {
    x1 = (-b/(2*a));
    y1 =sqrt(-sq)/(2*a);
    x2 = (-b/(2*a));
    y2 = -sqrt(-sq)/(2*a);
    }
    cout<<x1<<" "<<y1<<endl;
    cout<<x2<<" "<<y2<<endl;
    }
    }
    
	return 0;
    
}
