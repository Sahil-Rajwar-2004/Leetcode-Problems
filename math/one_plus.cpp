#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/plus-one/

vector<int> plus_one(vector<int> &array){
    int ndig = array.size();
    for(int i = ndig-1;i >= 0;i--){
        if(array[i] == 9){
            array[i] = 0;
        }else{
            array[i]++;
            return array;
        }
    }array[0] = 1;
    array.push_back(0);
    return array;
}

void display(vector<int> &array){
    vector<int>::iterator iter;
    for(iter = array.begin();iter != array.end();iter++){
        cout<<*iter<<" ";
    }cout<<endl;
}

int main(){
    vector<int> array1 {1,2,3};
    vector<int> array2 {9};
    vector<int> array3 {4,3,2,1};
    display(array1);
    vector<int> answer = plus_one(array1);
    display(answer);
    return 0;
}


