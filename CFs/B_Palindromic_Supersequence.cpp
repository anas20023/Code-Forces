#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string &s){
    // check for palindrome
    int n = s.size();
    for(int i = 0; i < n/2; i++){
        if(s[i] != s[n-1-i]){
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    if(isPalindrome(s)){
        cout<<s<<endl;
    } else {
    string rev = s;
    reverse(rev.begin(), rev.end());
    cout << rev + s << endl;
    }
    return 0;
}