// 4. Write a program to read name, rollno, address, and phone number of each student in your class using structure. Store the information in file so that you can recover the information later. While recovering the information from the file sort the information alphabetically according to the name.
#include <stdio.h>

int main(){
    FILE *fp;
    char ch;
    struct Students{
        char name[50];
        char address[50];
        int roll;
        long long int phone;
    }stu1, stu2, stu3, stu4;
    strcpy(stu1.name, "Aabhusan");
    strcpy(stu1.address, "KTM");
    stu1.roll = 1;
    stu1.phone = 9840404040;
    while(1){
        fp = fopen("db.txt", "w");
        ch = fgetc ( fp ) ;  
        if ( ch == EOF ) break ;  
        printf("%c",ch) ;  
        }  
        fclose (fp ) ;  
    }
}
    