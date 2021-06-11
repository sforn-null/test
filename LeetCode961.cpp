//961. �ظ� N �ε�Ԫ��
//�ڴ�СΪ 2N ������ A ���� N + 1 ����ͬ��Ԫ�أ�������һ��Ԫ���ظ��� N �Ρ�
//
//�����ظ��� N �ε��Ǹ�Ԫ�ء�
//
//
//
//ʾ�� 1��
//
//���룺[1, 2, 3, 3]
//�����3
//ʾ�� 2��
//
//���룺[2, 1, 2, 5, 3, 2]
//�����2
//ʾ�� 3��
//
//���룺[5, 1, 5, 2, 5, 3, 5, 4]
//�����5
//
//
//��ʾ��
//
//4 <= A.length <= 10000
//0 <= A[i] < 10000
//	A.length Ϊż��

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> coutMap;
        for (auto e : nums)
        {
            coutMap[e]++;
        }
        int N = nums.size() / 2;
        for (auto kv : coutMap)
        {
            if (kv.second == N)
            {
                return kv.first;
            }
        }
        return -1;
    }
};