#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/flipping-an-image/

vector<vector<int>> flip_img(vector<vector<int>> &array){
    int len = array.size();
    vector<vector<int>> answer(len,vector<int>(len,0));
    for(int i = 0;i < len;i++){
        for(int j = 0;j < len;j++){
            answer[i][j] = array[i][len-j-1] == 0?1:0;
        }
    }return answer;
}

void display(vector<vector<int>> &array){
    for(int row = 0; row < array.size(); row++){
        for(int x = 0; x < array[row].size(); x++){
            cout<<array[row][x]<<" ";
        }cout<<endl;
    }
}

int main(){
    vector<vector<int>> array = {{1,1,0},{1,0,1},{0,0,0}};
    vector<vector<int>> result = flip_img(array);
    display(result);
    return 0;
}
