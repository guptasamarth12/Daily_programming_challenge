# include <iostream>
using namespace std;

string reverseWords(string s) {
        string res="",tmp="";
        s+=" ";
        for(auto ch : s){
            if(ch!=' '){
                tmp+=ch;
            }
            else{
                res=tmp+(tmp.size()<1 or res.size()<1? "" : " ")+res;
                tmp="";
            }
        }
        return res;
    }

int main(){

    string s="Samarth Gupta       ";
    cout<<reverseWords(s)<<endl;

    return 0;
}