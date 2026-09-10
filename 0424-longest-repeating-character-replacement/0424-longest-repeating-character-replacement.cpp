class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);
int ans=INT_MIN;
        int right=0;
        int left=0;
        int maxF=0;
        for(int right=0;right<s.length();right++){
            freq[s[right]-'A']++;
            maxF=max(maxF,freq[s[right]-'A']);
            while(right-left+1-maxF>k){
                freq[s[left]-'A']--;
                left++;
            }
            ans=max(ans,right-left+1);
        }
   return ans; }
};