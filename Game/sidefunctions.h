#ifndef SIDEFUNCTIONS_H_INCLUDED
#define SIDEFUNCTIONS_H_INCLUDED

void swaping(int *a,int *b,int *c,int *d);
void turns(char a[],char b[],int counter,int n,int m);
void score(int *counter,int *loop,int *s1,int *s2,int k,int l,char m[k][l],int a,int c,int co);
void winner(char p1[],char p2[],int a,int b);
void remaining_lines(const p,int ii);
void undos_clear();
void total_time(int j,long long *Min,long long *total_t,long long *start_t,long long *end_t);
void gotoxy(int x,int y);
void calculate_turns();


#endif // SIDEFUNCTIONS_H_INCLUDED
