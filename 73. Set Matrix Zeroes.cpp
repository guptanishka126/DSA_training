class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int b = matrix.size();
        int a = matrix[0].size();

        vector<int> rows(b,0);
        vector<int> cols(a,0);

        for(int i = 0; i<b; i++){
            for(int j = 0; j<a; j++){
                if(matrix[i][j] == 0){
                    rows[i] = 1;
                    cols[j] = 1;
                }
            }
        }

        for(int i=0;i<b;i++){
            for(int j=0;j<a;j++){
                if(rows[i]||cols[j]){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
