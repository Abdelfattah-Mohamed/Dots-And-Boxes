#ifndef MAINFUNCTIONS_H_INCLUDED
#define MAINFUNCTIONS_H_INCLUDED

extern COORD coord ;

struct player
{
    char name[50];
    int score;

} p[12];

extern char string1[100] ;
int all_turns[3][100],boxes[12][18];
extern int all_index,j,q,co,a,c,i,s1,s2,t1,t2,w,last,no_of_undos,no_of_redos,h,row1,col1,con;
int arr2[4][60];
extern int mode;

void input(int *a,int *b,int *c,int *d,const k,const l, char m[k][l],int *counter);
void scan_input(int *a,int *b,int *c,int *d,int j,int arr2[4][60],int Size,int s,int v,char matrex[s][v]);
void undo(int all_turns[3][100],int *all_index,int *counter,int k,int l,char m[k][l]);


#endif // MAINFUNCTIONS_H_INCLUDED
