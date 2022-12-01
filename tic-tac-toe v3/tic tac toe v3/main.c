//
//  main.c
//  tic tac toe v3
//
//  Created by Owner on 5/1/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>
#include <coi
#include <iostream.h> //header file for standard input output

COORD coordinate = {0,0}; //initialization
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    gotoxy(5,4);
    return 0;
}



void gotoxy(int x, int y){ //function definition
    
    coordinate.X = x; coordinate.Y =  y;
    
    SetConsoleCursorPostion(GetStdHandle(STD_OUTPUT_HANDLE),coordinate);
    
}
