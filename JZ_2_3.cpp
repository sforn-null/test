//��ָ Offer 03. �������ظ�������
//�ҳ��������ظ������֡�
//
//
//��һ������Ϊ n ������ nums ����������ֶ��� 0��n - 1 �ķ�Χ�ڡ�������ĳЩ�������ظ��ģ�����֪���м��������ظ��ˣ�Ҳ��֪��ÿ�������ظ��˼��Ρ����ҳ�����������һ���ظ������֡�
//
//ʾ�� 1��
//
//���룺
//[2, 3, 1, 0, 2, 5, 3]
//�����2 �� 3

class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        int i = 0;
        while (i < nums.size()) {
            if (nums[i] == i) {
                i++;
            }
            else {
                if (nums[i] == nums[nums[i]]) {
                    return nums[i];
                }
                else {
                    swap(nums[i], nums[nums[i]]);
                }
            }
        }
        return -1;
    }
};