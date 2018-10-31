#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>
#include <time.h>
#include "leaderboard.h"
#include "mainfunctions.h"
#include "printing.h"
#include "saveload.h"
#include "sidefunctions.h"

//-70|>>-51_

int main()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
    int row2,col2,k,l;
    int i2=0;
    long long start_t=0, end_t=0, total_t=0, Min=0;
    char matrex1[6][9]= {{255,255,'1',255,255,'2',255,255,'3'},
        {'1',255,201,255,255,203,255,255,187},
        {255,255,255,255,255,255,255,255,255},
        {'2',255,204,255,255,206,255,255,185},
        {255,255,255,255,255,255,255,255,255},
        {'3',255,200,255,255,202,255,255,188}
    };

    char matrex2[12][18]= {{255,255,'1',255,255,'2',255,255,'3',255,255,'4',255,255,'5',255,255,'6'},
        {'1',255,201,255,255,203,255,255,203,255,255,203,255,255,203,255,255,187},
        {255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255},
        {'2',255,204,255,255,206,255,255,206,255,255,206,255,255,206,255,255,185},
        {255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255},
        {'3',255,204,255,255,206,255,255,206,255,255,206,255,255,206,255,255,185},
        {255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255},
        {'4',255,204,255,255,206,255,255,206,255,255,206,255,255,206,255,255,185},
        {255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255},
        {'5',255,204,255,255,206,255,255,206,255,255,206,255,255,206,255,255,185},
        {255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255},
        {'6',255,200,255,255,202,255,255,202,255,255,202,255,255,202,255,255,188}
    };
