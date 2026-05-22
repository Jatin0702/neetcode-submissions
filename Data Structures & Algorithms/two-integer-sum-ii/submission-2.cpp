class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = 1;
        vector<int> v;
        
        while (left < numbers.size() - 1) {
            // Check bounds before accessing
            if (right < numbers.size()) {
                if (numbers[left] + numbers[right] == target) {
                    v.push_back(left + 1);
                    v.push_back(right + 1);
                    break;
                } else {
                    right++;
                }
            } else {
                // Reached end, move left pointer
                left++;
                right = left + 1;
            }
        }
        return v;
    }
};