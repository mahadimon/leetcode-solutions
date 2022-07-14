/*
https://leetcode.com/problems/add-strings/

Test Case-1::
"123456789"
"987654321"

*/

class Solution {
public:
    string addStrings(string num1, string num2) {
        string retStr = "";
        int carry = 0;
        if(num1.length()<num2.length()){
            while(num1.length()!=num2.length())
                num1 = "0" + num1;
        }
        if(num1.length()>num2.length()){
            while(num1.length()!=num2.length())
                num2 = "0" + num2;
        }
        for(int i=num1.length()-1;i>=0;i--){
                int tmpNum1 = num1[i] - '0';
                //cout << tmpNum1 << "\n";
                int tmpNum2 = num2[i] - '0';
                //cout << tmpNum2 << "\n";
                int tmp = tmpNum1 + tmpNum2;
                tmp += carry;
                carry = 0;
                if(tmp >= 10){
                    retStr = to_string(tmp%10) + retStr;
                    carry = tmp/10;
                }else{
                    retStr = to_string(tmp) + retStr;
                }
                //cout << "carry: " << carry << "\n"; 
            }
        if(carry > 0)
            retStr = to_string(carry) + retStr;
        return retStr;
    }
};