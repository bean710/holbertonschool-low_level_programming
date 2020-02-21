#!/usr/bin/python3
"""Module containing function to get perimeter of island"""


def island_perimeter(grid):
    """Function to find the perimeter of an island"""
    perimeter = 0
    coord = [(1, 0), (0, 1), (-1, 0), (0, -1)]
    for y in range(len(grid)):
        for x in range(len(grid[0])):
            for cx, cy in coord:
                if (x + cx >= 0 and x + cx < len(grid[0]) and y + cy >= 0 and
                        y + cy < len(grid) and grid[y + cy][x + cx] == 0 and
                        grid[y][x] == 1):
                    perimeter += 1

    return perimeter
