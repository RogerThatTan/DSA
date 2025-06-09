#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    // bool isAlphaNum(char ch) {
    //     if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
    //         return true;
    //     }
    //     return false;
    // }

    bool isPalindrome(string s) {
        int st = 0, end = s.length() - 1;
        while (st < end) {
            if (!isalnum(s[st])) {
                st++;
                continue;
            }
            if (!isalnum(s[end])) {
                end--;
                continue;
            }
            if (tolower(s[st]) != tolower(s[end])) {
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};

int main() {
    Solution sol;
    string s;
    getline(cin, s);
    if (sol.isPalindrome(s)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
