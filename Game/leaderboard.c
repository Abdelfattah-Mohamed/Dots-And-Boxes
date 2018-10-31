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



void leader_board_2(char p1[],char p2[],int a,int b)
{
    int ii,jj;
    char swap[50];
    FILE *fptr;
    if(a>b)
    {
        p[10].score=a;
        for(jj=0; jj<50; jj++)
        {
            p[10].name[jj]=p1[jj];
        }

    }
    else
    {
        p[10].score=b;
        for(jj=0; jj<50; jj++)
        {
            p[10].name[jj]=p2[jj];
        }

    }

    fptr = fopen("leader board 2.txt","r");

    for(ii=0; ii<10; ii++)
    {
        fscanf(fptr," %s \t %d \n", p[ii].name, &p[ii].score);
    }

    for(ii=10; ii>0; ii--)
    {
        if(p[ii].score > p[ii-1].score)
        {
            p[11].score=p[ii-1].score;
            p[ii-1].score=p[ii].score;
            p[ii].score=p[11].score;

            for(jj=0; jj<50; jj++)
            {
                p[11].name[jj]=p[i-1].name[jj];
                p[ii-1].name[jj]=p[ii].name[jj];
                p[ii].name[jj]=p[11].name[jj];
            }
        }
        else
        {
            break;
        }
    }

    fclose(fptr);

    fptr = fopen("leader board 2.txt","w");

    for(ii=0; ii<10; ii++)
    {
        fprintf(fptr," %s \t %d \n", p[ii].name, p[ii].score);
    }

    fclose(fptr);


}
void leader_board_5(char p1[],char p2[],int a,int b)
{
    int ii,jj;
    char swap[50];
    FILE *fptr;
    if(a>b)
    {
        p[10].score=a;
        for(jj=0; jj<50; jj++)
        {
            p[10].name[jj]=p1[jj];
        }

    }
    else
    {
        p[10].score=b;
        for(jj=0; jj<50; jj++)
        {
            p[10].name[jj]=p2[jj];
        }

    }

    fptr = fopen("leader board 5.txt","r");

    for(ii=0; ii<10; ii++)
    {
        fscanf(fptr," %s \t %d \n", p[i].name, &p[ii].score);
    }

    for(ii=10; ii>0; ii--)
    {
        if(p[ii].score > p[ii-1].score)
        {
            p[11].score=p[ii-1].score;
            p[ii-1].score=p[ii].score;
            p[ii].score=p[11].score;

            for(jj=0; jj<50; jj++)
            {
                p[11].name[jj]=p[ii-1].name[jj];
                p[ii-1].name[j]=p[ii].name[jj];
                p[ii].name[jj]=p[11].name[jj];
            }
        }
        else
        {
            break;
        }
    }

    fclose(fptr);

    fptr = fopen("leader board 5.txt","w");

    for(ii=0; ii<10; ii++)
    {
        fprintf(fptr," %s \t %d \n", p[ii].name, p[ii].score);
    }

    fclose(fptr);


}
void display_leader_board_2()
{
    int ii;
    FILE *fptr;

    fptr = fopen("leader board 2.txt","r");
    for(ii=0; ii<10; ii++)
    {
        fscanf(fptr," %s \t %d \n", p[ii].name, &p[ii].score);
    }
    fclose(fptr);

    for(ii=0; ii<10; ii++)
    {
        printf(" %s \t %d \n", p[ii].name, p[ii].score);
    }

}
void display_leader_board_5()
{
    int ii;
    FILE *fptr;

    fptr = fopen("leader board 5.txt","r");
    for(ii=0; ii<10; ii++)
    {
        fscanf(fptr," %s \t %d \n", p[ii].name, &p[ii].score);
    }
    fclose(fptr);

    for(ii=0; ii<10; ii++)
    {
        printf(" %s \t %d \n", p[ii].name, p[ii].score);
    }

}
