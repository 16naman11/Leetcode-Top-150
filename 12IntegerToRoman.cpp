#include <string>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        string thousands[] = {"", "M", "MM", "MMM"};
        string hundreds[]  = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        string tens[]      = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        string units[]     = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

        string result = "";
        result += thousands[num / 1000];
        result += hundreds[(num % 1000) / 100];
        result += tens[(num % 100) / 10];
        result += units[num % 10];

        return result;
    }
};
