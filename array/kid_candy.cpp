#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

int max(vector<int> &array){
    int max_val = INT_MIN;
    vector<int>::iterator iter;
    for(iter = array.begin();iter != array.end();iter++){
        if(max_val < *iter){
            max_val = *iter;
        }
    }return max_val;
}

vector<bool> kid_with_candies(vector<int> &candies,int extras){
    vector<bool> yesorno;
    int MAX = max(candies);
    for(int i = 0;i < candies.size();i++){
        candies[i] = candies[i]+extras;
    }
    vector<int>::iterator iter;
    for(iter = candies.begin();iter != candies.end();iter++){
        if(*iter >= MAX){
            yesorno.push_back(true);
        }else{
            yesorno.push_back(false);
        }
    }return yesorno;
}

void display(vector<bool> &candies){
    vector<bool>::iterator iter;
    for(iter = candies.begin();iter != candies.end();iter++){
        cout<<*iter<<" ";
    }cout<<endl;
}

int main(){
    vector<int> candies = {2,3,5,1,3};
    vector<bool> answer = kid_with_candies(candies,3);
    display(answer);
    return 0;
}
