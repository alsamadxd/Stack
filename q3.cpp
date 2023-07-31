/*

            Remove all Adjacent Duplicates
            
    You are given a string s consisting of lowercase English letter.
    A duplicate removal consists of choosing two adjacent and equal letters and removing them.
    We repeatedly make duplicate removals on s until we no longer can. 
    Return the final String after all such duplicate removals have been made.
    
    INPUT==> "abbaca"  OUTPUT==> "ca"
    
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string "<<endl;
    cin>>s;
    stack<char> st;
    for(char c:s){
        if(!st.empty() && st.top()==c){
            st.pop();
        }
        else{
            st.push(c);
        }
    }

    stack<char> st2;
    string ans="";
    char c;
    while(!st.empty()){
        c=st.top();
        st.pop();
        st2.push(c);
    }
    while(!st2.empty()){
        ans=ans+st2.top();
        st2.pop();
    }
    cout<<" The Output for the string = "<<s << " is "<<ans<<endl;
}