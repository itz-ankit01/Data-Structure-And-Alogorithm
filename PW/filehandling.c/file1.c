#include<stdio.h>
/*
int main()
{
    
    FILE *fptr;
    fptr = fopen("Newtest.txt","w");
    if(fptr==NULL){
        printf("File doesn't exist");
    }
    else {
        fclose(fptr);
    }
 
    return 0;
}    */

// int main()
// {

    
// reading data from file
    // FILE *fptr;
    // fptr = fopen("test.txt","r");
    // int ch;
    // fscanf(fptr,"%d",&ch);
    // printf("character = %d\n", ch);
    // fscanf(fptr,"%d",&ch);
    // printf("character = %d\n", ch);
    // fscanf(fptr,"%d",&ch);
    // printf("character = %d\n", ch);
   
   
// FILE *fptr;
    // fptr = fopen("test.txt","a");

    // fprintf(fptr,"%c",'M');
    // fprintf(fptr,"%c",'A');
    // fprintf(fptr,"%c",'N');
    // fprintf(fptr,"%c",'G');
    // fprintf(fptr,"%c",'O');

    // fptr = fopen("test.txt","w");

    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    
    // fclose(fptr);

    // fptr = fopen("Newtest.txt","r");

    // fputc('M',fptr);
    // fputc('a',fptr);
    // fputc('n',fptr);
    // fputc('g',fptr);
    // fputc('o',fptr);
    
    // fclose(fptr);
//     return 0;
// }
#include<string.h>
int main(){
    FILE *fptr;
    fptr = fopen("test.txt","w");

    printf("%s\n",fgetc(fptr));
    printf("%s\n",fgetc(fptr));
    printf("%s\n",fgetc(fptr));
    printf("%s\n",fgetc(fptr));
    printf("%s\n",fgetc(fptr));
    return 0;
}
// int main(){
//     FILE *fptr;
//     fptr = fopen("test.txt","r");
//     char ch;
//     ch = fgetc(fptr);
//     while(ch!=EOF){
//         printf("%c",ch);
//         ch = fgetc(fptr);
//     }
//     printf("\n");

//     return 0;

// }