//JZ2 �滻�ո�
//
//����
//��ʵ��һ����������һ���ַ����е�ÿ���ո��滻�ɡ� % 20�������磬���ַ���ΪWe Are Happy.�򾭹��滻֮����ַ���ΪWe % 20Are % 20Happy��
//ʾ��1
//���룺
//"We Are Happy"
//����
//����ֵ��
//"We%20Are%20Happy

class Solution {
public:
    /**
     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
     *
     *
     * @param s string�ַ���
     * @return string�ַ���
     */
    string replaceSpace(string s) {
        // write code here
        string NEW;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
            {
                NEW += s[i];
            }
            if (s[i] == ' ')
            {
                NEW += "%20";
            }
        }
        return NEW;
    }
};