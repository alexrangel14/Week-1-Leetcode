class Solution {
public:
    bool isPalindrome(int x) {
        string palin = to_string(x);
        int left = 0;
        int right = palin.length() - 1;
        while (left < right){
            if (palin[left] != palin[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
