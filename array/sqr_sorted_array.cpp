#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/squares-of-a-sorted-array/

vector<int> sorting(vector<int> array){
    sort(array.begin(),array.end());
    return array;
}

vector<int> sorted_square(vector<int> &array){
    vector<int>::iterator iter;
    for(iter = array.begin();iter != array.end();iter++){
        *iter = *iter * *iter;
    }return sorting(array);
}

void display(vector<int> &array){
    vector<int>::iterator iter;
    for(iter = array.begin();iter != array.end();iter++){
        cout<<*iter<<" ";
    }cout<<endl;
}

int main(){
    vector<int> array = {-4,-1,0,3,10};
    vector<int> answer = sorted_square(array);
    display(answer);
    return 0;
}
