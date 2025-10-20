class Solution {
public:
    int romanToInt(string s) {
        unordered_map <char,int> dict;
        dict['I']  = 1;
        dict['V'] = 5;
        dict['X'] = 10;
        dict['L'] = 50;
        dict['C'] = 100;
        dict['D'] = 500;
        dict['M'] = 1000;
        int i  = 0;
        int len = s.length();
        char c;


        int sum  = 0;
        if(s == "") return sum;
        for(;i<len;i++){
            c =  s[i];
            if(c == 'I'){
                if(i + 1 >= len || s[i+1] != 'V' && s[i+1] != 'X'){
                    sum+=1;
                    
                }else if(s[i+1] == 'V'){
                    i++;
                    sum+=4;
                }else if(s[i+1] == 'X'){
                    i++;
                    sum+=9;
                }
                continue;
            }else if(c == 'X'){
                if(i + 1 >= len || s[i+1] != 'L' && s[i+1] != 'C'){
                    sum+=10;
                    
                }else if(s[i+1] == 'L'){
                    i++;
                    sum+=40;
                }else if(s[i+1] == 'C'){
                    i++;
                    sum+=90;
                }
                continue;
            }else if(c == 'C'){
                if(i + 1 >= len || s[i+1] != 'D' && s[i+1] != 'M'){
                    sum+=100;
                    
                }else if(s[i+1] == 'D'){
                    i++;
                    sum+=400;
                }else if(s[i+1] == 'M'){
                    i++;
                    sum+=900;
                }
                continue;

            }

            sum += dict[c];







        }
        return sum;



    }
};