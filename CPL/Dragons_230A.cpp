#include<iostream>
using namespace std;
int main(){
int strength, n,dragonStrength,bonus;

cin>>strength;
cin>>n;

for(int i=0;i<n;i++){
    cin>>dragonStrength>>bonus;
    if(strength>=dragonStrength){
        strength+=bonus;
    }
    else{
        cout<<"NO";
        return 0;
    }
}

cout<<"YES";

return 0;
}