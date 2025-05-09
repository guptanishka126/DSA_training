#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int s = matrix.size();
        //Transposing the existing matrix
        for(int i=0;i<s;i++){
            for(int j=i+1;j<s;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //Rotate the matrix by 90 degress
        for(int i=0;i<s;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }

    }
};
