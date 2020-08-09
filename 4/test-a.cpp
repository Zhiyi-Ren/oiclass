#include <iostream>
using namespace std;
int main(void)
{
    int n,sum=0;
    cin>>n;
    for (int add=1;add>n;++add)
        n=n+add;
    sum=n*n;
    cout<<sum<<endl;
    return 0;
}