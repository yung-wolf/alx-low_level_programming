#!/usr/bin/python3


"""
Module: 5-island_perimeter

Contains one function, island_perimeter(grid)
"""


def island_perimeter(grid):
    """Return the perimeter of the island described in grid.

    Arg:
        grid: list of lists
            0 represents a water zone
            1 represents a land zone

            One cell is a square with side length 1.
            Grid cells are connected horizontally/vertically (not diagonally).
            Grid is rectangular, width and height don’t exceed 100.

    Grid is completely surrounded by water,
    and there is one island (or nothing).
    The island does not have `lakes`
    (water inside that isn’t connected to the water around the island).
    """
    num_of_rows = len(grid)  # num of rows in grid
    current_row_number = 0  # Holds the current row number of the loop
    perimeter = 0
    for lst in grid:
        idx = 0  # index to locate elements in list of lists
        for element in lst:  # loops elements in the list of lists

            # checks if current position (cp) element is 1 in grid
            if element == 1:

                # check if water is left of cp. If true perimeter + 1
                if lst[idx - 1] == 0:
                    perimeter += 1

                # check if water is right of cp. If true perimeter + 1
                if lst[idx + 1] == 0:
                    perimeter += 1

                # Only look below when not on last row
                if current_row_number != num_of_rows - 1:
                    # check below cp for water zone
                    if grid[current_row_number + 1][idx] == 0:
                        perimeter += 1
                else:  # 1 is on last row
                    perimeter += 1
                if current_row_number > 0:
                    # check above cp for water zone
                    if grid[current_row_number - 1][idx] == 0:
                        perimeter += 1
            idx += 1
        current_row_number += 1

    return perimeter
