class Solution {
public:
    int characterReplacement(string s, int k) {
        int freq[26]={};
        int maxF=0;
        int left=0;
int maxT=0;
        for(int right=0;right<s.size();right++){
            freq[s[right] - 'A']++;
maxF=max(maxF,freq[s[right]-'A']);
while((right-left+1)-maxF>k){
    freq[s[left]-'A']--;
    left++;
}
        
         maxT=max(maxT,right-left+1);}
        return maxT;
    }
};