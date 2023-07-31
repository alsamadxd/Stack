/*

        Reverse a  NUMBER  using Stack

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    stack<int> st;
    cout << "Enter a Number to Reverse " << endl;
    cin >> n;
    int digit;
    while (n != 0) // Loop until n=0.
    {
        digit = n % 10;
        st.push(digit); // Push the digit into the stack.
        n = n / 10;
    }
    int reverse = 0;
    int multiplier = 1;

    while (!st.empty()) // Looop until stack st is empty.
    {
        digit = st.top();
        reverse = reverse + digit * multiplier;
        st.pop();
        multiplier *= 10;
    }

    cout << "Reverse = " << reverse;
    return 0;
}

/*

        reverse = reverse + digit * multiplier;===>

        eg. let the input no. be 123.
        1- it will be stored in stack as 321.
        2- when we pop out the element of stack we get 1, then 2 and then 3.


         reverse = reverse + digit * multiplier;
                = 0 + 1 * 1    ==> 1
                = 1 + 2 * 10   ==> 1 + 20   ==> 21
                = 21 + 3 *100  ==> 21 + 300 ==> 321

 */