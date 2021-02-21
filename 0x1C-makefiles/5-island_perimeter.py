#!/usr/bin/python3
"""[summary]
    """


def island_perimeter(grid):
    """[summary]

    Args:
        grid ([type]): [description]

    Returns:
        [type]: [description]
    """
    cx = 0
    cy = 0
    previous_x = 0
    previous_y = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1 and cx == 0:
                cx += 1
                cy += 1
                previous_x = x
                previous_y = y
            elif grid[x][y] == 1 and previous_x == x:
                cx += 1
                previous_x = x
                previous_y = y
            elif grid[x][y] == 1 and previous_y == y:
                cy += 1
                previous_x = x
                previous_y = y
    return ((cx * 2) + (cy * 2))
