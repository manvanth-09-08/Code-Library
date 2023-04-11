https://leetcode.com/problems/check-knight-tour-configuration/

class Solution:
    def checkValidGrid(self, grid: List[List[int]]) -> bool:
        n = len(grid)
        t = n*n -1 

        x, y = 0, 0
        v = 0

        dx = [1, 2, 1, 2, -1, -2, -1, -2]
        dy = [2, 1, -2, -1, 2, 1, -2, -1]

        while True:
            p = v
            for i in range(8):
                tx = x + dx[i]
                ty = y + dy[i]

                if 0 <= tx < n and 0 <= ty < n:
                    if grid[ty][tx] == v + 1:
                        v += 1
                        x, y = tx, ty
                        break

            if v != p + 1:
                return False

            if v == t:
                return True

        