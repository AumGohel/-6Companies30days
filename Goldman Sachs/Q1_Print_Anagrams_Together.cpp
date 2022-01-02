class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
          //code here
          vector<vector<string>> answer;
          unordered_map <string, vector<string>> mp;
                
          for(auto str : string_list) {
            string word = str;
            sort(word.begin(), word.end());
            mp[word].push_back(str);
          }
                
          for(auto it : mp) {
            answer.push_back(it.second);
          }    
          return answer;
    }
};
