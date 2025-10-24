class Solution {
public:
    int maxVowels(string s, int k) {
     string window = "";   

     int max =0;

     for(int i=0;i<k;i++){
        window+=s[i];
        if(isVowel(s[i])) max++;
     }
    int count = 0;
    int v  =max;
     for(int i=k;i<s.length();i++){
        
            if(isVowel(window[count%k])) v--;
            if(isVowel(s[i])) v++;               
            window[count%k] = s[i];
            count++;
            if(v > max) max = v;

     }

return max;
    }
    int isVowel(char &c){
        
        
            if(c == 'a' || c=='e' || c == 'i' || c== 'o' || c=='u') return true;;
        
        return false;;
    }


};