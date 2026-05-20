class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> v;
        for(int i = 0;i < nums.size(); i++){
            int temp = 1;
            for (int j = 0; j < nums.size();j++){
                if (i ==  j){
                    continue;
                } else {
                    temp *= nums[j];
                }
            }
            v.push_back(temp);
        }
        return v;
    }
};
