#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string addBoldTag(string s, vector<string>& dict) {
        int n = s.size();
        vector<int> bold(n);
        string ret = "";
        for (int i = 0, end = 0; i < s.size(); i++) {
            for (int j = 0; j < dict.size(); j++) {
                if (s.substr(i, dict[j].size()) == dict[j]) {
                    end = max(end, i + (int)dict[j].size());
                }
            }
            bold[i] = end > i;
        }
        int j;
        for (int i = 0; i < s.size(); i = j) {
            if (!bold[i]) {
                ret += s[i];
                j = i + 1;
                continue;
            }
            j = i;
            while (j < s.size() && bold[j])
                j++;
            ret += "<b>" + s.substr(i, j - i) + "</b>";
        }
        return ret;
    }
};
main() {
    Solution ob;
    vector<string> v = { "abc","123" };
    cout << (ob.addBoldTag("abcxyz123", v));
}