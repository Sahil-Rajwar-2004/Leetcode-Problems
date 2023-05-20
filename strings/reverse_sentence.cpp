#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/reverse-words-in-a-string/

string reverse_sentence(string str){
    istringstream iss(str);
    string word;
    string reversed;
    while(iss >> word){
        if(!reversed.empty()){
            reversed = " " + reversed;
        }reversed = word + reversed;
    }return reversed;
}

int main(){
    string str = "Hello World";
    cout<<reverse_sentence(str)<<endl;
    return 0;
}
