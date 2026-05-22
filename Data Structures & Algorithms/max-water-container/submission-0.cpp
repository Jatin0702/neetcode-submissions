class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = 1;
        int max_area = 0;
        while (left < heights.size()-1){
            int temp = 0;
            temp = min(heights[left],heights[right]) * (right -left);
            if(right == heights.size()-1){
                left ++ ;
                right = left +1;
            } else{
                right ++;
            }
            if(temp > max_area){
                max_area = temp;
            }
        } return max_area;
    }
};
