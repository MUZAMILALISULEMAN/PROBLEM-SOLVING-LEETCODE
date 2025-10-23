#include<iostream>
#include<stack>
using namespace std;
int main(){


stack <char> st;

string k = "{{([])}}";
int i = 0;
while (i < k.length())
{

    if(k[i] == '[' || k[i] == '{' || k[i] == '('){

        st.push(k[i]);
       
    }else{

        if(st.empty()) break;

        if(k[i] == '}'){
            if(st.top() == '{'){
                    st.pop();
                    i++;
                    continue;
                }

        break;
        

    }else if(k[i] == ']'){
            if(st.top() == '['){
                
                    st.pop();
      
                    i++;
                    continue;
                }

        break;
    }else if(k[i] == ')'){
            if(st.top() == '('){
      
                    st.pop();
                    i++;
          continue;
                }

        break;

    }


    
    
}
i++;

}

if(st.empty() && i == k.length() ){

cout<<"TRUE";
}else{

    cout<<"FALSE";
}





    return 0;
}