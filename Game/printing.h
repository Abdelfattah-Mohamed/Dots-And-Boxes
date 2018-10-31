#ifndef PRINTING_H_INCLUDED
#define PRINTING_H_INCLUDED

void array_print(int k,int l,char a[k][l]);
void turns_array(int *a,int *c,int counter,int *all_index,int all_turns[3][100],const o);
void boxes_paint(int a,int c,int k,int l,char m[k][l]);
void lines_colors(int ii,int jj);
void box_lines_array(int g,int n1,int n2,int k,int l);
void box_lines_color(int e,int r);
void print_time(long long *Min,long long *total_t);


#endif // PRINTING_H_INCLUDED
