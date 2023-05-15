#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/move-zeroes/

void move_zeros(vector<int> &array){
    int x = 0;
    for(int i = 0;i < array.size();i++){
        if(array[i] != 0){
            array[x++] = array[i];
        }
    }while(x < array.size()){
        array[x++] = 0;
    }
}

void display(vector<int> &array){
    vector<int>::iterator iter;
    for(iter = array.begin();iter != array.end();iter++){
        cout<<*iter<<" ";
    }cout<<endl;
}

int main(){
    vector<int> array = {0,1,0,3,12};
    move_zeros(array);
    display(array);
    return 0;
}
