#include <iostream>
using namespace std;
int main(void)
{
    int money,d1,d2,d3,d4,d5;
    cin>>money;
    cin>>d1>>d2>>d3>>d4>>d5;
    money=money-d1-d2-d3-d4-d5;
    cout<<money<<endl;
    return 0;
}