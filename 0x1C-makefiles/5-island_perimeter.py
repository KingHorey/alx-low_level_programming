#!/usr/bin/python3

""" No modules imported """


def island_perimeter(grid):
    """ calculates the perimeter of a nested list
    taking into consideration the exposed sides in its calculation"""

    if not grid:
        raise TypeError("List cannot be empty")

    if not isinstance(grid, list):
        raise TypeError("grid has to be type list")

    for cell in grid:
        if not isinstance(cell, list):
            raise TypeError("Grid has to be a nested list")

    length = len(grid)
    perimeter = 0

    for a in range(length):
        if all(item == 1 for item in grid[a]):
            perimeter += 1
        else:
            for b in range(len(grid[a])):
                if grid[a][b] == 1:
                    if b == 0:
                        perimeter += 1
                        try:
                            if grid[a + 1][b] == 0:
                                perimeter += 1
                        except IndexError:
                            perimeter += 1
                            pass
                        try:
                            if grid[a][b+1] == 0:
                                perimeter += 1
                        except IndexError:
                            perimeter += 1
                            pass
                        try:
                            if grid[a-1][b] == 0:
                                perimeter += 1
                        except IndexError:
                            perimeter += 1
                            pass
                    elif b == len(grid[a]) - 1:
                        perimeter += 1
                        try:
                            if grid[a + 1][b] == 0:
                                perimeter += 1
                        except IndexError:
                            perimeter += 1
                            pass
                        try:
                            if grid[a-1][b] == 0:
                                perimeter += 1
                        except IndexError:
                            perimeter += 1
                            pass
                        try:
                            if grid[a][b-1] == 0:
                                perimeter += 1
                        except IndexError:
                            pass
                    else:
                        try:
                            if grid[a + 1][b] == 0:
                                perimeter += 1
                        except IndexError:
                            perimeter += 1
                            pass
                        try:
                            if grid[a][b+1] == 0:
                                perimeter += 1
                        except IndexError:
                            perimeter += 1
                            pass
                        try:
                            if grid[a-1][b] == 0:
                                perimeter += 1
                        except IndexError:
                            perimeter += 1
                            pass
                        try:
                            if b == 0:
                                pass
                            else:
                                if grid[a][b-1] == 0:
                                    perimeter += 1
                        except IndexError:
                            pass
    return (perimeter)
