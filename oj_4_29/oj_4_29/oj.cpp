//https://leetcode.cn/problems/multiply-strings/
//class Solution {
//public:
//    string multiply(string num1, string num2) {
//        int arr[num1.size() + num2.size()];
//        //��arr��Ԫ�ض���Ϊ0
//        for (int i = 0; i < num1.size() + num2.size(); i++)
//        {
//            arr[i] = 0;
//        }
//        // ��ÿ�еĺʹ洢��������
//        for (int i = num1.size() - 1; i >= 0; i--)
//        {
//            num1[i] -= '0';
//            for (int j = num2.size() - 1; j >= 0; j--)
//            {
//                char c = num2[j] - '0';
//                arr[i + j + 1] += num1[i] * c;
//            }
//        }
//        //ģ���λ
//        for (int i = num1.size() + num2.size() - 1; i > 0; i--)
//        {
//            arr[i - 1] += arr[i] / 10;
//            arr[i] %= 10;
//        }
//        //�洢���ַ����� , ��λ��ǰ����λ�ں󣬷������ɨβ
//        string str;
//        int indx = arr[0] == 0 ? 1 : 0;
//        for (int i = num1.size() + num2.size() - 1; i >= indx; i--)
//        {
//            str += arr[i] + '0';
//        }
//        //ɨ����λ�ϵ�0
//        string str0;
//        int i = str.size() - 1;
//        bool BL = true;
//        while (i >= 0)
//        {
//            if (i > 0 && str[i] == '0' && BL)
//            {
//                i--;
//            }
//            else
//            {
//                BL = false;
//                str0 += str[i];
//                i--;
//            }
//        }
//        return str0;
//    }
//};