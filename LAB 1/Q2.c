// 2. Write a program to find the position of the character 'C' in the sentence "idea without execution is worthless" using pointer and string.
#include <stdio.h>

int main(){
    char st[] = "idea without execution is worthless";
    int len=35;
    int pos=0;
    while(st[pos]!='c') pos++;
    printf("%d", pos+1);

    return 0;
}