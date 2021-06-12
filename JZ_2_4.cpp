//��ָ Offer 04. ��ά�����еĲ���
//��һ�� n * m �Ķ�ά�����У�ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳�����������һ����Ч�ĺ���������������һ����ά�����һ���������ж��������Ƿ��и�������
//
//
//
//ʾ��:
//
//���о��� matrix ���£�
//
//[
//	[1, 4, 7, 11, 15],
//	[2, 5, 8, 12, 19],
//	[3, 6, 9, 16, 22],
//	[10, 13, 14, 17, 24],
//	[18, 21, 23, 26, 30]
//]
//���� target = 5������ true��
//
//���� target = 20������ false��
//
//
//
//���ƣ�
//
//0 <= n <= 1000
//
//0 <= m <= 1000

class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if (matrix.empty()) {
            return false;
        }
        int row = 0, col = matrix[0].size() - 1;
        while (row < matrix.size() && col >= 0) {
            if (target == matrix[row][col]) {
                return true;
            }
            else if (target > matrix[row][col]) {
                row++;
            }
            else {
                col--;
            }
        }
        return false;
    }
};