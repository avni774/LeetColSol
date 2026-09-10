class Solution {
public:
    int lengthOfLongestSubstring(string s) {
if(s.empty()) return 0;
        vector <int> last(256,-1);
        int left=0,right=0;
int ans=INT_MIN;
        for (int right = 0; right < s.size(); right++) {

            if(last[s[right]]>=left){
            left=last[s[right]]+1;
    
            }

            last[s[right]]=right;

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};