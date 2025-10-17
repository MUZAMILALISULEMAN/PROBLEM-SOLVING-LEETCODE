class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string k = "";
        int len = strs[0].length();
        char c;
        bool flag;
           for(int i=0;i<len;i++){
            flag = false;
            if(i >= strs[0].length()) break;
            c  = strs[0][i];

    for(int j=0;j<strs.size();j++){
            
            if(i<strs[j].length() && strs[j][i] == c){
                flag = true;
                continue;
            }
            flag = false;
            break;

        }
        if(!flag) break;
        k+=c;
}
        return k;
}
};