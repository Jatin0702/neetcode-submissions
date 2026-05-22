class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        set<vector<int>> m;
        for(int i = 1 ; i < nums.size()-1;i++){
            int j = 0;
            int k = nums.size()-1;
            while (j < i and k > i){
                if(nums[i]+nums[j]+nums[k] == 0 ){
                    vector <int> a  = {nums[i],nums[j],nums[k]}; 
                    sort(a.begin(),a.end());
                    if(!m.count(a)){
                        m.insert(a);} 
                }
                if(j+1 != i){
                    j++;
                } else if (k-1 != i){
                    k--;
                    j = 0;
                } else {
                    break;
                }
            }
        } 
        for (auto it :m){
            v.push_back(it);
        }
        return v;
    }
};
