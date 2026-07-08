class Solution {
public:
    bool judgeCircle(string moves) {
        int UC=0,LC=0,RC=0,DC=0;
        for(char c: moves)
        {
            if(c=='L')
            LC++;
            else if(c=='R')
            RC++;
            else if(c=='U')
            UC++;
            else
            DC++;
        }
        if(abs(LC-RC)==0 && abs(UC-DC)==0)
        return(true);
        else
        return(false);
    }
};