#!/usr/bin/python3
"""[summary]
    """


def check_around(x, y, grid):
    """[summary]

    Args:
        x ([type]): [description]
        y ([type]): [description]
        grid ([type]): [description]

    Returns:
        [type]: [description]
    """
    per = 0
    if y == 0 and x == 0:
        if grid[0][1] == 0:
            per += 1
        if grid[1][0] == 0:
            per += 1
        return (per + 2)
    elif y == len(grid[x]) - 1 and x == 0:
        if grid[x][y - 1] == 0:
            per += 1
        if grid[x + 1][y] == 0:
            per += 1
        return (per + 2)
    elif y == len(grid[x]) - 1 and x == len(grid) - 1:
        if grid[x - 1][y] == 0:
            per += 1
        if grid[x][y - 1] == 0:
            per += 1
        return (per + 2)
    elif y == 0 and x == len(grid) - 1:
        if grid[x][y + 1] == 0:
            per += 1
        if grid[x - 1][y] == 0:
            per += 1
        return (per + 2)
    elif y == 0 and x != len(grid) - 1:
        if grid[x][1] == 0:
            per += 1
        if grid[x + 1][0] == 0:
            per += 1
        if grid[x - 1][0] == 0:
            per += 1
        return (per + 1)
    elif x == 0 and y != len(grid[x]) - 1:
        if grid[0][1] == 0:
            per += 1
        if grid[0][y + 1] == 0:
            per += 1
        if grid[0][y - 1] == 0:
            per += 1
        return (per + 1)
    elif x == len(grid) - 1 and y != len(grid[x]) - 1:
        if grid[x][y - 1] == 0:
            per += 1
        if grid[x][y + 1] == 0:
            per += 1
        if grid[x - 1][y] == 0:
            per += 1
        return (per + 1)
    else:
        if grid[x][y + 1] == 0:
            per += 1
        if grid[x][y - 1] == 0:
            per += 1
        if grid[x + 1][y] == 0:
            per += 1
        if grid[x - 1][y] == 0:
            per += 1
        return (per)


def island_perimeter(grid):
    """[summary]

    Args:
        grid ([type]): [description]

    Returns:
        [type]: [description]
    """
    cx = 0
    cy = 0
    per = 0
    previous_x = 0
    previous_y = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                per = per + check_around(x, y, grid)
    return (per)
