#include <iostream>
using namespace std;
int main(void)
{
    int h,m,s;
    cin>>h>>m>>s;
    m=m+(h*60);
    s=s+(m*60);
    cout<<s<<endl;
    return 0;
}