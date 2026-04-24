class Solution {
public:
double pow(long long n,double x){
    if(n==0)return 1.0;
    if(n%2==0){
        return pow(n/2,x*x);
    }
    else{
        return x*pow((n-1)/2,x*x);
    }
}
    double myPow(double x, int n) {
        long long N=n;
        if(N<0){
            return 1.0/pow(-N,x);
        }
        return pow(N,x);
        
    }
};