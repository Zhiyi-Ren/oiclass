#include <iostream>
using namespace std;
int main(void)
{
    double m;
    cin>>m;
    if (m>=90&&m<100) cout<<"A"<<endl;
    if (m>=80&&m<90) cout<<"B"<<endl;
    if (m>=70&&m<80) cout<<"C"<<endl;
    if (m>=60&&m<70) cout<<"D"<<endl;
    if (m<60) cout<<"E"<<endl;
    return 0;
}