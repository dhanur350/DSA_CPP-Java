class Solution {
public:
    int reverse(int x) {
        long reversed = 0;
        while(x != 0){
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x = x / 10;
        }
        if(reversed > INT_MAX || reversed < INT_MIN){
            return 0;
        }
        return reversed;
    }
};
