#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/reverse-string/

void reverse(vector<char> &array){
    int begin = 0;
    int end = array.size()-1;
    while(begin < end){
        char temp = array[begin];
        array[begin] = array[end];
        array[end] = temp;
        begin++;
        end--;
    }
}

void display(vector<char> &array){
    vector<char>::iterator iter;
    for(iter = array.begin();iter != array.end();iter++){
        cout<<*iter<<" ";
    }cout<<endl;
}

int main(){
    vector<char> array = {'h','e','l','l','o'};
    reverse(array);
    display(array);
    return 0;
}
