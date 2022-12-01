//
//  main.c
//  tic tac toe v2
//
//  Created by Owner on 2/2/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//
//
//--------------------FIXES AND IMPROVEMENTS--------------------
//
//IMPROVEMENTS -
//
//*ADDED SPACES FOR MORE VISIBILITY
//
//*ADDED LINES BETWEEN THE BOARD FOR MORE CLARITY
//
//*CHANGED PLAYER 1'S TOKEN FROM 'X' TO '&'
//
//*CHANGED PLAYER 2'S TOKEN FROM 'O ' TO '@'
//
//
//
//
//
//
//


#include <stdio.h>

char fill(int x)
{
    if(x % 2 == 0)
        return '&';
    else
        return '@';
}

int main()
{
    char board[3][3] = {{49, 50, 51}, {52, 53, 54}, {55, 56, 57}};
    int win = 0;
    int turn = 0;
    int in;
    
    
    printf("Welcome to this game of tic tac toe!\n");
    
    while(win == 0 && turn < 9)
    {
        printf("\n-------------------------\n");
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                printf("\t%c\t|", board[i][j]);
            }
            printf("\n-------------------------\n");
        }
        
        printf("\n\n");
        
        if(turn % 2 == 0)
        {
            printf("\n\nPlayer 1 (&), please input a number : ");
            scanf("%i", &in);
            printf("\n\n");
        }
        else
        {
            printf("\n\nPlayer 2 (@), please input a number : ");
            scanf("%i", &in);
            printf("\n\n");
        }
        
        switch(in)
        {
            case 1:
                if(board[0][0] != 49)
                {
                    printf("\n\nOOF! That spot was already taken. Please choose again!\n\n");
                    turn++;
                    break;
                }
                else
                {
                    board[0][0] = fill(turn);
                    turn++;
                    break;
                }
            case 2:
                if(board[0][1] != 50)
                {
                    printf("\n\nOOF! That spot was already taken. Please choose again!\n\n");
                    break;
                }
                else
                {
                    board[0][1] = fill(turn);
                    turn++;
                    break;
                }
            case 3:
                if(board[0][2] != 51)
                {
                    printf("\n\nOOF! That spot was already taken. Please choose again!\n\n");
                    break;
                }
                else
                {
                    board[0][2] = fill(turn);
                    turn++;
                    break;
                }
            case 4:
                if(board[1][0] != 52)
                {
                    printf("\n\nOOF! That spot was already taken. Please choose again!\n\n");
                    break;
                }
                else
                {
                    board[1][0] = fill(turn);
                    turn++;
                    break;
                }
            case 5:
                if(board[1][1] != 53)
                {
                    printf("\n\nOOF! That spot was already taken. Please choose again!\n\n");
                    break;
                }
                else
                {
                    board[1][1] = fill(turn);
                    turn++;
                    break;
                }
            case 6:
                if(board[1][2] != 54)
                {
                    printf("\n\nOOF! That spot was already taken. Please choose again!\n\n");
                    break;
                }
                else
                {
                    board[1][2] = fill(turn);
                    turn++;
                    break;
                }
            case 7:
                if(board[2][0] != 55)
                {
                    printf("\n\nOOF! That spot was already taken. Please choose again!\n\n");
                    break;
                }
                else
                {
                    board[2][0] = fill(turn);
                    turn++;
                    break;
                }
            case 8:
                if(board[2][1] != 56)
                {
                    printf("\n\nOOF! That spot was already taken. Please choose again!\n\n");
                    break;
                }
                else
                {
                    board[2][1] = fill(turn);
                    turn++;
                    break;
                }
            case 9:
                if(board[2][2] != 57)
                {
                    printf("\n\nOOF! That spot was already taken. Please choose again!\n\n");
                    break;
                }
                else
                {
                    board[2][2] = fill(turn);
                    turn++;
                    break;
                }
            default:
                printf("\n\nOh no! The value should be from 1-9 only!!\n\n");
        }
        
        for(int i = 0; i < 3; i++)
        {
            if(board[i][0] == board[i][1] && board[i][1] == board[i][2])
            {
                if(board[i][1] == '&')
                    printf("\n\nPLAYER 1 WON!!!!!\n\n");
                else
                    printf("\n\nPLAYER 2 WON!!!!!\n\n");
                win++;
                break;
            }
        }
        
        for(int i = 0; i < 3; i++)
        {
            if(board[0][i] == board[1][i] && board[1][i] == board[2][i])
            {
                if(board[1][i] == '&')
                    printf("\n\nPLAYER 1 WON!!!!!\n\n");
                else
                    printf("\n\nPLAYER 2 WON!!!!!\n\n");
                win++;
                break;
            }
        }
        
        if(board[0][0] == board[1][1] && board[1][1] == board[2][2])
        {
            if(board[1][1] == '&')
                printf("\n\nPLAYER 1 WON!!!!!\n\n");
            else
                printf("\n\nPLAYER 2 WON!!!!!\n\n");
            win++;
            break;
        }
        
        if(board[0][2] == board[1][1] && board[1][1] == board[2][0])
        {
            if(board[1][1] == '&')
                printf("\n\nPLAYER 1 WON!!!!!\n\n");
            else
                printf("\n\nPLAYER 2 WON!!!!!\n\n");
            win++;
            break;
        }
    }
    
    if(win == 0)
        printf("\n\nThe game is a draw!!!!!\n\n");
    printf("\n-------------------------\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("\t%c\t|", board[i][j]);
        }
        printf("\n-------------------------\n");
    }
}
