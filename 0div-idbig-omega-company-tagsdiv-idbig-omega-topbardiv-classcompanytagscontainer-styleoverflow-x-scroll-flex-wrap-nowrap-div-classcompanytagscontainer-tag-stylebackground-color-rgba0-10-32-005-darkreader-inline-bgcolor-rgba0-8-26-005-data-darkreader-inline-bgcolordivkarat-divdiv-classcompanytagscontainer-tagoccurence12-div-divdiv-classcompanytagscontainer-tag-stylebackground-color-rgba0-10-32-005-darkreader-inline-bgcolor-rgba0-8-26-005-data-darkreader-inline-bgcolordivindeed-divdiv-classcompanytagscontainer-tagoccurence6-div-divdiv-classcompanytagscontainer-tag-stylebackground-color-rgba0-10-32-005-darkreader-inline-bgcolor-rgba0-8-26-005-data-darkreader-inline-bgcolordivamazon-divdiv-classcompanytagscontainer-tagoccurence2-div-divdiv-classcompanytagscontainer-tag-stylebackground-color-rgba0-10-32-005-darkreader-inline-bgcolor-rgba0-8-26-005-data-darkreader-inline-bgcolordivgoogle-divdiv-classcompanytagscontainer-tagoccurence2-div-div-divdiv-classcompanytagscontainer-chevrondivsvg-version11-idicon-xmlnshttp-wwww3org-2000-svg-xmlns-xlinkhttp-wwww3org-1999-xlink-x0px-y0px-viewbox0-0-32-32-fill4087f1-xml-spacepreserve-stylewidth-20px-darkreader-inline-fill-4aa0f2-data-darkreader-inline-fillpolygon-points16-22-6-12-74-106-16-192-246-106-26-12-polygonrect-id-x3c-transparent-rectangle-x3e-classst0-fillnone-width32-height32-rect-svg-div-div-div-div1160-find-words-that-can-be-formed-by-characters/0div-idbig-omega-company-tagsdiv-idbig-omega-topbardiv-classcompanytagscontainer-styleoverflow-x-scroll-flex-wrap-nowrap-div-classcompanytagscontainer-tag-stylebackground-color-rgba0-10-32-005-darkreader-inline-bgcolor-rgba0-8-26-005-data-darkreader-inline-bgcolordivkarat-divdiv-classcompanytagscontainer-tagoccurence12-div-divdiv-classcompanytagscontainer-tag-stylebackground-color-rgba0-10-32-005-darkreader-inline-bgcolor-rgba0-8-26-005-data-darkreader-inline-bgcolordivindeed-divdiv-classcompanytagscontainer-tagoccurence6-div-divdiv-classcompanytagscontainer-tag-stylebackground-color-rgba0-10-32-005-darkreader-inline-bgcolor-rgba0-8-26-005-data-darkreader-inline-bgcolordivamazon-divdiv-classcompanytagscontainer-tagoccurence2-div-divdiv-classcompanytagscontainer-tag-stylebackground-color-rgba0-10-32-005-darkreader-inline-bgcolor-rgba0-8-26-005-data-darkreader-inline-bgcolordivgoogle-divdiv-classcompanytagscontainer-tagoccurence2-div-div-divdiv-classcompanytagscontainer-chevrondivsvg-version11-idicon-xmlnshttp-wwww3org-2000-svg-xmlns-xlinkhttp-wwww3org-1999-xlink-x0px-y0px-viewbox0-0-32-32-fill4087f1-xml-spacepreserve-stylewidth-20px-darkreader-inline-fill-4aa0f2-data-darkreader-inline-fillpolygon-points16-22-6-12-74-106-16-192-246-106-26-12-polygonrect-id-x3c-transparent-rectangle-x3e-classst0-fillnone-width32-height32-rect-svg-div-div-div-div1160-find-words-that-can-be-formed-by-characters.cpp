class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
         int result = 0;
        unordered_map<char, int> charFreq;
        for (char c : chars) {
            charFreq[c]++;
        }
        for (const string& word : words) {
            unordered_map<char, int> wordFreq;
            bool valid = true;
            
            for (char c : word) {
                wordFreq[c]++;
                if (wordFreq[c] > charFreq[c]) {
                    valid = false;
                    break;
                }
            }
            
            if (valid) {
                result += word.size();
            }
        }
        return result;
    }
};