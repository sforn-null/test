//118. 杨辉三角
//给定一个非负整数 numRows，生成杨辉三角的前 numRows 行。
//
//
//
//在杨辉三角中，每个数是它左上方和右上方的数的和。
//
//示例 :
//
//输入: 5
//输出 :
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