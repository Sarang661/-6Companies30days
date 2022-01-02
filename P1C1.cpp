class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>v;
        unordered_map<string,vector<string>>m;
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            m[s].push_back(strs[i]);
        }
        for(auto x:m){
            vector<string>v1=x.second;
         v.push_back(v1);
        }
        return v;
    }
};