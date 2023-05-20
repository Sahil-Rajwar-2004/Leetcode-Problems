#include <iostream>
using namespace std;

// https://leetcode.com/problems/merge-strings-alternately/

string merge_alternatively(string str1,string str2){
    string answer;
    int x = 0;
    int y = 0;
    while (x < str1.length() && y < str2.length()) {
        answer += str1[x++];
        answer += str2[y++];
    }
    while (x < str1.length()) {
        answer += str1[x++];
    }
    while (y < str2.length()) {
        answer += str2[y++];
    }
    return answer;
}

int main(){
    string str1 = "abc";
    string str2 = "pqr";
    cout<<merge_alternatively(str1,str2)<<endl;
    return 0;
}
