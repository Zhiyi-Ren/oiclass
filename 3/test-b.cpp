#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    if (n%2==0)
        n=n/2;
    else
        n=n*2;
    cout<<n<<endl;
    return 0;
}