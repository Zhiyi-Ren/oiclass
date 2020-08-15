#include <iostream>
using namespace std;
int main(void)
{
    long long x=1,n;
    cin>>n;
    for (int i=2;i<=n;i++)
        x*=2;
    cout<<x<<endl;
    return 0;
}