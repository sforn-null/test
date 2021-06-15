//118. �������
//����һ���Ǹ����� numRows������������ǵ�ǰ numRows �С�
//
//
//
//����������У�ÿ�����������Ϸ������Ϸ������ĺ͡�
//
//ʾ�� :
//
//����: 5
//��� :
//    [
//        [1],
//        [1, 1],
//        [1, 2, 1],
//        [1, 3, 3, 1],
//        [1, 4, 6, 4, 1]
//    ]

class Solution {
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> vv;
        vv.resize(numRows);
        for (size_t i = 0;i < numRows;++i)
        {
            vv[i].resize(i + 1);
        }
        for (size_t i = 0;i < numRows;++i)
        {
            vv[i][0] = 1;
            vv[i][vv[i].size() - 1] = 1;
        }
        for (size_t i = 0;i < vv.size();++i)
        {
            for (size_t j = 0;j < vv[i].size();++j)
            {
                if (vv[i][j] != 1)
                {
                    vv[i][j] = vv[i - 1][j - 1] + vv[i - 1][j];
                }
            }
        }
        return vv;
    }
};