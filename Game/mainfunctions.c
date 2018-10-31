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

COORD coord ={0,0};


char string1[100]= {'a'};
int all_turns[3][100],boxes[12][18];
int all_index=0,j=-1,q,co,a,c,i=1,s1=0,s2=0,t1=0,t2=0,w,last,no_of_undos=0,no_of_redos=0,h=0,row1,col1,con=0;
int arr2[4][60];
int mode;


void input(int *a,int *b,int *c,int *d,int k,int l,char m[k][l],int *counter)
{
    if(*a==0&&*b==0&&*c==0&&*d==0)
    {
        undo(all_turns,&all_index,&j,k,l,m);
    }
    else
    {
        if(*a==0||*b==0||*c==0||*d==0)
        {
            gotoxy(0,27);
            printf("wrong input\n");
            *counter=*counter -1;
        }
        else if(*a!=*b&&*c!=*d)
        {
            gotoxy(0,27);
            printf("lines must be horizontal or vertical and choose one line only :,D  \n");
            *counter=*counter -1;
        }
        else if(*b-*a!=1&&*d-*c!=1)
        {
            gotoxy(0,27);
            printf("you must connect two successive grids :,D ,please try again.\n");
            *counter=*counter -1;
        }
        else if(*a>k/2||*b>k/2||*c>l/3||*d>l/3)
        {
            gotoxy(0,27);
            printf("the grid doesn't exist , please try again.\n");
            *counter=*counter -1;
        }
        else if(last!=1)
        {
            co=0;
            undos_clear;
            no_of_redos=0;
            no_of_undos=0;
            if(*a==*b)
            {
                *c=*c*3;
                *d=*c+1;
                *a=*a*2-1;
                if(m[*a][*c]==-51)
                {
                    gotoxy(0,27);
                    printf("this line is already taken ,try again :,D\n");
                    *counter=*counter -1;
                }
                else
                {
                    turns_array(a,c,j,&all_index,all_turns,1);
                    co=1;
                    m[*a][*c]=205;
                    m[*a][*d]=205;
                    system("cls");

                }
            }
            if(*c==*d)
            {
                *c=*c*3-1;
                *a=*a*2;
                if(m[*a][*c]==-70)
                {
                    gotoxy(0,27);
                    printf("this line is already taken ,try again :,D\n");
                    *counter=*counter -1;
                }
                else
                {
                    turns_array(a,c,j,&all_index,all_turns,2);
                    co=1;
                    m[*a][*c]=186;
                    system("cls");
                }
            }
        }
    }
    return;

}

