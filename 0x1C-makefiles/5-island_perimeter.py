#!/usr/bin/python3
"""Module containing function to get perimeter of island"""


def island_perimeter(grid):
    """Function to find the perimeter of an island"""
    perimeter = 0
    coord = [(1, 0), (0, 1), (-1, 0), (0, -1)]
    for y in range(len(grid)):
        for x in range(len(grid[0])):
            if (grid[y][x] == 1):
                if (y - 1 < 0):
                    perimeter += 1
                elif (grid[y - 1][x] == 0):
                    perimeter += 1

                if (y + 1 >= len(grid)):
                    perimeter += 1
                elif (grid[y + 1][x] == 0):
                    perimeter += 1

                if (x - 1 < 0):
                    perimeter += 1
                elif (grid[y][x - 1] == 0):
                    perimeter += 1

                if (x + 1 >= len(grid[0])):
                    perimeter += 1
                elif (grid[y][x + 1] == 0):
                    perimeter += 1

    return perimeter
