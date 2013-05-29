//
//  main.c
//  choose
//
//  Created by Varun on 3/19/13.
//  Copyright (c) 2013 Varun. All rights reserved.
//

#include<stdio.h>
int main(){
    void (*p)();
    int (*q)();
    int (*r)();
    p = clrscr();
    q = getch();
    r = puts;
    (*p)();
    (*r)("cquestionbank.blogspot.com");
    (*q)();
    return 0;
}
