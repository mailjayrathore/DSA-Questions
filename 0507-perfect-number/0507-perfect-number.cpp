
class Solution {
public:
    bool checkPerfectNumber(int num) {
        int temp = 0;

        for (int div = 1; div < num; div++) {
            if (num % div == 0) {
                temp += div;
            }
        }

        if (temp == num) {
            return true;
        }

        return false;
    }
};
