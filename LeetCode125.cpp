//����һ���ַ�������֤���Ƿ��ǻ��Ĵ���ֻ������ĸ�������ַ������Ժ�����ĸ�Ĵ�Сд��
//
//˵���������У����ǽ����ַ�������Ϊ��Ч�Ļ��Ĵ���
//
//ʾ�� 1:
//
//����: "A man, a plan, a canal: Panama"
//��� : true
//ʾ�� 2 :
//
//	���� : "race a car"
//	��� : false

class Solution {
public:
    bool isCharOrNumber(char ch)
    {
        if (ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9')
            return true;
        else
            return false;
    }
    bool isPalindrome(string s)
    {
        //���ַ��������еĴ�д��ĸת��Сд
        for (auto& ch : s)//����һ��Ҫ�����ã���ΪҪ�ı�s��������Ķ���
        {               //��������֮��ı�ch
            if (ch >= 'A' && ch <= 'Z')
            {
                ch += 32;
            }
        }
        int begin = 0, end = s.size() - 1;
        while (begin < end)
        {
            while (begin < end && !isCharOrNumber(s[begin]))
            {
                ++begin;
            }
            while (begin < end && !isCharOrNumber(s[end]))
            {
                --end;
            }
            if (s[begin] != s[end])
            {
                return false;
            }
            else
            {
                ++begin;
                --end;
            }
        }
        return true;
    }
};
