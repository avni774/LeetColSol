class Solution {
public:
bool vowels(char c){
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
return true;
}
else return false;
}
    int maxVowels(string s, int k) {
        int count=0;
for(int i=0;i<k;i++){
    if(vowels(s[i])){
        count++;
    }

}
int maxC=count;
for(int right=k;right<s.size();right++){
if(vowels(s[right])){
    count++;
}
if(vowels(s[right-k])){
    count--;
}
maxC=max(maxC,count);
}

      return maxC;  
    }
};