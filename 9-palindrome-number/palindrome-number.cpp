class Solution {
public:
    bool isPalindrome(int x) {
        int new_num = x;
        if(x<0) return false;
        long long palind=0;
       while(x > 0){
            int num = x%10;
            palind = palind*10+num;
            x /= 10;
       }
       return new_num == palind; 
    }
};