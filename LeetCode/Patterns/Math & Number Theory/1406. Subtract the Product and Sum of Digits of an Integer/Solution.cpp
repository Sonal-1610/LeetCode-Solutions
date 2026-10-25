class Solution {
public:
    int subtractProductAndSum(int n) {
        int rem=0,sum=0,product=1,diff;
        while(n!=0){
            rem=n%10;
            sum=sum+rem;
            product=product*rem;
            n=n/10;
        }
        diff=product-sum;
        return diff;
    }
};