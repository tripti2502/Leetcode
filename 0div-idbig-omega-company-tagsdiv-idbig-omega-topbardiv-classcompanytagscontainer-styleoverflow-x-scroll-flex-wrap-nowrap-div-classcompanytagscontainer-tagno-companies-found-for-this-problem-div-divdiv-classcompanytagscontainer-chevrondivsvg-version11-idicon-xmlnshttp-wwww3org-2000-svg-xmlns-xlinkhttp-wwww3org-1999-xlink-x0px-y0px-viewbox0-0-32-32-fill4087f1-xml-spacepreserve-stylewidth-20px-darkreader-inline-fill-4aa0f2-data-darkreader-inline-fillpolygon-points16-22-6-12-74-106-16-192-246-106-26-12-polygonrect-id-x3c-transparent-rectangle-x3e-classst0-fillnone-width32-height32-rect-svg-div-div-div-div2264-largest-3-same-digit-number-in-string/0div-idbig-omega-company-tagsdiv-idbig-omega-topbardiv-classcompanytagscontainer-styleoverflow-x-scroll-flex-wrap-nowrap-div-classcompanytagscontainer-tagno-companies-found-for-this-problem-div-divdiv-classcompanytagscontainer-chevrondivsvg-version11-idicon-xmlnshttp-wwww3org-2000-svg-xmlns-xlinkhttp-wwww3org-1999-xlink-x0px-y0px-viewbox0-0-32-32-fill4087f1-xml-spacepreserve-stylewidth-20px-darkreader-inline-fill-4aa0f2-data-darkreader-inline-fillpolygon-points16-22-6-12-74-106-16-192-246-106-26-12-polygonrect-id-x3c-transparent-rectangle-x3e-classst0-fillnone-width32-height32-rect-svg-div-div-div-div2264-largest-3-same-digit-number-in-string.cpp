class Solution {
public:
    string largestGoodInteger(string num) {
       
        vector<string>v = {"999","888","777","666","555","444","333","222","111","000"};
        for(auto i : v)
        {
            if(num.find(i) != -1)
            return i;
        }
        return "";
    }
};