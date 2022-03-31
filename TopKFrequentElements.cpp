class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //Explanation:
        //Find the number of frequencies each value has with a map.
        //Use a priority queue of pairs to sort by the first value.
        //Then get the top k elements
        vector<int> kmostFre;
        map<int,int> frequency;
        //frequency[element] = number of occurances
        for (int i = 0; i < nums.size(); i++){
            if (frequency.find(nums[i]) != frequency.end()){
                //increment the number of occurances at this location in map
                frequency[nums[i]] += 1;
            }
            else{
                //element doesnt exist and so add it first time
                frequency[nums[i]] = 1;
            }
        }
        
        priority_queue<pair<int,int>> pq;
        
        //if any of occured more than k times, add to vector
        for (auto i : frequency){
            pq.push(make_pair(i.second,i.first));
        }
        for (int i = 0; i < k; i++){
            pair<int,int> top = pq.top();
            kmostFre.push_back(top.second);
            pq.pop();
        }
        
        return kmostFre;
    }
};
