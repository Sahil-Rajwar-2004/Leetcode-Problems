#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/median-of-two-sorted-arrays/

double median(vector<int> &array1,vector<int> &array2){
    array1.insert(array1.end(),array2.begin(),array2.end());
    double answer;
    if(array1.size()%2 == 0){
        int upper = array1.size()/2;
        int lower = upper-1;
        answer = (array1[upper]+array1[lower])/2.0;
    }else{
        int mid = array1.size()/2;
        answer = array1[mid];
    }return answer;
}

int main(){
    vector<int> array1 = {2};
    vector<int> array2 = {4,5};
    // vector<int> array3 = {4,5,6};
    cout<<median(array1,array2)<<endl;
    return 0;
}
