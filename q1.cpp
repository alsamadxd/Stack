/*

        Reverse a STRING using Stack

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> st; //Declaring a stack st.
    string s;
    cout << "Enter the string to Reverse " << endl;
    getline(cin, s); // Get the complete line as an input.

    for (char c : s) // It will loop over, all the character of string s.
    { 
        st.push(c); // push the element into the stack.
    }
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = st.top();    // Get the top most element of the stack.
        st.pop();   // Get rid of (Remove) the top most element.
    }
    cout << " Reverse String = " << s << endl;
    return 0;
}