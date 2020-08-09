#include <iostream>
using namespace std;
int main(void)
{
    int a,b,m;
    cin>>a>>b;
    for (m=0;a*m>b;++m)
        ;
    cout<<m<<endl;
    return 0;
}