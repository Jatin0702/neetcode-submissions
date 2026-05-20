class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        vector<vector<string>> v;
        for(string i : strs){
            string temp = i;
            sort(i.begin(),i.end());
            m[i].push_back(temp);
        }
        for (auto it : m){
            v.push_back(it.second);
        }
        return v;
    }
};
