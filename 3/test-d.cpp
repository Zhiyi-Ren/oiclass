#include <iostream>
using namespace std;
int main(void)
{
    double km;
    int money;
    cin>>km;
    if (km<=2.5)
        money=10;
    else
        money=10+(km-2.5)*2.6+0.5;
    cout<<money<<endl;
    return 0;
}