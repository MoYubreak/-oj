//https://leetcode.cn/problems/multiply-strings/
//class Solution {
//public:
//    string multiply(string num1, string num2) {
//        int arr[num1.size() + num2.size()];
//        //将arr的元素都置为0
//        for (int i = 0; i < num1.size() + num2.size(); i++)
//        {
//            arr[i] = 0;
//        }
//        // 将每列的和存储到数列中
//        for (int i = num1.size() - 1; i >= 0; i--)
//        {
//            num1[i] -= '0';
//            for (int j = num2.size() - 1; j >= 0; j--)
//            {
//                char c = num2[j] - '0';
//                arr[i + j + 1] += num1[i] * c;
//            }
//        }
//        //模拟进位
//        for (int i = num1.size() + num2.size() - 1; i > 0; i--)
//        {
//            arr[i - 1] += arr[i] / 10;
//            arr[i] %= 10;
//        }
//        //存储到字符串中 , 个位在前，高位在后，方便后续扫尾
//        string str;
//        int indx = arr[0] == 0 ? 1 : 0;
//        for (int i = num1.size() + num2.size() - 1; i >= indx; i--)
//        {
//            str += arr[i] + '0';
//        }
//        //扫除高位上的0
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