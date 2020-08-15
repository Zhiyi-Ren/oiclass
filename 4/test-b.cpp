#include <iostream>
using namespace std;
int main(void)
{
    int n,sum=1;
    cin>>n;
    for(int i=1;i<=n;i+=2)
        sum*=i;
    cout<<sum<<endl;
    return 0;
}