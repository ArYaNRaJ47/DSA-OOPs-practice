/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int lengthOfLongestSubstring(string s){
    unordered_set<char> st;
    int left = 0;
    int maxLen = 0;
    
    for(int right = 0; right<s.size(); right++){
        while(st.count(s[right])){
            st.erase(s[left]);
            left++;
        }
        st.insert(s[right]);
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}
int main() {
    // Write C++ code here
    string s;
    cin>>s;
    int x = lengthOfLongestSubstring(s);
    cout<<x;
}