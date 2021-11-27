#Problem Description
#You are given a maze with N cells. Each cell may have multiple entry points but not more than one exit (ie. entry/exit points are unidirectional doors like valves). The cells are named with an integer value from 0 to N-1. 
#You have to find: Nearest meeting cell: Given any two cells – C1, C2, find the closest cell Cm that can be reached from both C1 and C2. 
#INPUT FORMAT
#1.An integer T, denoting the number of testcases, followed by 3T lines, as each testcase will contain 3 lines
#2.The first line of each testcase has the number of cells N
#3.The second line of each testcase has a list of N values of the edge[] array. 
#edge[i] contains the cell number that can be reached from cell ‘i’ in one step. edge[i] is -1 if he ‘i’th cell doesn’t have an exit.
#Third line for each testcase contains two cell numbers whose nearest meeting cell needs to be found. (return-1)
#if there is no meeting cell from the two given cells) OUTPUT FORMAT For each testcase given, output a single line that denotes the nearest meeting cell (NMC)
#INPUT
#23
#4 4 1 4 1 3 8 8 8 0 8 1 4 9 15 11-1 10 15 22 22 22 22 22 21 
#9
#OUTPUT
#4
def largestCycle(edges,ch):
    result = []
    visitedFrom = [-1] * len(edges)
    for startCell in range(0, len(edges)):
        cells = []
        cell = startCell
        while cell > -1 and visitedFrom[cell] == -1:
            visitedFrom[cell] = startCell
            cells.append(cell)
            cell = edges[cell]
        if cell > -1 and visitedFrom[cell] == startCell:
            cells_idx = cells.index(cell)
            cells = cells[cells_idx:]
            if len(cells) > len(result):
                result = cells
    if(len(result)>0):
        print(result[1])
    else:
        print(-1)


size = int(input())
edges = []
for j in range(size):
    k = int(input())
    edges.append(k)
ch = int(input())
largestCycle(edges,ch)

