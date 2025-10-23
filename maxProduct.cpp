class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>p;

        for(int i=0;i<nums.size();i++)
        p.push(nums[i]);

        int max1=0,max2=0;
        while(!p.empty()){
            max1=p.top();
            p.pop();
            max2=p.top();
            p.pop();
            break;
        }
        return (max1-1)*(max2-1);
    }
};
