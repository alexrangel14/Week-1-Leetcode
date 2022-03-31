class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> saver;
        //saver[value] = index
        for (int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if (saver.find(diff) != saver.end()){
                //other half of solution is in map at diff
                vector<int> solution;
                solution.push_back(i);
                solution.push_back(saver[diff]);
                return solution;
            }
            else{
                saver[nums[i]] = i;
            }
        }
        return nums;
    }
};
