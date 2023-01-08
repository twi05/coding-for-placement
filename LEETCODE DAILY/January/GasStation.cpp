#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int deficit =0,start= 0,balance = 0; 
        
        for(int i =0; i<gas.size(); i++)
        {
            balance = balance + gas[i] - cost[i];
            if(balance<0){
                deficit +=balance;
                start = i+1;
                balance =0; 
            }
   
        }
        
        if(balance + deficit >=0)
           return start;
        else return -1;
        
        
            
        
    }

int main(){

return 0;
}