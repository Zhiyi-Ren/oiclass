#include <iostream>
using namespace std;
int main(void)
{
    double h,r;
    double pi=3.14159;
    int ans; //ans用於取出小數
    cin>>h>>r;
    ans=20*1000/(pi*r*r*h)+1;
    cout<<ans<<endl;
    return 0;
}