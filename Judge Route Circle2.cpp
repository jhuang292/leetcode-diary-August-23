class Solution {
public:
    bool judgeCircle(string moves) {
        int cx{0};
        int cy{0};
        map<char, int> dx{{'L',-1}, {'R',+1}};
        map<char, int> dy{{'D',-1}, {'U',+1}};
        
        for (const char move: moves) {
            cx += dx[move];
            cy += dy[move];
        }
        
        return cx == 0 && cy == 0;
    }
};
