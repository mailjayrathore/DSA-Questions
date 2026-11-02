class Solution {
public:
    bool isIsomorphic(string s, string t) {

        int sToT[256] = {0};
        int tToS[256] = {0};

        for(int i = 0; i < s.size(); i++){

            char ch1 = s[i];
            char ch2 = t[i];

            if(sToT[ch1] != 0 && sToT[ch1] != ch2){
                return false;
            }

            if(tToS[ch2] != 0 && tToS[ch2] != ch1){
                return false;
            }

            sToT[ch1] = ch2;
            tToS[ch2] = ch1;
        }

        return true;
    }
};