void scan_input(int *a,int *b,int *c,int *d,int j,int arr2[4][60],int Size,int s,int v,char matrex[s][v])
{
    int z,p;
    int e;
    int as;

    srand(time(NULL));
    int l=0,k=0;
    int flag=1,m;
    int n=i-1;
    if(mode==2)//2 players
    {

        for(p=1; p>0; p++)
        {
gotoxy(10,26);
            scanf("%s",string1);

            for(z=0; z<50; z++)
            {
                if(isdigit(string1[z]))
                {
                    arr2[l][n]=string1[z]-48;
                    break;
                }
            }
            for(z=z+1; z<50; z++)
            {
                if(isdigit(string1[z]))
                {
                    arr2[l+1][n]=string1[z]-48;
                    break;
                }
            }
            for(z=z+1; z<50; z++)
            {
                if(isdigit(string1[z]))
                {
                    arr2[l+2][n]=string1[z]-48;
                    break;
                }
            }
            for(z=z+1; z<50; z++)
            {
                if(isdigit(string1[z]))
                {
                    arr2[l+3][n]=string1[z]-48;
                    break;
                }
            }
            if(z>50)
                {
                    gotoxy(0,27);
                    printf("the input must be integers ,row row col col ,please try again :'D\n");
                }
            else
                break;
        }

        *a=arr2[l][n];
        *b=arr2[l+1][n];
        *c=arr2[l+2][n];
        *d=arr2[l+3][n];



    }
    else//mode =1
    {
        int flag123;
        flag123=0;
        if(j%2==1)//dor l com
        {
                                if(no_of_undos!=0)
                    {
                        arr2[l][n]=arr2[l+1][n]=arr2[l+2][n]=arr2[l+3][n]=0;
                    }
            else
            {
                for(e=0 ; e<s; e++)
            {

                for(as=0 ; as<v; as++)
                {
                    if(matrex[e][as]==-1)
                    {
                        if(e!=s-1)
                        {
                            if(matrex[e+2][as]==-51&&matrex[e+1][as-1]==-70&&matrex[e+1][as+2]==-70)
                            {
                                //5ly el input hna e,e,r-1.r+2
                                arr2[l][n]=(e+1)/2;
                                arr2[l+1][n]=(e+1)/2;
                                arr2[l+2][n]=(as-1+1)/3;
                                arr2[l+3][n]=(as+2+1)/3;
                                *a=arr2[l][n];
                                *b=arr2[l+1][n];
                                *c=arr2[l+2][n];
                                *d=arr2[l+3][n];
                                flag123=1;
                                break;
                            }
                        }
                        if(e!=1)
                        {
                            if(matrex[e-2][as]==-51&&matrex[e-1][as-1]==-70&&matrex[e-1][as+2]==-70)
                            {
                                //5ly el input hna e,e,r-1,r+2
                                arr2[l][n]=(e+1)/2;
                                arr2[l+1][n]=(e+1)/2;
                                arr2[l+2][n]=(as-1+1)/3;
                                arr2[l+3][n]=(as+2+1)/3;
                                *a=arr2[l][n];
                                *b=arr2[l+1][n];
                                *c=arr2[l+2][n];
                                *d=arr2[l+3][n];
                                flag123=1;
                                break;
                            }
                        }
                        if(as!=v-1)
                        {
                            if(matrex[e-1][as+1]==-51&&matrex[e+1][as+1]==-51&&matrex[e][as+3]==-70)
                            {
                                //5ly el input hna e-1,e+1,r,r
                                arr2[l][n]=(e-1+1)/2;
                                arr2[l+1][n]=(e+1+1)/2;
                                arr2[l+2][n]=(as+1)/3;
                                arr2[l+3][n]=(as+1)/3;
                                *a=arr2[l][n];
                                *b=arr2[l+1][n];
                                *c=arr2[l+2][n];
                                *d=arr2[l+3][n];
                                flag123=1;
                                break;
                            }
                        }
                        if(as!=2)
                        {
                            if(matrex[e-1][as-2]==-51&&matrex[e+1][as-2]==-51&&matrex[e][as-3]==-70)
                            {
                                //5ly el input hna e-1,e+1,r,r
                                arr2[l][n]=(e-1+1)/2;
                                arr2[l+1][n]=(e+1+1)/2;
                                arr2[l+2][n]=(as+1)/3;
                                arr2[l+3][n]=(as+1)/3;
                                *a=arr2[l][n];
                                *b=arr2[l+1][n];
                                *c=arr2[l+2][n];
                                *d=arr2[l+3][n];
                                flag123=1;
                                break;
                            }
                        }

                    }

                }
                if(flag123==1)
                    break;
            }
        }
        }
        if(last==1 &&j%2==1)
        {
            //5ly el input hna 1,1,1,2
            arr2[l][n]=1;
            arr2[l+1][n]=1;
            arr2[l+2][n]=1;
            arr2[l+3][n]=2;
            *a=arr2[l][n];
            *b=arr2[l+1][n];
            *c=arr2[l+2][n];
            *d=arr2[l+3][n];

        }
        if(flag123==0)
        {
            if(Size==1)
            {
                if(j%2==0)
                {

                    for(p=1; p>0; p++)
                    {
                        gotoxy(10,26);
                        scanf("%s",string1);
                        for(z=0; z<50; z++)
                        {
                            if(isdigit(string1[z]))
                            {
                                arr2[l][n]=string1[z]-48;
                                break;
                            }
                        }
                        for(z=z+1; z<50; z++)
                        {
                            if(isdigit(string1[z]))
                            {
                                arr2[l+1][n]=string1[z]-48;
                                break;
                            }
                        }
                        for(z=z+1; z<50; z++)
                        {
                            if(isdigit(string1[z]))
                            {
                                arr2[l+2][n]=string1[z]-48;
                                break;
                            }
                        }
                        for(z=z+1; z<50; z++)
                        {
                            if(isdigit(string1[z]))
                            {
                                arr2[l+3][n]=string1[z]-48;
                                break;
                            }
                        }
                        if(z>50)
                            {
                                gotoxy(0,27);
                                printf("the input must be integers ,row row col col ,please try again :'D\n");
                            }
                        else
                            break;
                    }

                }
                else
                {

                    if(no_of_undos!=0)
                    {
                        arr2[l][n]=arr2[l+1][n]=arr2[l+2][n]=arr2[l+3][n]=0;
                    }

                    else
                    {
                        for(m=0; flag==1; )
                        {
                            flag=0;
                            arr2[l][n] = rand()%3;
                            if(arr2[l][n]==0)
                            {
                                arr2[l+1][n] = rand()%1+0;
                            }
                            else if(arr2[l][n]==1)
                            {
                                arr2[l+1][n]= rand()%2+0;
                            }
                            else if(arr2[l][n]==2)
                            {
                                arr2[l+1][n]= rand()%2+1;
                            }

                            arr2[l+2][n] = rand()%3;
                            if(arr2[l][n]==arr2[l+1][n])
                            {

                                if(arr2[l+2][n]==0)
                                {
                                    arr2[l+3][n] = 1;
                                }
                                else if(arr2[l+2][n]==1)
                                {
                                    arr2[l+3][n] = rand()%2;
                                    if(arr2[l+3][n]==1)
                                    {
                                        arr2[l+3][n]=2;
                                    }
                                }
                                else if(arr2[l+2][n]==2)
                                {
                                    arr2[l+3][n] = 1;
                                }
                            }
                            else
                            {
                                arr2[l+3][n] = arr2[l+2][n];
                            }
                            arr2[l][n]++;
                            arr2[l+1][n]++;
                            arr2[l+2][n]++;
                            arr2[l+3][n]++;

                            if(arr2[l][n]>arr2[l+1][n])
                            {
                                arr2[l][n] = arr2[l][n] ^ arr2[l+1][n];
                                arr2[l+1][n] = arr2[l][n] ^ arr2[l+1][n];
                                arr2[l][n] = arr2[l][n] ^ arr2[l+1][n];
                            }
                            if(arr2[l+2][n]>arr2[l+3][n])
                            {
                                arr2[l+2][n] = arr2[l+2][n] ^ arr2[l+3][n];
                                arr2[l+3][n] = arr2[l+2][n] ^ arr2[l+3][n];
                                arr2[l+2][n] = arr2[l+2][n] ^ arr2[l+3][n];
                            }
                            if(k!=n)
                            {
                                k=0;
                                for(k=0; k<n; k++)
                                {
                                    if(arr2[l][n]==arr2[l][k])
                                    {
                                        if(arr2[l+1][n]==arr2[l+1][k])
                                        {
                                            if(arr2[l+2][n]==arr2[l+2][k])
                                            {
                                                if(arr2[l+3][n]==arr2[l+3][k])
                                                {
                                                    flag=1;
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }

                }
                *a=arr2[l][n];
                *b=arr2[l+1][n];
                *c=arr2[l+2][n];
                *d=arr2[l+3][n];

            }
            else
            {
                if(j%2==0)
                {
                    for(p=1; p>0; p++)
                    {
                        gotoxy(10,26);

                        scanf("%s",string1);
                        for(z=0; z<50; z++)
                        {
                            if(isdigit(string1[z]))
                            {
                                arr2[l][n]=string1[z]-48;
                                break;
                            }
                        }
                        for(z=z+1; z<50; z++)
                        {
                            if(isdigit(string1[z]))
                            {
                                arr2[l+1][n]=string1[z]-48;
                                break;
                            }
                        }
                        for(z=z+1; z<50; z++)
                        {
                            if(isdigit(string1[z]))
                            {
                                arr2[l+2][n]=string1[z]-48;
                                break;
                            }
                        }
                        for(z=z+1; z<50; z++)
                        {
                            if(isdigit(string1[z]))
                            {
                                arr2[l+3][n]=string1[z]-48;
                                break;
                            }
                        }
                        if(z>50)
                            {
                                gotoxy(0,27);
                                printf("the input must be integers ,row row col col ,please try again :'D\n");
                            }
                        else
                            break;
                    }
                }

                else
                {
                    if(no_of_undos!=0)
                    {
                        arr2[l][n]=arr2[l+1][n]=arr2[l+2][n]=arr2[l+3][n]=0;
                    }

                    else
                    {


                        for(; flag==1; )
                        {

                            flag=0;
                            arr2[l][n] = rand()%6;
                            if(arr2[l][n]==0)
                            {
                                arr2[l+1][n] = rand()%2;
                            }
                            else if(arr2[l][n]==1)
                            {
                                arr2[l+1][n] = rand()%3;
                            }
                            else if(arr2[l][n]==2)
                            {
                                arr2[l+1][n] = rand()%3+1;
                            }
                            else if(arr2[l][n]==3)
                            {
                                arr2[l+1][n] = rand()%3+2;
                            }
                            else if(arr2[l][n]==4)
                            {
                                arr2[l+1][n] = rand()%3+3;
                            }
                            else if(arr2[l][n]==5)
                            {
                                arr2[l+1][n] = rand()%2+4;
                            }


                            arr2[l+2][n] = rand()%6;
                            if(arr2[l][n]==arr2[l+1][n])
                            {

                                if(arr2[l+2][n]==0)
                                {
                                    arr2[l+3][n] = 1;
                                }
                                else if(arr2[l+2][n]==1)
                                {
                                    arr2[l+3][n] = rand()%2;
                                    if(arr2[l+3][n]==1)
                                    {
                                        arr2[l+3][n]=2;
                                    }
                                }
                                else if(arr2[l+2][n]==2)
                                {
                                    arr2[l+3][n] = rand()%2;
                                    if(arr2[l+3][n]==0)
                                    {
                                        arr2[l+3][n]=3;
                                    }
                                }
                                else if(arr2[l+2][n]==3)
                                {
                                    arr2[l+3][n] = rand()%2;
                                    if(arr2[l+3][n]==0)
                                    {
                                        arr2[l+3][n]=2;
                                    }
                                    else if(arr2[l+3][n]==1)
                                    {
                                        arr2[l+3][n]=4;
                                    }

                                }
                                else if(arr2[l+2][n]==4)
                                {
                                    arr2[l+3][n] = rand()%2;
                                    if(arr2[l+3][n]==0)
                                    {
                                        arr2[l+3][n]=3;
                                    }
                                    else if(arr2[l+3][n]==1)
                                    {
                                        arr2[l+3][n]=5;
                                    }
                                }
                                else if(arr2[l+2][n]==5)
                                {
                                    arr2[l+3][n] = 4;
                                }
                            }

                            else
                            {
                                arr2[l+3][n] = arr2[l+2][n];
                            }

                            arr2[l][n]++;
                            arr2[l+1][n]++;
                            arr2[l+2][n]++;
                            arr2[l+3][n]++;

                            if(arr2[l][n]>arr2[l+1][n])
                            {
                                arr2[l][n] = arr2[l][n] ^ arr2[l+1][n];
                                arr2[l+1][n] = arr2[l][n] ^ arr2[l+1][n];
                                arr2[l][n] = arr2[l][n] ^ arr2[l+1][n];
                            }
                            if(arr2[l+2][n]>arr2[l+3][n])
                            {
                                arr2[l+2][n] = arr2[l+2][n] ^ arr2[l+3][n];
                                arr2[l+3][n] = arr2[l+2][n] ^ arr2[l+3][n];
                                arr2[l+2][n] = arr2[l+2][n] ^ arr2[l+3][n];
                            }
                            if(k!=n)
                            {
                                k=0;
                                for(k=0; k<n; k++)
                                {
                                    if(arr2[l][n]==arr2[l][k])
                                    {
                                        if(arr2[l+1][n]==arr2[l+1][k])
                                        {
                                            if(arr2[l+2][n]==arr2[l+2][k])
                                            {
                                                if(arr2[l+3][n]==arr2[l+3][k])
                                                {
                                                    flag=1;
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                    }
                }
                *a=arr2[l][n];
                *b=arr2[l+1][n];
                *c=arr2[l+2][n];
                *d=arr2[l+3][n];

            }



        }
    }
    return;
}

void undo(int all_turns[3][100],int *all_index,int *counter,int k,int l,char m[k][l])
{
    int b,d;
    char n[10];
    if(i<=1&&no_of_undos==0)
    {
        gotoxy(0,27);
        printf("you can't do any  undo or redo:'D\n");
        *counter=*counter-1;
    }
    else
    {
        printf("Do you want to undo/redo or exit ?!");
        printf("for redo press (r) and for undo press(u) to go back to the menu press (e) \n");
        gets(n);
        if(mode!=1||mode==1&&*counter%2==0)
            gets(n);
        system("cls");
        if(n[0]=='u')
        {
            if(i<=1)
            {
                gotoxy(0,27);
                printf("you can't do any more undo :'D\n");
                *counter=*counter-1;
            }
            else
            {

                no_of_undos++;

                q=q+2;
                *all_index=*all_index-1;
                //lw 2ofqy
                if(all_turns[0][*all_index]==all_turns[0][*all_index-1]&&all_turns[1][*all_index]==all_turns[1][*all_index-1]+1)
                {

                    b=all_turns[0][*all_index];
                    d=all_turns[1][*all_index];
                    *all_index=*all_index-1;
                    m[b][d]=255;
                    m[b][d-1]=255;
                    if(all_turns[2][*all_index]==all_turns[2][*all_index+2]||w==1)
                    {
                        *counter=*counter+1;
                        q=q+1;
                    }
                    if(b!=k-1)
                    {
                        if(m[b+1][d]=='1')
                        {
                            s1--;
                            m[b+1][d-1]=255;
                            m[b+1][d]=255;
                        }
                        if(m[b+1][d]=='2')
                        {
                            s2--;
                            m[b+1][d-1]=255;
                            m[b+1][d]=255;
                        }
                        boxes[b+2][d]==0;
                        boxes[b+2][d-1]==0;
                        boxes[b+1][d]==0;
                        boxes[b+1][d+1]==0;
                        boxes[b+1][d-2]==0;
                    }
                    if(b>1)
                    {
                        if(m[b-1][d]=='1')
                        {
                            s1--;
                            m[b-1][d-1]=255;
                            m[b-1][d]=255;
                        }

                        if(m[b-1][d]=='2')
                        {
                            s2--;
                            m[b-1][d-1]=255;
                            m[b-1][d]=255;
                        }
                        boxes[b-2][d]==0;
                        boxes[b-2][d-1]==0;
                        boxes[b-1][d]==0;
                        boxes[b-1][d+1]==0;
                        boxes[b-1][d-2]==0;
                    }
                    boxes[b][d]==0;
                    boxes[b][d-1]==0;
                }
                //lw r2sy
                else
                {
                    b=all_turns[0][*all_index];
                    d=all_turns[1][*all_index];
                    m[b][d]=255;
                    if(all_turns[2][*all_index]==all_turns[2][*all_index+1]||w==1)
                    {
                        *counter=*counter+1;
                        q=q+1;
                    }
                    if(d!=l-1)
                    {
                        if(m[b][d+2]=='1')
                        {
                            s1--;
                            m[b][d+1]=255;
                            m[b][d+2]=255;
                        }

                        if(m[b][d+2]=='2')
                        {
                            s2--;
                            m[b][d+1]=255;
                            m[b][d+2]=255;
                        }
                        boxes[b][d+2]=0;
                        boxes[b][d+3]=0;
                        boxes[b-1][d+1]=0;
                        boxes[b-1][d+2]=0;
                        boxes[b+1][d+1]=0;
                        boxes[b+1][d+2]=0;
                    }
                    if(d>2)
                    {
                        if(m[b][d-1]=='1')
                        {
                            s1--;
                            m[b][d-1]=255;
                            m[b][d-2]=255;
                        }
                        if(m[b][d-1]=='2')
                        {
                            s2--;
                            m[b][d-1]=255;
                            m[b][d-2]=255;
                        }
                        boxes[b][d-1]=0;
                        boxes[b][d-3]=0;
                        boxes[b-1][d-1]=0;
                        boxes[b-1][d-2]=0;
                        boxes[b+1][d-2]=0;
                        boxes[b+1][d-1]=0;
                    }
                    boxes[b][d]=0;

                }

            }
        }
        else if(n[0]=='r')
        {
            if(no_of_undos==0)
            {
                gotoxy(0,27);
                printf("you can't redo unless you undo at least one time :'D\n ");
                *counter=*counter-1;
            }
            if(no_of_undos!=0)
            {
                no_of_redos++;
                b=all_turns[0][*all_index];
                d=all_turns[1][*all_index];
                //lw 2ofoky
                if(all_turns[0][*all_index]==all_turns[0][*all_index+1]&&all_turns[1][*all_index]==all_turns[1][*all_index+1]-1)
                {
                    m[b][d]=-51;
                    m[b][d+1]=-51;
                    a=b;
                    c=d;
                    row1=b;
                    col1=d;
                    *all_index=*all_index+2;
                }
                //lw r2sy
                else
                {
                    m[b][d]=-70;
                    a=b;
                    c=d;
                    row1=b;
                    col1=d;
                    *all_index=*all_index+1;
                }
                no_of_undos--;
            }
        }
        else if(n[0]=='e')
        {
            con=1;
        }
        else
        {
            *counter=*counter-1;
        }
    }

    return;
}



