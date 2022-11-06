#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int i = s.find('0');

    if(i==-1){
        cout<<s.substr(1);

    }
    else{
        cout<<s.substr(0,i) <<s.substr(i+1);
    }

    return 0;
}