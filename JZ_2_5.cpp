//��ָ Offer 05. �滻�ո�
//��ʵ��һ�����������ַ��� s �е�ÿ���ո��滻��"%20"��
//
//
//
//ʾ�� 1��
//
//���룺s = "We are happy."
//�����"We%20are%20happy."
//
//
//���ƣ�
//
//0 <= s �ĳ��� <= 10000
//

class Solution {
public:
    string replaceSpace(string s) {
        //��ͳ��' '�ĸ���
        int count = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == ' ') {
                count++;
            }
        }
        //ת��֮����ַ������� = �ո���*2+ԭ�ַ�������
        int len = s.size();
        s.resize(len + 2 * count);
        int newlen = s.size();
        int i = len - 1, j = newlen - 1;
        while (i >= 0 && j > i) {
            if (s[i] == ' ') {
                s[j--] = '0';
                s[j--] = '2';
                s[j--] = '%';
            }
            else {
                s[j--] = s[i];
            }
            --i;
        }
        return s;
    }
};