class Solution {
public:
    double angleClock(int hour, int minutes) {
        double houra=30*(hour)+0.5*minutes;
        double mina=6*minutes;
        double diff=abs(houra-mina);
        return min(diff,360-diff);
        
    }
};