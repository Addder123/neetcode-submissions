class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sum;
        vector<int> targetInt;
        targetInt.push_back(target);
            for(int i = 0 ; i < nums.size() ; ++i){
                for (int j = 0 ; j < nums.size() ; ++j){
                    if (nums[i] + nums[j] == targetInt[0] && i != j ){
                        sum.push_back(i);
                        sum.push_back(j);
                        return sum;
                    }
                }
            }
        }
};
