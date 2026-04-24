class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n=moves.size();
        int le=0;
        int re=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L'){
                le=le+1;
            }
            else if(moves[i]=='R'){
                re=re+1;
            }

        }
        int ans=0;
        int blank=abs(n-le-re);
        if(le>re){
            ans=le-re+blank;

        }
        else{
            ans=re-le+blank;
        }
        return ans;
        
    }
};