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


void save_1(char player1_name[50],char player2_name[50],char matrex1[6][9],char matrex2[12][18],int* Size, long long *Min,long long *total_t ,int *i2)
{
    int ii,jj;
    FILE *fptr;
    fptr = fopen("save 1.txt","w");

    fprintf(fptr," %d", *Size );
    fprintf(fptr," %d", mode );
    fprintf(fptr," %d", i );
    fprintf(fptr," %d", j );
    fprintf(fptr," %lld", *Min );
    fprintf(fptr," %lld", *total_t );
    fprintf(fptr," %d ", all_index );
    fprintf(fptr," %d", q );
    fprintf(fptr," %d", co );
    fprintf(fptr," %d", a );
    fprintf(fptr," %d", c );
    fprintf(fptr," %d", s1 );
    fprintf(fptr," %d", s2 );
    fprintf(fptr," %d", t1 );
    fprintf(fptr," %d", t2 );
    fprintf(fptr," %d", w );
    fprintf(fptr," %d", last );
    fprintf(fptr," %d", no_of_undos );
    fprintf(fptr," %d", no_of_redos );
    fprintf(fptr," %d", row1 );
    fprintf(fptr," %d", col1 );
    fprintf(fptr," %d", con );
    fprintf(fptr," %d", *i2 );


    for(ii=0; ii<3; ii++)
    {
        for(jj=0 ; jj<100; jj++)
        {
            fputc(all_turns[ii][jj],fptr);
        }
    }

    for(ii=0; ii<4; ii++)
    {
        for(jj=0 ; jj<60; jj++)
        {
            fputc(arr2[ii][jj],fptr);
        }
    }

    for(ii=0; ii<12; ii++)
    {
        for(jj=0 ; jj<18; jj++)
        {
            fputc(boxes[ii][jj],fptr);
        }
    }

    for(ii=0; ii<6; ii++)
    {
        for(jj=0 ; jj<9; jj++)
        {
            fputc(matrex1[ii][jj],fptr);
        }

    }
    for(ii=0; ii<12; ii++)
    {
        for(jj=0 ; jj<18; jj++)
        {
            fputc(matrex2[ii][jj],fptr);
        }
    }

    for(jj=0 ; jj<50; jj++)
    {
        fputc(player1_name[jj],fptr);
    }

    for(jj=0 ; jj<50; jj++)
    {
        fputc(player2_name[jj],fptr);
    }


    fclose(fptr);
}
void save_2(char player1_name[50],char player2_name[50],char matrex1[6][9],char matrex2[12][18],int* Size, long long *Min,long long *total_t ,int *i2)
{
    int ii,jj;
    FILE *fptr;
    fptr = fopen("save 2.txt","w");

    fprintf(fptr," %d", *Size );
    fprintf(fptr," %d", mode );
    fprintf(fptr," %d", i );
    fprintf(fptr," %d", j );
    fprintf(fptr," %lld", *Min );
    fprintf(fptr," %lld", *total_t );
    fprintf(fptr," %d ", all_index );
    fprintf(fptr," %d", q );
    fprintf(fptr," %d", co );
    fprintf(fptr," %d", a );
    fprintf(fptr," %d", c );
    fprintf(fptr," %d", s1 );
    fprintf(fptr," %d", s2 );
    fprintf(fptr," %d", t1 );
    fprintf(fptr," %d", t2 );
    fprintf(fptr," %d", w );
    fprintf(fptr," %d", last );
    fprintf(fptr," %d", no_of_undos );
    fprintf(fptr," %d", no_of_redos );
    fprintf(fptr," %d", row1 );
    fprintf(fptr," %d", col1 );
    fprintf(fptr," %d", con );
    fprintf(fptr," %d", *i2 );


    for(ii=0; ii<3; ii++)
    {
        for(jj=0 ; jj<100; jj++)
        {
            fputc(all_turns[ii][jj],fptr);
        }
    }

    for(ii=0; ii<4; ii++)
    {
        for(jj=0 ; jj<60; jj++)
        {
            fputc(arr2[ii][jj],fptr);
        }
    }

    for(ii=0; ii<12; ii++)
    {
        for(jj=0 ; jj<18; jj++)
        {
            fputc(boxes[ii][jj],fptr);
        }
    }

    for(ii=0; ii<6; ii++)
    {
        for(jj=0 ; jj<9; jj++)
        {
            fputc(matrex1[ii][jj],fptr);
        }

    }
    for(ii=0; ii<12; ii++)
    {
        for(jj=0 ; jj<18; jj++)
        {
            fputc(matrex2[ii][jj],fptr);
        }
    }

    for(jj=0 ; jj<50; jj++)
    {
        fputc(player1_name[jj],fptr);
    }

    for(jj=0 ; jj<50; jj++)
    {
        fputc(player2_name[jj],fptr);
    }


    fclose(fptr);

}
void save_3(char player1_name[50],char player2_name[50],char matrex1[6][9],char matrex2[12][18],int* Size, long long *Min,long long *total_t ,int *i2)
{
    int ii,jj;
    FILE *fptr;
    fptr = fopen("save 3.txt","w");

    fprintf(fptr," %d", *Size );
    fprintf(fptr," %d", mode );
    fprintf(fptr," %d", i );
    fprintf(fptr," %d", j );
    fprintf(fptr," %lld", *Min );
    fprintf(fptr," %lld", *total_t );
    fprintf(fptr," %d ", all_index );
    fprintf(fptr," %d", q );
    fprintf(fptr," %d", co );
    fprintf(fptr," %d", a );
    fprintf(fptr," %d", c );
    fprintf(fptr," %d", s1 );
    fprintf(fptr," %d", s2 );
    fprintf(fptr," %d", t1 );
    fprintf(fptr," %d", t2 );
    fprintf(fptr," %d", w );
    fprintf(fptr," %d", last );
    fprintf(fptr," %d", no_of_undos );
    fprintf(fptr," %d", no_of_redos );
    fprintf(fptr," %d", row1 );
    fprintf(fptr," %d", col1 );
    fprintf(fptr," %d", con );
    fprintf(fptr," %d", *i2 );


    for(ii=0; ii<3; ii++)
    {
        for(jj=0 ; jj<100; jj++)
        {
            fputc(all_turns[ii][jj],fptr);
        }
    }

    for(ii=0; ii<4; ii++)
    {
        for(jj=0 ; jj<60; jj++)
        {
            fputc(arr2[ii][jj],fptr);
        }
    }

    for(ii=0; ii<12; ii++)
    {
        for(jj=0 ; jj<18; jj++)
        {
            fputc(boxes[ii][jj],fptr);
        }
    }

    for(ii=0; ii<6; ii++)
    {
        for(jj=0 ; jj<9; jj++)
        {
            fputc(matrex1[ii][jj],fptr);
        }

    }

    for(ii=0; ii<12; ii++)
    {
        for(jj=0 ; jj<18; jj++)
        {
            fputc(matrex2[ii][jj],fptr);
        }
    }

    for(jj=0 ; jj<50; jj++)
    {
        fputc(player1_name[jj],fptr);
    }

    for(jj=0 ; jj<50; jj++)
    {
        fputc(player2_name[jj],fptr);
    }


    fclose(fptr);


}
void save_4(char player1_name[50],char player2_name[50],char matrex1[6][9],char matrex2[12][18],int* Size, long long *Min,long long *total_t ,int *i2)
{
    int ii,jj;
    FILE *fptr;
    fptr = fopen("save 4.txt","w");

    fprintf(fptr," %d", *Size );
    fprintf(fptr," %d", mode );
    fprintf(fptr," %d", i );
    fprintf(fptr," %d", j );
    fprintf(fptr," %lld", *Min );
    fprintf(fptr," %lld", *total_t );
    fprintf(fptr," %d ", all_index );
    fprintf(fptr," %d", q );
    fprintf(fptr," %d", co );
    fprintf(fptr," %d", a );
    fprintf(fptr," %d", c );
    fprintf(fptr," %d", s1 );
    fprintf(fptr," %d", s2 );
    fprintf(fptr," %d", t1 );
    fprintf(fptr," %d", t2 );
    fprintf(fptr," %d", w );
    fprintf(fptr," %d", last );
    fprintf(fptr," %d", no_of_undos );
    fprintf(fptr," %d", no_of_redos );
    fprintf(fptr," %d", row1 );
    fprintf(fptr," %d", col1 );
    fprintf(fptr," %d", con );
    fprintf(fptr," %d", *i2 );


    for(ii=0; ii<3; ii++)
    {
        for(jj=0 ; jj<100; jj++)
        {
            fputc(all_turns[ii][jj],fptr);
        }
    }

    for(ii=0; ii<4; ii++)
    {
        for(jj=0 ; jj<60; jj++)
        {
            fputc(arr2[ii][jj],fptr);
        }
    }

    for(ii=0; ii<12; ii++)
    {
        for(jj=0 ; jj<18; jj++)
        {
            fputc(boxes[ii][jj],fptr);
        }
    }

    for(ii=0; ii<6; ii++)
    {
        for(jj=0 ; jj<9; jj++)
        {
            fputc(matrex1[ii][jj],fptr);
        }

    }

    for(ii=0; ii<12; ii++)
    {
        for(jj=0 ; jj<18; jj++)
        {
            fputc(matrex2[ii][jj],fptr);
        }
    }

    for(jj=0 ; jj<50; jj++)
    {
        fputc(player1_name[jj],fptr);
    }

    for(jj=0 ; jj<50; jj++)
    {
        fputc(player2_name[jj],fptr);
    }


    fclose(fptr);


}
void load_1(char player1_name[50],char player2_name[50],char matrex1[6][9] ,char matrex2[12][18],int* Size, long long *Min,long long *total_t ,int *i2)
{
    system("cls");
    int ii,jj;
    FILE *fptr;
    fptr = fopen("save 1.txt","r");

    fscanf(fptr," %d",& *Size );
    fscanf(fptr," %d",& mode );
    fscanf(fptr," %d",& i );
    fscanf(fptr," %d",& j );
    fscanf(fptr," %lld",& *Min );
    fscanf(fptr," %lld",& *total_t );
    fscanf(fptr," %d ",& all_index );
    fscanf(fptr," %d",& q );
    fscanf(fptr," %d",& co );
    fscanf(fptr," %d",& a );
    fscanf(fptr," %d",& c );
    fscanf(fptr," %d",& s1 );
    fscanf(fptr," %d",& s2 );
    fscanf(fptr," %d",& t1 );
    fscanf(fptr," %d",& t2 );
    fscanf(fptr," %d",& w );
    fscanf(fptr," %d",& last );
    fscanf(fptr," %d",& no_of_undos );
    fscanf(fptr," %d",& no_of_redos );
    fscanf(fptr," %d",& row1 );
    fscanf(fptr," %d",& col1 );
    fscanf(fptr," %d",& con );
    fscanf(fptr," %d",& *i2 );

    for(ii=0; ii<3; ii++)
    {
        for(jj=0 ; jj<100; jj++)
        {
            all_turns[ii][jj] = fgetc(fptr);
        }
    }

    for(ii=0; ii<4; ii++)
    {
        for(jj=0 ; jj<60; jj++)
        {
            arr2[ii][jj] = fgetc(fptr);
        }
    }

    for(ii=0; ii<12; ii++)
    {
        for(jj=0 ; jj<18; jj++)
        {
            boxes[ii][jj] = fgetc(fptr);
        }
    }

    for(ii=0; ii<6; ii++)
    {
        for(jj=0 ; jj<9; jj++)
        {
            matrex1[ii][jj] = fgetc(fptr);
        }
    }

    for(ii=0; ii<12; ii++)
    {
        for(jj=0 ; jj<18; jj++)
        {
            matrex2[ii][jj] = fgetc(fptr);
        }
    }

    for(jj=0 ; jj<50; jj++)
    {
            player1_name[jj] = fgetc(fptr);
    }

    for(jj=0 ; jj<50; jj++)
    {
        player2_name[jj] = fgetc(fptr);
    }

    fclose(fptr);

}
void load_2(char player1_name[50],char player2_name[50],char matrex1[6][9] ,char matrex2[12][18],int* Size, long long *Min,long long *total_t ,int *i2)
{
    system("cls");
    int ii,jj;
    FILE *fptr;
    fptr = fopen("save 2.txt","r");

    fscanf(fptr," %d",& *Size );
    fscanf(fptr," %d",& mode );
    fscanf(fptr," %d",& i );
    fscanf(fptr," %d",& j );
    fscanf(fptr," %lld",& *Min );
    fscanf(fptr," %lld",& *total_t );
    fscanf(fptr," %d ",& all_index );
    fscanf(fptr," %d",& q );
    fscanf(fptr," %d",& co );
    fscanf(fptr," %d",& a );
    fscanf(fptr," %d",& c );
    fscanf(fptr," %d",& s1 );
    fscanf(fptr," %d",& s2 );
    fscanf(fptr," %d",& t1 );
    fscanf(fptr," %d",& t2 );
    fscanf(fptr," %d",& w );
    fscanf(fptr," %d",& last );
    fscanf(fptr," %d",& no_of_undos );
    fscanf(fptr," %d",& no_of_redos );
    fscanf(fptr," %d",& row1 );
    fscanf(fptr," %d",& col1 );
    fscanf(fptr," %d",& con );
    fscanf(fptr," %d",& *i2 );

    for(ii=0; ii<3; ii++)
    {
        for(jj=0 ; jj<100; jj++)
        {
            all_turns[ii][jj] = fgetc(fptr);
        }
    }

    for(ii=0; ii<4; ii++)
    {
        for(jj=0 ; jj<60; jj++)
        {
            arr2[ii][jj] = fgetc(fptr);
        }
    }

    for(ii=0; ii<12; ii++)
    {
        for(jj=0 ; jj<18; jj++)
        {
            boxes[ii][jj] = fgetc(fptr);
        }
    }

    for(ii=0; ii<6; ii++)
    {
        for(jj=0 ; jj<9; jj++)
        {
            matrex1[ii][jj] = fgetc(fptr);
        }
    }

    for(ii=0; ii<12; ii++)
    {
        for(jj=0 ; jj<18; jj++)
        {
            matrex2[ii][jj] = fgetc(fptr);
        }
    }

    for(jj=0 ; jj<50; jj++)
    {
            player1_name[jj] = fgetc(fptr);
    }

    for(jj=0 ; jj<50; jj++)
    {
        player2_name[jj] = fgetc(fptr);
    }

    fclose(fptr);

}
void load_3(char player1_name[50],char player2_name[50],char matrex1[6][9] ,char matrex2[12][18],int* Size, long long *Min,long long *total_t ,int *i2)
{
    system("cls");
    int ii,jj;
    FILE *fptr;
    fptr = fopen("save 3.txt","r");

    fscanf(fptr," %d",& *Size );
    fscanf(fptr," %d",& mode );
    fscanf(fptr," %d",& i );
    fscanf(fptr," %d",& j );
    fscanf(fptr," %lld",& *Min );
    fscanf(fptr," %lld",& *total_t );
    fscanf(fptr," %d ",& all_index );
    fscanf(fptr," %d",& q );
    fscanf(fptr," %d",& co );
    fscanf(fptr," %d",& a );
    fscanf(fptr," %d",& c );
    fscanf(fptr," %d",& s1 );
    fscanf(fptr," %d",& s2 );
    fscanf(fptr," %d",& t1 );
    fscanf(fptr," %d",& t2 );
    fscanf(fptr," %d",& w );
    fscanf(fptr," %d",& last );
    fscanf(fptr," %d",& no_of_undos );
    fscanf(fptr," %d",& no_of_redos );
    fscanf(fptr," %d",& row1 );
    fscanf(fptr," %d",& col1 );
    fscanf(fptr," %d",& con );
    fscanf(fptr," %d",& *i2 );

    for(ii=0; ii<3; ii++)
    {
        for(jj=0 ; jj<100; jj++)
        {
            all_turns[ii][jj] = fgetc(fptr);
        }
    }

    for(ii=0; ii<4; ii++)
    {
        for(jj=0 ; jj<60; jj++)
        {
            arr2[ii][jj] = fgetc(fptr);
        }
    }

    for(ii=0; ii<12; ii++)
    {
        for(jj=0 ; jj<18; jj++)
        {
            boxes[ii][jj] = fgetc(fptr);
        }
    }


    for(ii=0; ii<6; ii++)
    {
        for(jj=0 ; jj<9; jj++)
        {
            matrex1[ii][jj] = fgetc(fptr);
        }
    }

    for(ii=0; ii<12; ii++)
    {
        for(jj=0 ; jj<18; jj++)
        {
            matrex2[ii][jj] = fgetc(fptr);
        }
    }
    for(jj=0 ; jj<50; jj++)
    {
            player1_name[jj] = fgetc(fptr);
    }

    for(jj=0 ; jj<50; jj++)
    {
        player2_name[jj] = fgetc(fptr);
    }

    fclose(fptr);

}
void load_4(char player1_name[50],char player2_name[50],char matrex1[6][9] ,char matrex2[12][18],int* Size, long long *Min,long long *total_t ,int *i2)
{
    system("cls");
    int ii,jj;
    FILE *fptr;
    fptr = fopen("save 4.txt","r");

    fscanf(fptr," %d",& *Size );
    fscanf(fptr," %d",& mode );
    fscanf(fptr," %d",& i );
    fscanf(fptr," %d",& j );
    fscanf(fptr," %lld",& *Min );
    fscanf(fptr," %lld",& *total_t );
    fscanf(fptr," %d ",& all_index );
    fscanf(fptr," %d",& q );
    fscanf(fptr," %d",& co );
    fscanf(fptr," %d",& a );
    fscanf(fptr," %d",& c );
    fscanf(fptr," %d",& s1 );
    fscanf(fptr," %d",& s2 );
    fscanf(fptr," %d",& t1 );
    fscanf(fptr," %d",& t2 );
    fscanf(fptr," %d",& w );
    fscanf(fptr," %d",& last );
    fscanf(fptr," %d",& no_of_undos );
    fscanf(fptr," %d",& no_of_redos );
    fscanf(fptr," %d",& row1 );
    fscanf(fptr," %d",& col1 );
    fscanf(fptr," %d",& con );
    fscanf(fptr," %d",& *i2 );

    for(ii=0; ii<3; ii++)
    {
        for(jj=0 ; jj<100; jj++)
        {
            all_turns[ii][jj] = fgetc(fptr);
        }
    }

    for(ii=0; ii<4; ii++)
    {
        for(jj=0 ; jj<60; jj++)
        {
            arr2[ii][jj] = fgetc(fptr);
        }
    }

    for(ii=0; ii<12; ii++)
    {
        for(jj=0 ; jj<18; jj++)
        {
            boxes[ii][jj] = fgetc(fptr);
        }
    }


    for(ii=0; ii<6; ii++)
    {
        for(jj=0 ; jj<9; jj++)
        {
            matrex1[ii][jj] = fgetc(fptr);
        }
    }

    for(ii=0; ii<12; ii++)
    {
        for(jj=0 ; jj<18; jj++)
        {
            matrex2[ii][jj] = fgetc(fptr);
        }
    }
    for(jj=0 ; jj<50; jj++)
    {
            player1_name[jj] = fgetc(fptr);
    }

    for(jj=0 ; jj<50; jj++)
    {
        player2_name[jj] = fgetc(fptr);
    }

    fclose(fptr);

}
