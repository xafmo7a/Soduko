#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 9

//function def------------
int read_grid(FILE*fp);
int check_safe(int col, int row);
void print_grid(int grid[N][N]);
int solve_grid(int grid[N][N],int col,int row);
void menu(void);
//------------------------
int main(){
    menu();






    return(0);
}
 
//function prototypes------------------
void menu(void){
    printf("\n\t\t_____________________________SODUKO_SOLVER_1.0____________________________________");
    printf("\n\t\t********************************          *****************************************");
    printf("\n\t\t________________________________BY_xafmo7a________________________________________");
    ///printf("\n\t\t********************************          *****************************************");
    printf("\n\t\t___________________________________MENU___________________________________________");
    printf("\n\t\t1.)Upload 9x9 grid from the file");
    printf("\n\t\t2.)Check if grid is a valid soduko grid");
    printf("\n\t\t3.)Solve Grid!");
    printf("\n\t\t4.)Print Grid");
    printf("\n\t\t5.)Download the grid to the file");
    printf("\n\t\t6.)QUIT");
    printf("\n\t\t___________________________________MENU___________________________________________");
}
//-------------------------------------