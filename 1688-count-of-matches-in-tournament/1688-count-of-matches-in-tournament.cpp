class Solution {
public:
    int numberOfMatches(int n) {
        int m=0;
        int tm=n;
        int round=sqrt(n)+1;
        for(int i=round;i>0;i--)
        {
            if(tm%2==0)
            {
                m=m+tm/2;
                tm=tm/2;
            }
            else
            {
                m=m+tm/2;
                tm=(tm+1)/2;
            }
        }
        return m;
    }
};