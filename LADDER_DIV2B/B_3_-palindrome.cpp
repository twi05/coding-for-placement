    #include<iostream>
    using namespace std;
    int main(){
        int n;
        cin>>n;
        string s;

        while(s.length()<n)
        {
            s+= "bb";
            s+="aa";

        }
        cout<<s.substr(0,n);

    return 0;
    }