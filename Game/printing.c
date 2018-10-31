
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





void array_print(int k,int l,char a[k][l])
{
    int ii,jj;
    for(ii=0; ii<k; ii++)
    {
        gotoxy(30,10+ii);
        for(jj=0; jj<l; jj++)
        {
            lines_colors(ii,jj);
            box_lines_color(ii,jj);
            boxes_paint(ii,jj,k,l,a);

            printf("%c",a[ii][jj]);

        }
        printf("\n");

    }

    return;
}

void turns_array(int *a,int *c,int counter,int *index3,int all[3][100],const o)
{
    if(o==1)
    {
        if(counter%2!=1)
        {
            all[2][*index3]=100;
            all[2][*index3+1]=100;
        }
        if(counter%2==1)
        {
            all[2][*index3]=200;
            all[2][*index3+1]=200;
        }
        all[0][*index3]=*a;
        all[1][*index3]=*c;
        all[0][*index3+1]=*a;
        all[1][*index3+1]=*c+1;
        *index3=*index3+2;
    }
    if(o==2)
    {
        if(counter%2!=1)
        {
            all[2][*index3]=100;
        }
        if(counter%2==1)
        {
            all[2][*index3]=200;
        }
        all[0][*index3]=*a;
        all[1][*index3]=*c;
        *index3=*index3+1;
    }
}
void boxes_paint(int a,int c,const k,const l,char m[k][l])
{
    if(a!=0&&c!=0)
    {
        if(m[a][c]=='p')
        {
            if(m[a][c+1]=='1')
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),192);
            if(m[a][c+1]=='2')
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),144);
        }
        else if(m[a][c]=='1')
        {
            if(m[a][c-1]=='p')
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),192);
        }
        else if(m[a][c]=='2')
        {
            if(m[a][c-1]=='p')
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),144);
        }
    }
}
void lines_colors(int ii,int jj)
{
    int z;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
    for(z=0; z<100; z++)
    {
        if(all_turns[0][z]==ii)
        {
            if(all_turns[1][z]==jj)
            {
                if(all_turns[2][z]==100)
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
                    break;
                }
                else if(all_turns[2][z]==200)
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
                    break;
                }
            }
        }
    }
    return ;
}

void box_lines_array(int g,int n1,int n2,int k,int l)//n1,n2 awl 3mod fl morb3 ha
{
    boxes[n1][n2]=g;
    boxes[n1][n2+3]=g;
    boxes[n1-1][n2+1]=g;
    boxes[n1-1][n2+2]=g;
    boxes[n1+1][n2+1]=g;
    boxes[n1+1][n2+2]=g;
    if(n2!=l-1)//ymen
    {
        if(boxes[n1][n2+2]==10&&boxes[n1][n2+5]==20 ||boxes[n1][n2+2]==20&&boxes[n1][n2+5]==10)
        {
            boxes[n1][n2+3]=300;
        }
    }
    if(n2!=2)//4mal
    {
        if(boxes[n1][n2+2]==10&&boxes[n1][n2-1]==20 ||boxes[n1][n2+2]==20&&boxes[n1][n2-1]==10)
        {
            boxes[n1][n2]=300;
        }
    }
    if(n1!=k-1)//t7t
    {
        if(boxes[n1][n2+2]==10&&boxes[n1+2][n2+2]==20 ||boxes[n1][n2+2]==20&&boxes[n1+2][n2+2]==10)
        {
            boxes[n1+1][n2+1]=300;
            boxes[n1+1][n2+2]=300;
        }
    }
    if(n1!=1)//fo2
    {
        if(boxes[n1][n2+2]==10&&boxes[n1-2][n2+2]==20 ||boxes[n1][n2+2]==20&&boxes[n1-2][n2+2]==10)
        {
            boxes[n1-1][n2+1]=300;
            boxes[n1-1][n2+2]=300;
        }
    }


}
void box_lines_color(int e,int r)
{
    if(boxes[e][r]==100)
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
    if(boxes[e][r]==200)
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
    if(boxes[e][r]==300||boxes[e][r]==44)
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);

}

void print_time(long long *Min,long long *total_t)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
    gotoxy(60,9);
    printf("\t\t\tTotal time taken : %lld Min : %lld sec \n",*Min, *total_t  );


}


