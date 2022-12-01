//
//  main.c
//  tic tac toe v1
//
//  Created by Owner on 2/2/20.
//  Copyright © 2020 Vinayak Ranjan. All rights reserved.
//

#include <stdio.h>

char fill(int x)
{
    if(x % 2 == 0)
        return 'X';
    else
        return 'O';
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
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                printf("%c\t", board[i][j]);
            }
            printf("\n");
        }
        
        
        if(turn % 2 == 0)
        {
            printf("Player 1 (X), please input a number : ");
            scanf("%i", &in);
        }
        else
        {
            printf("Player 2 (O), please input a number : ");
            scanf("%i", &in);
        }
        
        switch(in)
        {
            case 1:
                if(board[0][0] != 49)
                {
                    printf("OOF! That spot was already taken. Please choose again!\n");
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
                    printf("OOF! That spot was already taken. Please choose again!\n");
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
                    printf("OOF! That spot was already taken. Please choose again!\n");
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
                    printf("OOF! That spot was already taken. Please choose again!\n");
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
                    printf("OOF! That spot was already taken. Please choose again!\n");
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
                    printf("OOF! That spot was already taken. Please choose again!\n");
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
                    printf("OOF! That spot was already taken. Please choose again!\n");
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
                    printf("OOF! That spot was already taken. Please choose again!\n");
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
                    printf("OOF! That spot was already taken. Please choose again!\n");
                    break;
                }
                else
                {
                    board[2][2] = fill(turn);
                    turn++;
                    break;
                }
                default:
                printf("Oh no! The value should be from 1-9 only!!\n");
        }
        
        for(int i = 0; i < 3; i++)
        {
            if(board[i][0] == board[i][1] && board[i][1] == board[i][2])
            {
                if(board[i][1] == 'X')
                    printf("PLAYER 1 WON!!!!!\n");
                else
                    printf("PLAYER 2 WON!!!!!\n");
                win++;
                break;
            }
        }
        
        for(int i = 0; i < 3; i++)
        {
            if(board[0][i] == board[1][i] && board[1][i] == board[2][i])
            {
                if(board[1][i] == 'X')
                    printf("PLAYER 1 WON!!!!!\n");
                else
                    printf("PLAYER 2 WON!!!!!\n");
                win++;
                break;
            }
        }
    
        if(board[0][0] == board[1][1] && board[1][1] == board[2][2])
        {
            if(board[1][1] == 'X')
                printf("PLAYER 1 WON!!!!!\n");
            else
                printf("PLAYER 2 WON!!!!!\n");
            win++;
            break;
        }
        
        if(board[0][2] == board[1][1] && board[1][1] == board[2][0])
        {
            if(board[1][1] == 'X')
                printf("PLAYER 1 WON!!!!!\n");
            else
                printf("PLAYER 2 WON!!!!!\n");
            win++;
            break;
        }
    }
    
    if(win == 0)
        printf("The game is a draw!!!!!");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%c\t", board[i][j]);
        }
        printf("\n");
    }
}
