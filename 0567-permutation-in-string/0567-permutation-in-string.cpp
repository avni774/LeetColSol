class Solution {
public:
bool isFreqSame(int freq1[],int freq2[]){
for(int i=0;i<26;i++){
    if(freq1[i]!=freq2[i]){
        return false;
    }
}
return true;
}
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        for(int i=0;i<s1.length();i++){
freq[s1[i]-'a']++;
        }
        int wSize=s1.length();
for(int i=0;i<s2.length();i++){
int wIdx=0,idx=i;
int wFreq[26]={0};
while(wIdx<wSize && idx<s2.length()){
wFreq[s2[idx]-'a']++;
wIdx++;
idx++;
}

if(isFreqSame(freq,wFreq)){
    return true;
}
}
  return false;  }
};