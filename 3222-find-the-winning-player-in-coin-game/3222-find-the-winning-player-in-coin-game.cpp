class Solution {
public:
    string winningPlayer(int x, int y) {
        int t;
        t=min(x,y/4);
        if(t%2!=0)
        return "Alice";
        else
        return "Bob";
    }
};