#include<iostream>
using namespace std;
int main(){
string longWord  = "", k = "" ;
string sentence   = "i like to develop myself furtherrr";

for (int i = 0; i < sentence.length() ; i++)
{

    if (sentence[i] == ' ')
    {
        if (k.length() > longWord.length())
        {
            longWord = k;
        }
        
        k="";
    }else{
        k+=sentence[i];

    }

    if (i == sentence.length()-1){
 if (k.length() > longWord.length())
        {
            longWord = k;
        }
    }
    
    

}

cout<<longWord;






    return 0;
}