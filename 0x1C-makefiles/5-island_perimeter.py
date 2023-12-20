#!/usr/bin/python3
"""methode for defining island perimeter"""

def island_perimeter(grid):
    """calculates island perimeter
    """
    w = len(grid[0]) #weight
    h = len(grid)#height
    e = 0 #edges
    s = 0 #sizes

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                s += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    e += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    e += 1
    return s * 4 - e * 2
