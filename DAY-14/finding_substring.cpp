class Solution {
public:
    int strStr(string haystack, string needle) {
    int len = needle.length();
     int i = len;
     string window = haystack.substr(0,len);
     do{
        if(window == needle){
            return i - len;
        }
        window.erase(0,1);
        window.push_back(haystack[i++]);

        
     }
     while( i <= haystack.length());

     return -1;
    }
};