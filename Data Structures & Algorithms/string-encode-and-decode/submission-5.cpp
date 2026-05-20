class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_str ;
        for(string i : strs){
            encoded_str += to_string(i.length());
            encoded_str += '#';
            encoded_str += i;
        }
        return encoded_str;
    }

    vector<string> decode(string s) {
        vector<string> v ;
        string decoded_string; 
        int i = 0;
        while(i < s.length()) {

            int j = i;

            while(s[j] != '#') {
                j++;
            }

            int len = stoi(s.substr(i, j - i));

            string word = s.substr(j + 1, len);

            v.push_back(word);

            i = j + 1 + len;
        }
        return v;
    }
};
