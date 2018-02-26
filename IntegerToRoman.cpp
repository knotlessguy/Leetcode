//Given an integer, convert it to a roman numeral.

//Input is guaranteed to be within the range from 1 to 3999.

class Solution {
public:
    string intToRoman(int num) {
        string m[] = {"", "M", "MM", "MMM"};
     string c[] = {"", "C", "CC", "CCC", "CD", "D", 
                        "DC", "DCC", "DCCC", "CM"};
     string x[] = {"", "X", "XX", "XXX", "XL", "L", 
                        "LX", "LXX", "LXXX", "XC"};
     string i[] = {"", "I", "II", "III", "IV", "V", 
                        "VI", "VII", "VIII", "IX"};
         
     // Converting to roman
     string thousands = m[num/1000];
     string hundereds = c[(num%1000)/100];
     string tens =  x[(num%100)/10];
     string ones = i[num%10];
         
     string ans = thousands + hundereds + tens + ones;
         
     return ans;
    }
};