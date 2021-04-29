--------------------------------sodukosolver_by_xafmo7a-------------------------------------
Brute force solution for 9x9 soduko grids in C-language
started on 4/29/2021 1st personal project

SODUKO_solver1.0
########################################################################
ALGO_FOLLOWED://pseudo_code
General solution: //N=9(Size of grid)
Upload soduko grid from the file into 2d array Grid[N][N]
 Fill in all emprty slots with (1-9), then check if matrix is safe, else re_fill_w/ other cases.
Step_by_step solution:
1/Chec if the matrix is a valid grid??????????????????????(hashmaps)
2/define a recursive function solve_grid(Grid,Row,Colomn);
2/1./ base cases: 1/ If input index is at the end of the matrix 
                  2/ If col is at the last column A.K.A  i==8 -> move to second row with 0th Col /ex
3/Check if current index is empty IF()---
 TRUE- fill in with 1-9 and recall for all 9 cases with (i,j++)
      if solve_grid==1 //break the loop and and return 1
 FALSE- Call solve_grid(i,j++)  i,e

########################################################################
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

Menu implemented
    ___________________________________MENU___________________________________________
    Upload 9x9 grid from the file
    Check if grid is a valid soduko grid
    )Solve Grid!
    Print Grid
    Download the grid to the file
    QUIT
    ___________________________________MENU___________________________________________

















_____________________________SODUKO_SOLVER_1.0____________________________________
   ********************************          *************************************
________________________________BY_xafmo7a________________________________________
 ********************************          ************************************
