#include <iostream>
using namespace std;
int main(void)
{
    int n,x,y,homework;
    cin>>n>>x>>y;
    homework=y/x;
    if (homework*x==y)
        cout<<n-homework<<endl;
    else
        cout<<n-homework+1<<endl;    
    return 0;
}