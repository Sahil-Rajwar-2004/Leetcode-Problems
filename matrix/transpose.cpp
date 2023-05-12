#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/transpose-matrix/

vector<vector<int>> transpose(vector<vector<int>> &matrix){
    vector<vector<int>> tmatrix(matrix[0].size(),vector<int>(matrix.size()));
    for(int row = 0;row < matrix.size();row++){
        for(int x = 0;x < matrix[row].size();x++){
            tmatrix[x][row] = matrix[row][x];
        }
    }return tmatrix;
}

void display(vector<vector<int>> &matrix){
    for(int row = 0;row < matrix.size();row++){
        for(int x = 0;x < matrix[row].size();x++){
            cout<<matrix[row][x]<<" ";
        }cout<<endl;
    }
}

int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    display(matrix);
    cout<<endl;
    vector<vector<int>> tmatrix = transpose(matrix);
    display(tmatrix);
    return 0;
}
