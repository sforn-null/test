//137. 只出现一次的数字 II
//给你一个整数数组 nums ，除某个元素仅出现 一次 外，其余每个元素都恰出现 三次 。请你找出并返回那个只出现了一次的元素。
//
//
//
//示例 1：
//
//输入：nums = [2, 2, 3, 2]
//输出：3
//示例 2：
//
//输入：nums = [0, 1, 0, 1, 0, 1, 99]
//输出：99
//
//
//提示：
//
//1 <= nums.length <= 3 * 104
//- 231 <= nums[i] <= 231 - 1
//nums 中，除某个元素仅出现 一次 外，其余每个元素都恰出现 三次

class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        //统计出32个位，每个位合计起来1出现的次数
        //每个位1的个数要么是3n，要么是3n+1
        int Array[32] = { 0 };
        for (auto e : nums)
        {
            for (size_t i = 0;i < 32;++i)
            {
                if (e & (1 << i))
                {
                    Array[i]++;
                }
            }
        }
        int val = 0;
        for (size_t i = 0;i < 32;++i)
        {
            if (Array[i] % 3 != 0)
            {
                val ^= (1 << i);
            }
        }
        return val;
    }
};