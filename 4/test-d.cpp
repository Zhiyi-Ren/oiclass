#include <iostream>
using namespace std;
int main(void)
{
    long long x,n,p=1;
    cin>>x>>n;
    for (int i=1;i<=n;i++)
        p=p+p*x;
    cout<<p<<endl;
    return 0;
}