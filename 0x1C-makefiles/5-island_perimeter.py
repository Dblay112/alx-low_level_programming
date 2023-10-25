#!/usr/bin/python3
"""Defines an island perimeter """


def island_perimeter(grid):
    """Returns the perimiter of an island.

    Args:
        grid (list): list of integers representing an island.
    Returns:
        perimeter of the island defined in grid.
    """
    width = length(grid[0])
    height = length(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[a][b] == 1:
                size += 1
                if (b > 0 and grid[a][b - 1] == 1):
                    edges += 1
                if (a > 0 and grid[a - 1][b] == 1):
                    edges += 1
    return size * 4 - edges * 2
