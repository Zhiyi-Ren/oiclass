#include <iostream>
using namespace std;
int main(void)
{
    int a,k;
    cin>>a>>k; //a跳躍荷葉數 k跳躍次數
    cout<<(a+1)*k%8<<endl;
    return 0;
}