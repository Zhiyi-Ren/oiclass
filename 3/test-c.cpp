#include <iostream>
using namespace std;
int main(void)
{
    int father,mother,me; //if me=1,then me is man.if me=0,then me is girl.father is father's height.mother is mother's hright.
    cin>>father>>mother>>me;
    if (me==1) //man
        cout<<(father+mother+13)/2<<endl;
    else //girl
        cout<<(father+mother-13)/2<<endl;
    return 0;    
}