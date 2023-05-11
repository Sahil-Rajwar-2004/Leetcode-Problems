#include <iostream>
#include <unordered_map>
using namespace std;

// https://leetcode.com/problems/roman-to-integer/

int roman2int(string str){
    unordered_map<char,int> roman_sign = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    int result = 0;
    for(int i = 0;i < str.length();i++){
        if(roman_sign[str[i]] < roman_sign[str[i+1]]){
            result -= roman_sign[str[i]];
        }else{
            result += roman_sign[str[i]];
        }
    }return result;
}

int main(){
    string roman_number;
    cin>>roman_number;
    cout<<roman2int(roman_number)<<endl;
    return 0;
}
