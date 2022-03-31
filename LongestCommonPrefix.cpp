class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string solution = "";
        string start = strs[0];
        string end = strs[strs.size()-1];
        for (int i = 0; i < start.length(); i++){
            if (start[i] == end[i]){
                solution += start[i];
            }
            else{
                break;
            }
        }
        return solution;
    }
};
