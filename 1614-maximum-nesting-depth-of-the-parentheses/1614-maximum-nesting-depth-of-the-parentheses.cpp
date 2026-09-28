class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;
        int x =0;
        for(char ch : s){
            depth+= (ch =='(') - (ch ==')');
            x = max(x,depth);
        }
        return x;
    }
};