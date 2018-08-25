class Solution:
    def judgeCircle(self, moves):
        """
        :type moves: str
        :rtype: bool
        """
        cx, cy = 0, 0
        dx, dy = {}, {}
        dx['L'], dx['R'] = -1, +1
        dy['U'], dy['D'] = +1, -1
        
        for item in moves:
            if(item == 'L' or item == 'R'):
                cx += dx[item]
            else:
                cy += dy[item]
        return cx == 0 and cy == 0
        
