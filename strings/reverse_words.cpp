#include <iostream>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/reverse-words-in-a-string-iii/

string reverse_string(string str){
    int x = 0;
    while(x < str.length()){
        int y = x;
        while(y < str.length() && str[y] != ' '){
            y++;
        }reverse(str.begin()+x,str.begin()+y);
        x = y+1;
    }return str;
}

int main(){
    string str = "Hello, I am Under the water please help me their is too mush raining uuuh!";
    string result = reverse_string(str);
    cout<<result<<endl;
    return 0;
}
