#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimiter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for t in range(height):
        for v in range(width):
            if grid[t][v] == 1:
                size += 1
                if (v > 0 and grid[t][v - 1] == 1):
                    edges += 1
                if (t > 0 and grid[t - 1][v] == 1):
                    edges += 1
    return size * 4 - edges * 2
