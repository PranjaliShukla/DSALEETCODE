class Solution {
public:
int fi(int n){
    if(n<=1)return n;
    return fi(n-1)+fib(n-2);
}
    int fib(int n) {
        int k=fi(n);
        return k;
        
    }
};