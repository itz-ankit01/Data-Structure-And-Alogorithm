// #include<stdio.h>

// int main(){
//     FILE *fp;
//     char ch[50];
//     printf("Input the string to be written in the file");
//     gets(ch);
//     fp = fopen("ankit.txt","w");
//     fprintf(fp,ch);
//     fclose(fp);
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     FILE *fp;
//     char ch;
//     fp = fopen("Hello.txt","r");
//     while(1){
//         ch = fgetc(fp);
//         if(ch==EOF)
//         break;
//         printf("%c",ch);
//     }
//     fclose(fp);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     FILE *fp;
//     char buff[2];
//     fp = fopen("a.txt","r");
//     while(fscanf(fp,"%s",buff)!=EOF){
//         printf("%s",buff);
//     }
//     fclose(fp);
//     return 0;
// }



#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("myfile.txt","r+");
    // fputs("Hello Everyone!!",fp);

    fseek(fp,6,SEEK_END);
    fputs("All the best!",fp);
    rewind(fp);
    fputs("All the best!",fp);
    fclose(fp);
    return 0;
}