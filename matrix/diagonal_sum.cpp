#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/matrix-diagonal-sum/

int diagonal_sum(vector<vector<int>> &matrix){
    int sum = 0;
    int len = matrix.size();
    for(int i = 0;i < len;i++){
        sum += matrix[i][i];
        sum += matrix[len-i-1][i];
    }
    if(len%2 != 0){
        sum -= matrix[len/2][len/2];
    }return sum;
}

int main(){
    vector<vector<int>> matrix1 = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> matrix2 = {{1,2},{3,4}};
    cout<<diagonal_sum(matrix1)<<endl;
    cout<<diagonal_sum(matrix2)<<endl;
    return 0;
}
