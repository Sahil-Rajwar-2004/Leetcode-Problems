#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

// https://leetcode.com/problems/valid-parentheses/

bool check_valid(string str){
    stack<char> new_stack;
    unordered_map<char,char> brakets{
        {')','('},
        {']','['},
        {'}','{'},
    };
    for(char chr:str){
        if(brakets.count(chr)){
            if(new_stack.empty()||new_stack.top() != brakets[chr]){
                return false;
            }new_stack.pop();
        }else{
            new_stack.push(chr);
        }
    }return new_stack.empty();
}

int main(){
    string str = "{[]()}";
    if(check_valid(str)){
        cout<<true<<endl;
    }else{
        cout<<false<<endl;
    }
    return 0;
}
