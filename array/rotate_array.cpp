#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/rotate-array/

void rotate(vector<int> &array,int times){
    int len = array.size();
    times = times%len;
    vector<int> temp(array.end()-times,array.end());
    for(int i = len-times-1;i >= 0;i--){
        array[i+times] = array[i];
    }
    for(int i = 0;i < times;i++){
        array[i] = temp[i];
    }
}

void display(vector<int> &array){
    vector<int>::iterator iter;
    for(iter = array.begin();iter != array.end();iter++){
        cout<<*iter<<" ";
    }cout<<endl;
}

int main(){
    vector<int> array = {1,2,3,4,5,6,7};
    rotate(array,3);
    display(array);
    return 0;
}
