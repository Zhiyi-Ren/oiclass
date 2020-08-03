#include <iostream>
#include<iomanip>
using namespace std;
int main(void)
{
    double c;
    cin>>c;
    cout<<setprecision(2)<<fixed<<9.0/5*c+32<<endl;
    return 0;
}

/*
#include<iostream>
#include<iomanip>   //setprecision和fixed函数所需的头文件
using namespace std;
int main(){
double a;
cin>>a;
cout<<setprecision(2)<<fixed<<a;  //输出实数变量a且保留2位小数
}
*/