//JZ1 ��ά�����еĲ���
//����
//��һ����ά����array�У�ÿ��һά����ĳ�����ͬ����ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳�����������һ������������������һ����ά�����һ���������ж��������Ƿ��и�������
//[
//	[1, 2, 8, 9],
//	[2, 4, 9, 12],
//	[4, 7, 10, 13],
//	[6, 8, 11, 15]
//]
//���� target = 7������ true��
//
//���� target = 3������ false��
//
//0 <= array.length <= 500
//0 <= array[0].length <= 500
//
//ʾ��1
//���룺
//7, [[1, 2, 8, 9], [2, 4, 9, 12], [4, 7, 10, 13], [6, 8, 11, 15]]
//����
//����ֵ��
//true
//����
//˵����
//����7������true
//ʾ��2
//���룺
//3, [[1, 2, 8, 9], [2, 4, 9, 12], [4, 7, 10, 13], [6, 8, 11, 15]]
//����
//����ֵ��
//false
//����
//˵����
//������3������false

class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int r = array.size() - 1;
        int c = array[0].size() - 1;
        if (array.size() == 0 || array[0].size() == 0)
            return false;
        if (target > array[r][c] || target < array[0][0])
            return false;
        int i = 0;
        while (r >= 0 && i <= c)
        {
            if (array[r][i] == target)
            {
                return true;
            }
            else if (array[r][i] > target) {
                r--;
            }
            else {
                i++;
            }
        }
        return false;
    }
};