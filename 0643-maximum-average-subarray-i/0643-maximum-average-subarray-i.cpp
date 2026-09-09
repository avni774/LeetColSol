class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    
        int maxSum=INT_MIN;
        int sum=0;
        for(int i=0;i<k;i++){

sum+=nums[i];}
maxSum=sum;
for(int right=k;right<nums.size();right++){
    sum+=nums[right];
    sum-=nums[right-k];

maxSum=max(sum,maxSum);
}

return (double)maxSum/k;}
};