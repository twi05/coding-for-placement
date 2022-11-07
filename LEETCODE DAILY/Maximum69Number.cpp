
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


 class Solution {
public:
    int maximum69Number (int num) {
     
        int rightDigCount = -1; 
        int digCount = 0;
        int temp = num; 
      
        while(temp > 0) 
        {
            int dig = temp % 10;
            if (dig == 6) rightDigCount = digCount; 
            
            digCount++;
            temp = temp / 10;
        }
  
        if (rightDigCount == -1) return num;
        int ans = num + (3 * pow(10, rightDigCount));
        return ans;
    }
};
 class Solution {
public:
    int maximum69Number (int num) {
        int digits = log10(num)+1;
        
        vector<int>v(digits);
        int lastInd=0;
        while(num && digits>=0){
            v[--digits] = num%10;
            if(num%10 == 6)
                lastInd = digits; 
            num/=10;
        }
        v[lastInd] = 9;
        int j=1;
        int res = 0;
        for(int i=v.size()-1;i>=0;i++)
        {
            res+= j*v[i];
            j*=10; 
        }
        return res;
    }


};



class Solution {
public:
    int maximum69Number (int num) {
        string s= to_string(num);
        for(int i=0;s[i];i++)
        {
            if(s[i]=='6'){
            s[i]='9';
            break;}

        }
        return stoi(s);
    }
};