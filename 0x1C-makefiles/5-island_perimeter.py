#!/usr/bin/python3
"""
module calculate the perimeter of an island
"""


def island_perimeter(grid):
    """ function that returns the perimeter,
        of the island described in grid.
        Args:
             grid: an array of arrays
        Return:
              the perimeter of an island
    """
    perimeter = 0

    if grid is None:
        return perimeter

    if len(grid) == 0:
        return perimeter

    num_columns = len(grid[0])
    num_rows = len(grid)
    # Loop through each cell in the grid
    for row in range(num_rows):
        for column in range(num_columns):
            if grid[row][column] == 1:
                # Check the cell's neighbors and add to perimeter accordingly
                if row == 0 or grid[row-1][column] == 0:
                    perimeter += 1
                if column == 0 or grid[row][column-1] == 0:
                    perimeter += 1
                if row == len(grid)-1 or grid[row+1][column] == 0:
                    perimeter += 1
                if column == len(grid[row])-1 or grid[row][column+1] == 0:
                    perimeter += 1

    return perimeter
