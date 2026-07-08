class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int LC=0,RC=0,ULC=0;
        for(char c : moves)
        {
            if(c=='L')
            {
                LC++;
            }
            else if(c=='R')
            {
                RC++;
            }
            else ULC++;
        }
        return abs(LC-RC)+ULC;
        
    }
};