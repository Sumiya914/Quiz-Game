#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

void show_record();
void reset_score();
void help();
void edit_score(float, char[]);

int main()
{
    int counter,a,b,count,i,d;
    float score;
    char choice;
    char playername[30];
mainhome:
    system("cls");
    printf("\t\t\t\nQUIZ GAME\n ");
    printf("\n\t\t______________________");
    printf("\n\t\t\tWELCOME");
    printf("\n\t\t\t   TO  ");
    printf("\n\t\t\tTHE GAME");
    printf("\n\t\t____________________________________________");
    printf("\n\t\t____________________________________________");
    printf("\n\t\t   BECOME THE GOD OF QUIZ!!!!!!     ");
    printf("\n\t\t____________________________________________");
    printf("\n\t\t____________________________________________");
    printf("\n\t\t > Press S to start the Game");
    printf("\n\t\t > Press V to see the High Score ");
    printf("\n\t\t > Press R to Reset the Score");
    printf("\n\t\t > Press H for Help          ");
    printf("\n\t\t > Press Q to Quit the Game"  );
    printf("\n\t\t____________________________________________");
    printf("\n\t\t____________________________________________\n\n");
    printf("\n\t\t\t All CREDIT GOES TO ");
    printf("\n\t\t____________________________________________\n\n");
    printf("\n\t\t Durjoy, Sumaiya, Aminul, Abir, Saimon\n\n ");


    choice=toupper(getch());
    if (choice=='V')
    {
        show_record();
        goto mainhome;
    }
    else if (choice=='R')
    {
        reset_score();
        getch();
        goto mainhome;
    }
    else if (choice=='H')
    {
        help();
        getch();
        goto mainhome;
    }
    else if (choice=='Q')
        exit(1);
    else if (choice=='S')
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\tRegister your name:");
        gets(playername);

        system("cls");
        printf("\n -----------------Welcome to QUIZ GAME-----------------",playername);
        printf("\n\n Here are some tips you might wanna know before playing:");
        printf("\n___________________________________________________________________");
        printf("\n >> There are 2 rounds in this QUIZ GAME, WARMUP ROUND & CHALLANGE ROUND ");
        printf("\n >> In warmup round you will be asked total 3 questions to test your");
        printf("\n    general knowledge. you eligable to play the game if you atleast give 2 correct answer");
        printf("\n >> Your start with CHALLENGE ROUND. In this round you will be asked a");
        printf("\n    total of 10 questions. Each right ans will be awarded 1point");
        printf("\n    By this way you can make 10 points to became the GOD of QUIZ!!!!...");
        printf("\n >> You will be given 4 or 2 options and you have to press A, B, C or D for the");
        printf("\n    right option.");
        printf("\n >> You will be asked questions continuosly, till the right answer are given");
        printf("\n >> No negative marks for wrong answer!");
        printf("\n\n\t___________BEST OF LUCK_____________");
        printf("\n\n\n Press Y to start the game!\n");
        printf("\n Press any Key to return to the main manu");

        if (toupper(getch())=='Y');
        {
            goto home;

        }
        else
        {
            goto mainhome;
            system("cls");
        }

home:
        system("cls");
        count=0;
        for (i=1; i<=3; i++)
        {
            system("cls");
            b=i;

            switch(b)

            {
            case 1:
                printf("\n\nCompiler generate ___ file?");
                printf("\n\nA.Executable code\t\tB.Object code\n\nC.Assembly code\t\tD.None");
                if (toupper(getch())=='B')
                {
                    printf("\n\nCorrect!!!");count++;
                    getch();
                    break;
                }

                else
                {
                    printf("/n/nWrong!!! The correct answer is B.Object code");
                    getch();
                    break;
                }

            case 2:
                printf("/n/n/nWhich of the following is a logical NOT operator?");
                printf("\n\nA. ! \t\tB.& \n\nC. && \t\tD.All");
                if (toupper(getch())=='A')
                {
                    printf("\n\nCorrect!!!");count++;
                    getch();
                    break;
                }

                else
                {
                    printf("/n/nWrong!!! The correct answer is A. ! ");
                    getch();
                    break;
                }

                case 3:
                printf("/n/n/nWhich of the following has a global scope in the program?");
                printf("\n\nA.Formal parameters\t\tB.Macros\n\nC.Constants\t\tD.Local variables");
                if (toupper(getch())=='B')
                {
                    printf("\n\nCorrect!!!");count++;
                    getch();
                    break;
                }

                else
                {
                    printf("/n/nWrong!!! The correct answer is B.Macros");
                    getch();
                    break;
                }

                case 4:
                printf("/n/n/nWhat is the correct way of treating 9.81 as a long double?");
                printf("\n\nA.9.81L\t\tB.9.81LD\n\nC.9.81D\t\tD.9.81DL");
                if (toupper(getch())=='A')
                {
                    printf("\n\nCorrect!!!");count++;
                    getch();
                    break;
                }

                else
                {
                    printf("/n/nWrong!!! The correct answer is A.9.81L");
                    getch();
                    break;
                }

                case 5:
                printf("/n/n/nWhich of the following statements about unions is incorrect?");
                printf("\n\nA.A bit field cannot be used in a union\t\tB.A pointer to a union exists\n\nC.Union elements can be of different sizes\t\tD.None");
                if (toupper(getch())=='A')
                {
                    printf("\n\nCorrect!!!");count++;
                    getch();
                    break;
                }

                else
                {
                    printf("/n/nWrong!!! The correct answer is A.A bit field cannot be used in a union");
                    getch();
                    break;
                }

                case 6:
                printf("/n/n/nIn Python 3, the maximum value for an integer is 263 - 1:");
                printf("\n\nA.True\t\tB.false");
                if (toupper(getch())=='B')
                {
                    printf("\n\nCorrect!!!");count++;
                    getch();
                    break;
                }

                else
                {
                    printf("/n/nWrong!!! The correct answer is B.False");
                    getch();
                    break;
                }

                if(count>=2)
                {
                    goto test;
                }
                else
                {
                    system("cls");
                    printf("\n\nSorry You are not eligible to play the Game, Better luck Next Time!!!");
                    getch();
                    goto mainhome;
                }
                test:
                    system("cls");
                    printf("\n\n\t***Congratulations!!! You are eligible to play the Game*** ", playername);
                    printf("\n\n\n\n\t!Press any Key to start the game!");
                    if(toupper(getch())=='P')
                    {
                        goto game;
                    }
                    game:
                        counter=0
                        for(i=1;i<=10;i++)
                        {
                            system("cls");

                        }
                        a=i;

                        switch(a)
                        {
                             case 1:
                printf("/n/n/nWhich operator has higher precedence in the following list");
                printf("\n\nA.% Modulus\t\tB.& BitWise AND\n\nC.**, Exponent\t\tD.> Comparison");
                if (toupper(getch())=='C')
                {
                    printf("\n\nCorrect!!!");counter++;
                    getch();
                    break;getch();
                }
                else
                {
                    printf("/n/nWrong!!! The correct answer is C.**, Exponent");
                    getch();
                    goto score;
                    break;
                }

                case 2:
                printf("/n/n/nThe ‘in’ operator is used to check if a value exists within an iterable object container such as a list. Evaluates to true if it finds a variable in the specified sequence and false otherwise.");
                printf("\n\nA.True\t\tB.false");
                if (toupper(getch())=='A')
                {
                    printf("\n\nCorrect!!!");counter++;
                    getch();
                    break;
                }

                else
                {
                    printf("/n/nWrong!!! The correct answer is A.True");
                    getch();
                    goto score;
                    break;
                }

                case 3:
                printf("/n/n/nHow do you insert COMMENTS in Python code?");
                printf("\n\nA.#This is a comment\t\tB./*This is a comment*/\n\nC.//This is a comment\t\tD.None");
                if (toupper(getch())=='A')
                {
                    printf("\n\nCorrect!!!");counter++;
                    getch();
                    break;
                }

                else
                {
                    printf("/n/nWrong!!! The correct answer is A.#This is a comment");
                    getch();
                    goto score;
                    break;
                }

                case 4:
                printf("/n/n/nWhich one is NOT a legal variable name?");
                printf("\n\nA.my_var\t\tB.my-var\n\nC.Myvar\t\tD._myvar");
                if (toupper(getch())=='B')
                {
                    printf("\n\nCorrect!!!");counter++;
                    getch();
                    break;
                }

                else
                {
                    printf("/n/nWrong!!! The correct answer is B.my-var");
                    getch();
                    goto score;
                    break;
                }


                        }














            }
        }


    }





















}

