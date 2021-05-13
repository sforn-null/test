//917. ������ת��ĸ
//����һ���ַ��� S������ ����ת��ġ� �ַ��������в�����ĸ���ַ���������ԭ�أ���������ĸ��λ�÷�����ת��
//
//
//
//ʾ�� 1��
//
//���룺"ab-cd"
//�����"dc-ba"
//ʾ�� 2��
//
//���룺"a-bC-dEf-ghIj"
//�����"j-Ih-gfE-dCba"
//ʾ�� 3��
//
//���룺"Test1ng-Leet=code-Q!"
//�����"Qedo1ct-eeLg=ntse-T!"
//
//
//��ʾ��
//
//S.length <= 100
//33 <= S[i].ASCIIcode <= 122
//S �в����� \ or "

class Solution {
public:
    string reverseOnlyLetters(string s)
    {
        int begin = 0;
        int end = s.size() - 1;
        while (begin < end)
        {
            while (begin < end && !(s[begin] >= 'a' && s[begin] <= 'z' || s[begin] >= 'A' && s[begin] <= 'Z'))
            {
                ++begin;
            }
            while (begin < end && !(s[end] >= 'a' && s[end] <= 'z' || s[end] >= 'A' && s[end] <= 'Z'))
            {
                --end;
            }
            swap(s[begin], s[end]);
            ++begin;
            --end;
        }
        return s;
    }
};