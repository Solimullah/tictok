#include<stdio.h>
#include<string.h>
char tic[3][3];
int r,cell;
void display( char t[][3] );
void playerX( char t[][3] );
void playerO( char t[][3] );
void result ( char t[][3] );
int main()
{
int i,j;
char ch='1' ;
for(i=0 ; i< 3; i++)
for(j=0 ; j< 3; j++)
tic[i][j]=ch++;
display(tic);
while( 1)
{
if(r==0)
{
playerX(tic);
result (tic);
display(tic);
}
if(r==0)
{
playerO(tic);
result (tic);
display(tic);
}
else
{
return 0;
}
}
}
void display( char t[][3] )
{
int i,j ;
for(i=0 ; i< 3; i++)
{
for(j=0 ; j< 3; j++)
{
printf(" %c | ",t[i][j]);
}
printf("\n-----|------|------|\n");
}
}
void playerX( char t[][3] )
{
int i,j;
char ch;
printf("Player X: ");
scanf("%c", &ch);
for(i=0 ; i< 3; i++)
{
for(j=0 ; j< 3; j++)
{
if(t[i][j]==ch)
t[i][j]='X' ;
cell++;
}
}
getchar();
printf("\n\n");
}
void playerO( char t[][3] )
{
int i,j;
char ch;
printf("Player O: ");
scanf("%c", &ch);
for(i=0 ; i< 3; i++)
{
for(j=0 ; j< 3; j++)
{
if( t[i][j]==ch )
t[i][j]='O' ;
cell++;
}
}
getchar();
printf("\n\n");
}
void result ( char t[][3] )
{
int i;
char ch='O';
for( i= 0;i< 2; i++,ch='X')
{
if( t[0][0]==ch && t[1][1]==ch && t[2][2]==ch )
{
printf("\n Player %c is winner\n", ch);
r = 1;
}
else if( t[0][2]==ch && t[1][1]==ch && t[2][0]==ch )
{
printf("\n Player %c is winner\n", ch);
r = 1;
}
else if( t[0][0]==ch && t[1][0]==ch && t[2][0]==ch )
{
printf("\n Player %c is winner\n", ch);
r = 1;
}
else if( t[1][0]==ch && t[1][1]==ch && t[1][2]==ch )
{
printf("\n Player %c is winner\n", ch);
r = 1;
}
else if( t[2][0]==ch && t[2][1]==ch && t[2][2]==ch )
{
printf("\n Player %c is winner\n", ch);
r = 1;
}
else if( t[0][0]==ch && t[0][1]==ch && t[0][2]==ch )
{
printf("\n Player %c is winner\n", ch);
r = 1;
}
else if( t[0][0]==ch && t[0][1]==ch && t[0][2]==ch )
{
printf("\n Player %c is winner\n", ch);
r = 1;
}
else if( t[0][1]==ch && t[1][1]==ch && t[2][1]==ch )
{
printf("\n Player %c is winner\n", ch);
r = 1;
}
else if( t[0][2]==ch && t[1][2]==ch && t[2][2]==ch )
{
printf("\n Player %c is winner\n", ch);
r = 1;
}
}
}
