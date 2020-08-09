#include <iostream>
using namespace std;
int main(void)
{
    int feet,n;
    cin>>feet;
    if (feet%2==0)
    {
        if (feet%4==0)
            n=feet/4;
        else
            n=feet/4+1;
        cout<<n<<" "<<feet/2<<endl;
    } else
        cout<<"0 0"<<endl;    
    return 0;
}