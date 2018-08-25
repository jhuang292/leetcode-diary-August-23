class Solution {
public:
    bool judgeCircle(string moves) {
        int cx{0};
        int cy{0};
        
        for (const char move: moves) {
            switch(move) {
                case 'U':
                    ++cy;
                    break;
                case 'D':
                    --cy;
                    break;
                case 'L':
                    --cx;
                    break;
                case 'R':
                    ++cx;
                    break;
                    
            }
        }
        
        return cx == 0 && cy == 0;
    }
};
