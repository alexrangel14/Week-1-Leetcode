class Solution {
public:
    int romanToInt(string s) {
        int currentCount = 0;
        map<char,int> map;
        map['I'] = 1;
        map['V'] = 5;
        map['X'] = 10;
        map['L'] = 50;
        map['C'] = 100;
        map['D'] = 500;
        map['M'] = 1000;
        
        currentCount = map[s[s.length()-1]];
        
        for (int i = s.length()-2; i >= 0; i--){
            if (map[s[i]] < map[s[i+1]]){
                currentCount -= map[s[i]];
            }
            else{
                currentCount += map[s[i]];
            }
        }
        return currentCount;
    }
};
