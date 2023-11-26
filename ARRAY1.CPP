#include<stdio.h>
#include<conio.h>
int main(){
char n[5];
clrscr();
n[0]='S';
n[1]='n';
n[2]='e';
n[3]='h';
n[4]='a';
printf("array element:");
for(int i=0;i<5;i++){
printf("%c",n[i]);
}
printf("\n");
getch();
return 0;
}