#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define s 5
int stack[s];
int tos=-1;
int push();
int pop();
int empty(void);
int full(void);
int peek();

 int empty(void)
 {
     if(tos==-1)
         return 1;
     else
         return 0;
 }
 int full()
 {
     if(tos==(s-1))
        return 1;
     else
        return 0;
 }
 int push(int x)
 {
     if(full())
        printf("stack is full....!");
     else
        stack[tos++]=x;
 }
 int pop()
 {
     if(empty())
        printf("stack is empty....!");
     else
        return(tos--);
 }
 int peek()
 {
     if(empty())
         printf("stack is empty....!");
     else
     {
          printf("top most element is:");
          return(stack[tos]);
     }
 }
 int main()
 {
     int i,x=0;
     while(1)
     {
     printf("enter any choice:");
     printf("\n1.push\n2.pop\n3.peek\n4.exit :");
     scanf("%d",&i);
     switch(i)
     {
         case 1:
                 printf("enter a number for insert:");
                 scanf("%d",&x);
                 push(x);
                 break;
         case 2: pop();
                 break;
         case 3: peek();
                 break;
         case 4: exit(0);
     }
     }
     getch();
 }