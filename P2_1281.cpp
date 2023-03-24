class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro=1;
        int sum=0;
        while(n>0){
            int m = n%10;
            sum += m;
            pro *= m;
            n = n / 10;

        }
        return pro-sum;

    }
};