gotoxy(20,10);
    printf("PS :- after any input you have to press 'enter' :,D\n");
    gotoxy(20,11);
    printf("please enter player1 name:\n");
    char player1_name[50];
    char player2_name[50]= {67,111,109,112,117,116,101,114};
    gets(player1_name);
    system("cls");
    int Size,z;
    int save_file=0,load_file=0;
    int menu,x,menu_1 ;
    for(x=1; x>0; x++)
    {
        gotoxy(20,9);
        printf("1-continue");
        gotoxy(20,10);
        printf("2- start game \n");
        gotoxy(20,11);
        printf("3- leader board\n ");
        gotoxy(20,12);
        printf("4- load \n");
        gotoxy(20,13);
        printf("5-exit\n");
        scanf("%s",string1);
        for(z=0; z<=10; z++)
        {
            if(string1[z]=='2')
            {
                menu=1;
                break;
            }
            else if(string1[z]=='3')
            {
                menu=2;
                break;
            }
            else if (string1[z]=='4')
            {
                menu=3;
                break;
            }
            else if (string1[z]=='5')
            {
                return 0;
            }
            else if (string1[z]=='1')
            {
                menu=5;
                load_4(player1_name,player2_name,matrex1,matrex2,& Size,  &Min, &total_t ,&i2);
                j--;
                break;
            }
            else if(z==10)
            {
                system("cls");
                printf("choose a correct number please :'D\n ");
            }

        }
        if(z<11)
            break;

    }

    system("cls");
    if(menu==3)
    {
        printf("Choose any file to load this game ;\n");
        for(x=1; x>0; x++)
        {
            printf(" 1-file 1 \n 2-file 2 \n 3-file 3 \n ");
            scanf("%s",string1);
            for(z=0; z<=10; z++)
            {
                if(string1[z]=='1')
                {
                    load_file=1;
                    load_1(player1_name,player2_name,matrex1,matrex2,& Size,  &Min, &total_t ,&i2);
                    break;
                }
                else if(string1[z]=='2')
                {
                    load_file=2;
                    load_2(player1_name,player2_name,matrex1,matrex2,& Size,  &Min, &total_t ,&i2);
                    break;
                }
                else if (string1[z]=='3')
                {
                    load_file=3;
                    load_3(player1_name,player2_name,matrex1,matrex2,& Size,  &Min, &total_t ,&i2);
                    break;
                }

                else if(z==10)
                {
                    system("cls");
                    printf("choose a correct number please :'D\n");

                }


            }
            if(z<11)
                break;

        }
    }



    if(menu ==1 || menu==3 || menu==5)
    {
        system("cls");
        if(menu==1)
        {
            for(x=1; x>0; x++)
            {
            gotoxy(20,10);
            printf("beginner or expert ?\n");
            gotoxy(20,11);
            printf("for beginner mode input 1 for expert mode input 2 \n");
                scanf("%s",string1);
                for(z=0; z<10; z++)
                {
                    if(string1[z]=='1')
                    {
                        Size=1;
                        break;
                    }
                    else if(string1[z]=='2')
                    {
                        Size=2;
                        break;
                    }
                }
                if(Size!=1&&Size!=2)
                {
                    system("cls");
                    printf("the answer must be 1 or 2 !\n");
                }
                else
                    break;
            }
            system("cls");

            for(x=1; x>0; x++)
            {
                gotoxy(20,10);
                printf("2 players or 1 player ? \n ");
                gotoxy(20,11);
                printf("for 1 player input 1 for 2 players input 2 \n");
                scanf("%s",string1);
                for(z=0; z<10; z++)
                {
                    if(string1[z]=='1')
                    {
                        mode=1;
                        break;
                    }
                    else if(string1[z]=='2')
                    {
                        mode=2;
                        break;
                    }
                }

                if(mode==2)
                {
                    system("cls");
                    gotoxy(20,10);
                    printf("please enter player2 name:\n");
                    gets(player2_name);
                    gets(player2_name);


                }
                if(mode!=1&&mode!=2)
                {
                    system("cls");
                    printf("the answer must be 1 or 2 !\n");
                }
                else
                    break;


            }

        }


        system("cls");
        if(mode==2||mode==1)
        {
            if(Size==1)
            {
                k=6;
                l=9;
                array_print(6,9,matrex1);
                menu_1=menu;
                for(i=i; i<=13; i=i+j-q )
                {

                    i2=i;
                    if(i==13)
                        last=1;
                    else
                        last=0;
                    q=j;
                    j++;
                    if(con==1)
                    {
                        for(x=1; x>0; x++)
                        {
                            system("cls");

                            gotoxy(35,13);
                            printf("1-continue");
                            gotoxy(35,14);
                            printf("2- leader board");
                            gotoxy(35,15);
                            printf("3-save");
                            gotoxy(35,16);
                            printf("4-exit\n");
                            con=0;
                            scanf("%s",string1);
                            for(z=0; z<100; z++)
                            {
                                if(string1[z]=='1')
                                {
                                    menu_1=1;
                                    load_4(player1_name,player2_name,matrex1,matrex2,& Size,  &Min, &total_t ,&i2);
                                    array_print(6,9,matrex1);
                                    break;
                                }
                                else if(string1[z]=='2')
                                {
                                    menu_1=2;
                                    break;
                                }
                                else if(string1[z]=='3')
                                {
                                    menu_1=3;
                                    system("cls");
                                    printf("Choose any file to save this game ;\n");
                                    for(x=1; x>0; x++)
                                    {
                                        printf(" 1-file 1 \n 2-file 2 \n 3-file 3\n ");
                                        scanf("%s",string1);
                                        for(z=0; z<=10; z++)
                                        {
                                            if(string1[z]=='1')
                                            {
                                                save_file=1;
                                                j=j-2;
                                                i--;
                                                save_1(player1_name,player2_name, matrex1, matrex2, &Size, &Min, &total_t ,&i2);
                                                return 0;
                                                break;
                                            }
                                            else if(string1[z]=='2')
                                            {
                                                save_file=2;
                                                j=j-2;
                                                i--;
                                                save_2(player1_name,player2_name, matrex1, matrex2, &Size, &Min, &total_t ,&i2);
                                                return 0;
                                                break;
                                            }
                                            else if (string1[z]=='3')
                                            {
                                                save_file=3;
                                                j=j-2;
                                                i--;
                                                save_3(player1_name,player2_name, matrex1, matrex2, &Size, &Min, &total_t ,&i2);
                                                return 0;
                                                break;
                                            }
                                            else if(z==10)
                                            {
                                                system("cls");
                                                printf("choose a correct number please :'D\n");
                                            }

                                        }
                                        if(z<11)
                                        {
                                            break;
                                        }

                                    }
                                    system("cls");
                                    array_print(6,9,matrex1);
                                    break;
                                }
                                else if (string1[z]=='4')
                                {
                                    return 0;
                                }
                                else if(z==11)
                                {
                                    printf("choose a correct number please :'D\n ");
                                    system("cls");
                                }
                            }
                            if(z<11)
                                break;
                        }
                    }
                    if(menu_1==2)
                    {
                        break;
                    }
                    calculate_turns();
                    gotoxy(76,11);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
                    printf("\tremaining lines =%d\n",13-i);
                    save_4(player1_name,player2_name, matrex1, matrex2, &Size, &Min, &total_t ,&i2);
                    print_time(&Min, &total_t);
                    turns(player1_name,player2_name,j,s1,s2);
                    start_t = clock();
                    scan_input(&row1,&row2,&col1,&col2,j,arr2,Size,6,9,matrex1);
                    end_t = clock();
                    total_time( j, &Min, &total_t, &start_t, &end_t);
                    system("cls");
                    swaping(&row1,&row2,&col1,&col2);
                    input(&row1,&row2,&col1,&col2,6,9,matrex1,&j);
                    score(&j,&q,&s1,&s2,6,9,matrex1,row1,col1,co);
                    array_print(6,9,matrex1);
                    remaining_lines(13,i+j-q);
                }
                if(i==14)
                {
                    winner(player1_name,player2_name,s1,s2);
                }



            }
            //end of bigenner mode

            else if(Size==2)
            {
                k=12;
                l=18;
                array_print(12,18,matrex2);
                for(i=i; i<=61; i=i+j-q)
                {

                    i2=i;
                    if(i==61)
                        last=1;
                    else
                        last=0;
                    q=j;
                    j++;
                    if(con==1)
                    {
                        for(x=1; x>0; x++)
                        {
                            system("cls");
                            gotoxy(30,10);
                            printf("1-continue");
                            gotoxy(30,11);
                            printf("2- leader board");
                            gotoxy(30,12);
                            printf("3-save");
                            gotoxy(30,13);
                            printf("4-exit\n");

                            con=0;
                            scanf("%s",string1);
                            for(z=0; z<100; z++)
                            {
                                if(string1[z]=='1')
                                {
                                    menu_1=1;
                                    load_4(player1_name,player2_name,matrex1,matrex2,& Size,  &Min, &total_t ,&i2);
                                    array_print(12,18,matrex2);
                                    break;
                                }
                                else if(string1[z]=='2')
                                {
                                    menu_1=2;
                                    break;
                                }
                                else if(string1[z]=='3')
                                {
                                    menu_1=3;
                                    system("cls");
                                    printf("Choose any file to save this game ;\n");
                                    for(x=1; x>0; x++)
                                    {
                                        printf(" 1-file 1 \n 2-file 2 \n 3-file 3\n ");
                                        scanf("%s",string1);
                                        for(z=0; z<=10; z++)
                                        {
                                            if(string1[z]=='1')
                                            {
                                                save_file=1;
                                                j=j-2;
                                                i--;
                                                save_1(player1_name,player2_name, matrex1, matrex2, &Size, &Min, &total_t ,&i2);
                                                return 0;
                                                break;
                                            }
                                            else if(string1[z]=='2')
                                            {
                                                save_file=2;
                                                j=j-2;
                                                i--;
                                                save_2(player1_name,player2_name, matrex1, matrex2, &Size, &Min, &total_t ,&i2);
                                                return 0;
                                                break;
                                            }
                                            else if (string1[z]=='3')
                                            {
                                                save_file=3;
                                                j=j-2;
                                                i--;
                                                save_3(player1_name,player2_name, matrex1, matrex2, &Size, &Min, &total_t ,&i2);
                                                return 0;
                                                break;
                                            }
                                            else if(z==10)
                                            {
                                                system("cls");
                                                printf("choose a correct number please :'D\n");
                                            }

                                        }
                                        if(z<11)
                                        {
                                            break;
                                        }

                                    }
                                    system("cls");
                                    array_print(12,18,matrex2);
                                    break;
                                }
                                else if (string1[z]=='4')
                                {
                                    return 0;
                                }
                                else if(z==11)
                                {
                                    printf("choose a correct number please :'D\n ");
                                    system("cls");
                                }
                            }
                            if(z<11)
                                break;
                        }
                    }
                    if(menu_1==2)
                    {
                        break;
                    }
                    calculate_turns();
                    gotoxy(76,11);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
                    printf("\tremaining lines =%d\n",61-i);
                    save_4(player1_name,player2_name, matrex1, matrex2, &Size, &Min, &total_t ,&i2);
                    print_time(&Min, &total_t);
                    turns(player1_name,player2_name,j,s1,s2);
                    start_t = clock();
                    scan_input(&row1,&row2,&col1,&col2,j,arr2,Size,12,18,matrex2);
                    end_t = clock();
                    total_time(j, &Min, &total_t, &start_t, &end_t);
                    swaping(&row1,&row2,&col1,&col2);
                    system("cls");
                    input(&row1,&row2,&col1,&col2,12,18,matrex2,&j);
                    score(&j,&q,&s1,&s2,12,18,matrex2,row1,col1,co);
                    array_print(12,18,matrex2);
                    remaining_lines(61,i+j-q);
                }
                if(i==62)
                {
                    winner(player1_name,player2_name,s1,s2);
                }
                //end of expert mood

            }
            if(i==62 || i==14)
            {
                if((player2_name[0] != 67 || player2_name[1] != 111 || player2_name[2] != 109 || player2_name[3] != 112 || player2_name[4] != 117 || player2_name[5] != 116 || player2_name[6] != 101 || player2_name[7] != 114 || player2_name[8] != '\0') || s1>s2)
                {
                    if(Size==1)
                    {
                        leader_board_2(player1_name,player2_name,s1,s2);
                    }

                    else
                    {
                        leader_board_5(player1_name,player2_name,s1,s2);
                    }
                }
            }


        }
    }
// load from menu.


    if(menu ==2 ||menu_1==2)
    {
        int xx;
        for(x=1; x>0; x++)
        {
            system("cls");
            printf("\n PRESS 2 TO DISPLAY LEADER BOARD 2 \n\n PRESS 5 TO DISPLAY LEADER BOARD 5\n");
            scanf("%s",string1);
            for(xx=0; xx<100; xx++)
            {
                if(string1[xx]=='2')
                {
                    display_leader_board_2();
                    break;
                }
                else if(string1[xx]=='5')
                {
                    display_leader_board_5();
                    break;
                }
            }
            if(xx==100)
            {
                printf("choose a correct number please :'D\n ");
            }
            else
            {
                break;
            }
        }

    }


    return 0;
}


