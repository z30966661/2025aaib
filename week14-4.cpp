///week14-4.cpp
///73.Set Matrix Zeroes
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M=matrix.size(),N=matrix[0].size();///��M �kN
        vector<int> left(M),up(N);///������� �W��������C++�}�C
        for(int i=0;i<M;i++){///����I���d��OM
            for(int j=0;j<N;j++){///�k��j���d��ON
                if(matrix[i][j]==0){///�J�즳0�N�b������� �W���������Ĥ�
                    left[i]=7;///���Ĥ�
                    up[j]=7;///���Ĥ�
                }
            }
        }
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(left[i]==7||up[j]==7)matrix[i][j]=0;
            }///�J�쥪�䦳�Ĥ� �W�����Ĥ� �⥦�]�w��0
        }
    }
};
