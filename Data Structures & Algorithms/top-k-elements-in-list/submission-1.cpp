class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        vector<int> v;
        for(int i : nums){
            m[i] += 1;
        }
        int j = 0;
        while(j < k){
        int key = 0 ;
        int max = 0;
            for (auto it : m){
                if (it.second >= max){
                    max = it.second;
                    key = it.first;
                }
            } 
        v.push_back(key);
        m.erase(key);
        j++;
        } return v;
    }
};
