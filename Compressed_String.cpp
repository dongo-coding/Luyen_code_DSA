#include <bits/stdc++.h>
using namespace std;

string to_string (long long n){
    string s = "";
    while(n>0){
        s+=char(n%10 + '0');
        n/=10;
    }
    return s;
}

int main ()
{
    string s;
    getline(cin,s);
    s+='@';
    stack<char>st;
    string ss="";
    for(int i=0;i<s.length();i++){
        if(st.empty() || st.top() == s[i]){
            st.push(s[i]);
        }
        else {
            int cnt=0;
            ss+= st.top(); 
            while(!st.empty()){
                cnt++;
                st.pop();
            }
            ss+=to_string(cnt);
            st.push(s[i]);

        }
    }
    cout<<ss;
}
