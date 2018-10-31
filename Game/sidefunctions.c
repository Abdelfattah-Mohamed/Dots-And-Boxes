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



void swaping(int *a,int *b,int *c,int *d)
{
    if(*a>*b)
    {
        *a=*a+*b;
        *b=*a-*b;
        *a=*a-*b;
    }
    if(*c>*d)
    {
        *c=*c+*d;
        *d=*c-*d;
        *c=*c-*d;
    }
    return;
}
void turns(char a[],char b[],int counter,int n,int m)
{
    gotoxy(0,26);
    printf("the input");
    int g;
    char h=-70;
        for(g=1;g<120;g++)
    {
        gotoxy(g,0);
         if(g==75)
        printf("%c",203);
        else
        printf("%c",-51);
    }

        for(g=0;g<26;g++)
    {
        gotoxy(0,g);
        if(g==0)
            printf("%c",201);
        else
        printf("%c",h);
    }

    for(g=0;g<26;g++)
    {
        gotoxy(75,g);
        if(g==0)
            printf("%c",203);
        else
        printf("%c",h);
    }

    if(counter%2!=1)
    {gotoxy(80,6);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
        printf("it's %s's turn\t your score is %d \n",a,n);
        gotoxy(80,7);
        printf("%s's no of turns = %d\n",a,t1);
    }
    else
    {gotoxy(80,6);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
        printf("it's %s's turn\t your score is %d \n",b,m);
        gotoxy(80,7);
        printf("%s's no of turns = %d\n",b,t2);
    }
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
    gotoxy(100,1);
    printf("player 1\n");
    gotoxy(100,2);
    printf("%s\n",a);
    gotoxy(100,3);
    printf("%d\n",n);
    gotoxy(100,4);
    printf("%d\n",t1);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
    gotoxy(110,1);
    printf("player 2\n");
    gotoxy(110,2);
    printf("%s\n",b);
    gotoxy(110,3);
    printf("%d\n",m);
    gotoxy(110,4);
    printf("%d\n",t2);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
    gotoxy(85,2);
    printf("player name\n");
    gotoxy(85,3);
    printf("score\n");
    gotoxy(85,4);
    printf("turns\n");
    gotoxy(75,5);
    printf("%c",204);
        for(g=0;g<44;g++)
    {
        gotoxy(76+g,5);
        printf("%c",-51);
    }
    printf("\n");
    gotoxy(75,8);
    printf("%c",204);
        for(g=0;g<44;g++)
    {
        gotoxy(76+g,8);
        printf("%c",-51);
    }
    printf("\n");
    gotoxy(75,10);
    printf("%c",204);
        for(g=0;g<44;g++)
    {
        gotoxy(76+g,10);
        printf("%c",-51);
    }
        gotoxy(75,12);
    printf("%c",204);
        for(g=0;g<44;g++)
    {
        gotoxy(76+g,12);
        printf("%c",-51);
    }
    for(g=0;g<120;g++)
    {
        gotoxy(g,25);
        if(g==0)
            printf("%c",200);
        else if(g==75)
        printf("%c",202);
        else
        printf("%c",-51);
    }
for(g=0;g<26;g++)
    {
        gotoxy(119,g);
        if(g==0)
            printf("%c",187);
        else if(g==25)
            printf("%c",188);
        else if(g==12||g==10||g==8||g==5)
            printf("%c",185);
        else
        printf("%c",-70);
    }
gotoxy(76,13);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
printf("instructions!");
gotoxy(76,14);
printf("1-the input must be rowrowcolcol for the 2");
gotoxy(76,15);
printf("grids you want to connect .");
gotoxy(76,16);
printf("2-if you want to undo,redo or exit you have");
gotoxy(76,17);
printf("to input 0000 then r or u or e");
gotoxy(76,18);
printf("3-if you are in 1p mode you have to press");
gotoxy(76,19);
printf("u or r for computers turns too ");
gotoxy(76,20);
printf("4-if you want to exit ,save or shaw leader ");
gotoxy(76,21);
printf("board input 0000 then press e then choose ");
gotoxy(76,22);
printf("from the menu ");
gotoxy(76,22);
printf("5-after finishing the game there's extra  ");
gotoxy(76,23);
printf("move so that you could undo if you want to ");
gotoxy(76,24);
printf("end the game input 1112\n");
}
void score(int *counter,int *loop,int *s1,int *s2,int k,int l,char m[k][l],int a,int c,int co)
{
    if(*counter%2==h%2)
        w=0;
    if(*counter%2!=h&2)
        w=0;
    h=*counter;
    int lw=0;
    if(co==1)
    {
        if(m[a][c]==-51)
        {
            if(a!=k)
            {
                if(m[a+2][c]==-51&&m[a+1][c-1]==-70&&m[a+1][c+2]==-70)
                {
                    lw=1;
                    if(*counter%2!=1)
                    {
                        *s1=*s1+1;
                        m[a+1][c+1]='1';
                        boxes[a+1][c+1]=10;
                        box_lines_array(100,a+1,c-1,k,l);

                    }
                    else
                    {
                        *s2=*s2+1;
                        m[a+1][c+1]='2';
                        boxes[a+1][c+1]=20;
                        box_lines_array(200,a+1,c-1,k,l);
                    }
                    printf("\a");
                    m[a+1][c]='p';


                }
            }
            if(a!=1)
            {
                if(m[a-2][c]==-51&&m[a-1][c-1]==-70&&m[a-1][c+2]==-70)
                {
                    lw=1;
                    if(*counter%2!=1)
                    {
                        *s1=*s1+1;
                        m[a-1][c+1]='1';
                        boxes[a-1][c+1]=10;
                        box_lines_array(100,a-1,c-1,k,l);
                    }
                    else
                    {
                        *s2=*s2+1;
                        m[a-1][c+1]='2';
                        boxes[a-1][c+1]=20;
                        box_lines_array(200,a-1,c-1,k,l);
                    }
                    printf("\a");
                    m[a-1][c]='p';
                }
            }
        }
        if(m[a][c]==-70)
        {
            if(c!=l)
            {
                if(m[a-1][c+1]==-51&&m[a+1][c+1]==-51&&m[a][c+3]==-70)
                {
                    lw=1;
                    if(*counter%2!=1)
                    {
                        *s1=*s1+1;
                        m[a][c+2]='1';
                        boxes[a][c+2]=10;
                        box_lines_array(100,a,c,k,l);
                    }
                    else
                    {
                        *s2=*s2+1;
                        m[a][c+2]='2';
                        boxes[a][c+2]=20;
                        box_lines_array(200,a,c,k,l);
                    }
                    printf("\a");
                    m[a][c+1]='p';

                }

            }
            if(c!=2)
            {
                if(m[a-1][c-2]==-51&&m[a+1][c-2]==-51&&m[a][c-3]==-70)
                {
                    lw=1;
                    if(*counter%2!=1)
                    {
                        *s1=*s1+1;
                        m[a][c-1]='1';
                        boxes[a][c-1]=10;
                        box_lines_array(100,a,c-3,k,l);
                    }
                    else
                    {
                        *s2=*s2+1;
                        m[a][c-1]='2';
                        boxes[a][c-1]=20;
                        box_lines_array(200,a,c-3,k,l);
                    }
                    printf("\a");
                    m[a][c-2]='p';

                }

            }

        }
        if(lw==1)
        {
            w=1;
            *counter=*counter-1;
            *loop=*loop-1;
            //h7ot var hna yt8yar 34an a3rf ano ksb moraba3 w a7ot i4ara fe al array 34an fe re/un do ykon 3aref an l atnin dol wra b3d..
        }
    }
    return;
}
void winner(char p1[],char p2[],int a,int b)
{
    gotoxy(55,15);

    if(a>b)
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),252);
            printf("the winner is %s ",p1);
        }
    else if(b>a)
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),249);
            printf("the winner is %s",p2);
        }
    else
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
            printf("it's a draw");
        }
        printf(" \n\n\n\n\n\n\n\n\n\n\n\n ");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
    return;

}
void remaining_lines(const p,int ii)
{
    int r=p-ii;
    if(r<0)
        r=0;
    return;
}

void undos_clear()
{
    int g;
    for(g=0; g<=no_of_undos; g++)
    {
        all_turns[0][all_index+g]==0;
        all_turns[1][all_index+g]==0;
        all_turns[2][all_index+g]==0;
    }
}

void total_time(int j,long long *Min,long long *total_t,long long *start_t,long long *end_t)
{

    *total_t = *total_t+( (*end_t - *start_t) / CLOCKS_PER_SEC );
    *Min=*Min+(*total_t/60);
    *total_t=*total_t%60;



}

void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void calculate_turns()
{
    t1=0;
    t2=0;
    int g;
    for(g=0;g<all_index;g++)
    {
        if(all_turns[2][g]==100)
            t1++;
        if(all_turns[2][g]==200)
            t2++;
        if(all_turns[0][g]==all_turns[0][g+1])
        {
            if(all_turns[1][g]==all_turns[1][g+1]-1)
            {
                if(all_turns[2][g]==100)
                    t1--;
                if(all_turns[2][g]==200)
                    t2--;
            }
        }
    }
}





