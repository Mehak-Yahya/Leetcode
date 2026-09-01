/*
1071. Greatest Common Divisor of Strings
For two strings s and t, we say "t divides s" if and only if s = t + t + t + ... + t + t (i.e., t is concatenated with itself one or more times).
Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.

Example 1:
Input: str1 = "ABCABC", str2 = "ABC"
Output: "ABC"

Example 2:
Input: str1 = "ABABAB", str2 = "ABAB"
Output: "AB"

Example 3:
Input: str1 = "LEET", str2 = "CODE"
Output: ""

Example 4:
Input: str1 = "AAAAAB", str2 = "AAA"
Output: ""​​​​​​​

Constraints:
1 <= str1.length, str2.length <= 1000
str1 and str2 consist of English uppercase letters.
*/

class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        if (str1 + str2 != str2 + str1)
            return "";

        int len = gcd(str1.length(), str2.length());
        return str1.substr(0, len);
    }
};

/*
If GCD built in not allowed
*/

class Solution {
public:

    int findGCD(int a, int b) {   //let say a=8,b=4
        while (b != 0) {      
            int remainder = a % b; // 8%4=0
            a = b;                 // a=4
            b = remainder;         // b=0
        }

        return a;                 // return 4
    }

    string gcdOfStrings(string str1, string str2) {

        if (str1 + str2 != str2 + str1)
            return "";

        int len = findGCD(str1.length(), str2.length());

        return str1.substr(0, len);
    }
};