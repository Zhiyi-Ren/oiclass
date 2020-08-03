//cm to inch
#include <iomanip>
#include <iostream>
using namespace std;
int main(void)
{
    double cm;
    cin>>cm;
    cout<<fixed<<setprecision(2)<<cm/2.54<<endl;
    return 0;
}