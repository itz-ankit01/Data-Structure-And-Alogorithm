#include<stdio.h>
/*
    int main(){
        struct pokemon{       // user defined data type
            int hp;
            int speed;
            int attack;
            char tier; // S,A,B,C,D 
        };
        struct pokemon pikachu;

        printf("Enter the pikachu attack : ");
        scanf("%d",&pikachu.attack);
        // pikachu.attack = 60;
        pikachu.hp = 50;
        pikachu.speed = 100;
        pikachu.tier = 'A';

        printf("%d\n",pikachu.attack);

        struct pokemon charizard;
        charizard.attack = 130;
        charizard.hp = 80;
        charizard.speed = 80;
        charizard.tier = 'S';

        printf("%d\n",charizard.speed);

        struct pokemon meWTwo;
        meWTwo.attack = 170;
        meWTwo.hp = 150;
        meWTwo.speed = 200;
        meWTwo.tier = 'G';

        printf("%c\n",charizard.tier);
        printf("%d\n",meWTwo.hp);
        
        return 0;
    }    */  

//  WE CAN DECLARE ALL THE VARIABLE AT ONCE
/*
        int main(){
        struct pokemon{       // user defined data type
            int hp;
            int speed;
            int attack;
            char tier; // S,A,B,C,D 
        } pikachu, charizard, meWTwo;
       
        printf("Enter the pikachu attack : ");
        scanf("%d",&pikachu.attack);
        // pikachu.attack = 60;
        pikachu.hp = 50;
        pikachu.speed = 100;
        pikachu.tier = 'A';

        printf("%d\n",pikachu.attack);

       
        charizard.attack = 130;
        charizard.hp = 80;
        charizard.speed = 80;
        charizard.tier = 'S';

        printf("%d\n",charizard.speed);

       
        meWTwo.attack = 170;
        meWTwo.hp = 150;
        meWTwo.speed = 200;
        meWTwo.tier = 'G';

        printf("%c\n",charizard.tier);
        printf("%d\n",meWTwo.hp);
        
        return 0;
    }             */


// CREATE A STRUCTURE TYPE BOOK WITH NAME , PRICE , AND THE NUMBER OF PAGES AS ITS ATTRIBUTES
/*
        #include<string.h>
        int main(){
            typedef struct book{
                char name[50];
                int noOfPages;
                float price;
            } book;

            book a;
            book b;
            book c;

            a.noOfPages = 100;
            a.price = 411.5;
            strcpy(a.name,"Seven Secrets");

            b.noOfPages = 200;
            b.price = 100.5;
            strcpy(b.name,"Famous Five");
           
            printf("%d\n",b.noOfPages);
            printf("%f\n",a.price);
            printf("%s\n",a.name);

            return 0;

                   }            */  


// CREATE  A STRUCTURE TYPE PERSON WITH NAME, SALARY AND AGE AS ITS ATTRIBUTES. DECLARE AND INITIALIZE 2 VARIABLES FOR THIS . PRINT THE NAME OF THE FIRST PERSON AND AGE OF THE SECOND PERSON
/*
        #include<string.h>
        int main(){
            struct person{
                char name[50];
                int salary;
                int age;
            }  x,y;

            strcpy(x.name,"Rohan");
            y.age = 20;

            printf("%s\n",x.name);
            printf("%d\n",y.age);

            return 0;
        }        */


// HOW THE ELEMENTS OF A STRUCTURE ARE STORED ?
// elements are stored in a continous memory location

// TYPEDEF

/*
        typedef float realNumber;
        typedef int Integer;
        int main(){
            Integer x=5;
            realNumber y = 3.1415;

            printf("%f\n",y);
            printf("%d",x);
            return 0;
        }        */


// && THE MULTIPLE POINTER DECLARATION PROBLEM
/*
        int main(){
            int x = 5, y = 3;
            int* a = &x ,b = y;
            printf("%p\n",a);
            printf("%d\n",b);

            return 0;
        }      */
/*
        typedef int* int_pointer;
        int main(){
            int x = 5, y = 3;
            int_pointer a = &x ,b = &y;  // int* a and int* b
            printf("%p\n",a);
            printf("%p\n",b);

            return 0;
        }         */


// ARRAY OF STRUCTURES
/*
        #include<string.h>
        int main(){
            typedef struct pokemon{
                int hp;
                int attack;
                int speed;
                char tier;
                char name[15];
            } pokemon;

            pokemon arr[10]; // arr[0], arr[1], arr[2], .... arr[9]
         /*   arr[0].attack = 50;
            arr[0].hp = 100;
            arr[0].speed = 30;
            arr[0].tier = 'A';
            strcpy(arr[0].name,"Charizard");

            arr[1].hp = 150;
            arr[1].attack = 150;
            arr[1].speed = 130;
            arr[1].tier = 'S';
            strcpy(arr[1].name,"MeWTwo");
            
            arr[2].attack = 80;
            arr[2].hp = 70;
            arr[2].speed = 100;
            arr[2].tier = 'G';
            strcpy(arr[2].name,"Pikachu");    */

  /*         for(int i=0; i<3; i++){

                printf("Enter name : ");
                scanf("%s",arr[i].name);
                printf("Enter attack : ");
                scanf(" %d",&arr[i].attack);
                printf("Enter hp : ");
                scanf("%d",&arr[i].hp);
                printf("Enter speed : ");
                scanf(" %d",&arr[i].speed);
                printf("Enter tier : ");
                scanf("%c",&arr[i].tier);
            }      

            for(int i=0; i<3; i++){
                int *x = &arr[i];
                printf("NAME : %s\n",arr[i].name);
                printf("ADDRESS : %p\n",arr[i].name);
                printf("ATTACK : %d\n",arr[i].attack);
                printf("HP : %d\n",arr[i].hp);
                printf("SPEED : %d\n",arr[i].speed);
                printf("TIER : %c\n",arr[i].tier);
                printf("ADDRESS : %p\n",x);
                
                printf("\n");
            }
            return 0;
        }       */     


//  A RECORD CONTAINS NAME OF CRICKETAR , HIS AGE , NUMBER OF TEST MATCHES HE HAS PLAYED AND THE AVG RUNS HE HAS SCORED IN EACH TEST  MATCH . CREATE AN ARRAY OF STRUCTURE TO HOLD RECORDS OF 20 SUCH CRICKETER AND THEN WRITE A PROGRAM TO HOLD THIS RECORD
/*
        #include<string.h>
        int main(){
           typedef struct cricketer{
                char firstname[20];
                char lastname[20];
                int age;
                int noOfMatches;
                float average;
            }cricketer;

            // for 3 cricketer
            cricketer arr[3];
            for(int i=0; i<3; i++){
                
                scanf("%s\n",arr[i].firstname);
                scanf("%s\n",arr[i].lastname);
                scanf("%d\n",&arr[i].age);
                scanf("%d\n",&arr[i].noOfMatches);
                scanf("%f\n",&arr[i].average);
            }
           
             for(int i=0; i<3; i++){
                
                printf("NAME : %s %s\n",arr[i].firstname,arr[i].lastname);
                printf("AGE : %d\n",arr[i].age);
                printf("NO OF MATCHES PLAYED : %d\n",arr[i].noOfMatches);
                printf("AVERAGE : %f\n",arr[i].average); 
            }
            return 0;
        }         */

// FEATURES OF STRUCTURE
/*
        #include<string.h>
        int main(){
             typedef struct pokemon{
                int hp;
                int attack;
                int speed;
                char tier;
                char name[15];
            } pokemon;

            pokemon a,b,c;
            a.attack = 100;
            a.hp = 100;
            a.speed = 90;
            a.tier = 'A';
            strcpy(a.name,"Blastoise");

            // b.attack = a.attack;
            // b.hp = a.hp;
            // b.speed = a.speed;
            // b.tier = a.tier;
            // strcpy(b.name,a.name);

            b = a;  // b me bhi a aa gya h  // deep copy

            strcpy(b.name,"Venusar");

            printf("%s\n",b.name);
            printf("Speed of B %d",b.speed);

            return 0;
        }     */     


// CREATE A STRUCTURE DATE THAT CONTAINS THREE MEMBERS NAMELY DATE MONTH AND YEAR. CREATE 2 STRUCTURE VARIABLES WITH DIFFERENT DATES AND NOW COMPARE THE TWO . IF THE DATES ARE EQUAL THEN DISPLAY THE MESSAGES AS EQUAL OTHERWISE UNEQUAL

/*
        #include<string.h>
        #include<stdbool.h>

        int main(){
            typedef struct date{
                int day;
                int month;
                int year;
            } day;
            day a,b;
            a.day = 10;
            a.month = 4;
            a.year = 2002;

            b.day = 21;
            b.month = 2;
            b.year = 2023;

            // bool flag = true;
            
            // if(a.day!=b.day) flag = false;
            // if(a.month!=b.month) flag = false;
            // if(a.year!=b.year) flag = false;
             
            // if(flag == true) printf("The dates are same");
            // else  printf("The dates are different");

            day c;
            c = a;
            
            bool flag = true;
            
            if(a.day!=c.day) flag = false;
            if(a.month!=c.month) flag = false;
            if(a.year!=c.year) flag = false;
             
            if(flag == true) printf("The dates are same");
            else  printf("The dates are different");
            
            return 0;
        }         */


//  FEATURE OF STRUCTURES
// nesting one structure within another structure

/*
        #include<stdio.h>
        #include<string.h>
        int main(){
            typedef struct pokemon{
                int hp;
                int speed;
                int attack;
                char tier;
                char name[15];
            }pokemon;
            
            typedef struct legendarypokemon{
                pokemon normal;
                char ability[100];
            }legendarypokemon;

            typedef struct godpokemon{
                legendarypokemon legend;
                int specialattack;
            }godpokemon;

            godpokemon arceus;
            arceus.specialattack = 300;
            strcpy(arceus.legend.ability,"Turn Anyone Into Stone");
            arceus.legend.normal.attack = 500; 
            arceus.legend.normal.hp = 300;


            legendarypokemon meWTwo;
            strcpy(meWTwo.ability,"Pressure");
            meWTwo.normal.attack = 180;
            meWTwo.normal.hp = 150;
            strcpy(meWTwo.normal.name,"MewTwo");
            meWTwo.normal.speed = 180;
            meWTwo.normal.tier = 'S';


            return 0;
        }          */

//  FUNCTION IN STRUCTURE , PASS BY REFERENCE AND VALUE
/*
        #include<stdio.h>
        #include<string.h>

        typedef struct pokemon{  // global declaration 
                int hp;
                int speed;
                int attack;
                char tier;
                char name[15];
            }pokemon;

        void fun(pokemon p){
            printf("%d",p.hp);
        }

        void change (pokemon p){
            p.attack = 60;
            p.hp = 70;
            p.speed = 110;
        }
        int main(){
            
             pokemon pikachu;
             pikachu.hp = 60;
             pikachu.attack = 50;
             pikachu.speed = 100;

             change(pikachu); //    PASS BY VALUE
             printf("%d\n",pikachu.hp);
             printf("%d\n",pikachu.attack);
             printf("%d\n",pikachu.speed);
              fun(pikachu);
            return 0;
        }       */        


// CREATE A STRUCTURE TO SPECIFY DATA ON STUDENTS WITH THESE ATTRIBUTES : ROLL NO, COURSE , YEAR OF JOINING. CREATE 2 STRUCTURE VARIABLES. NOW, CREATE A FUNCTION TO CHECK IF TWO STUDENT HAVE THE SAME DEPARTMENT. PASS THE TWO STRUCTURE VARIABLE AS INPUT TO THIS FUNCTION.

/*
        #include<stdio.h>
        #include<string.h>
         typedef struct student{
                int rollNumber;
                char name[20];
                char department[10];
                char course[100];
                int yearOfJoining;
            } student;

        void check(student s1 , student s2 ){
            if(strcmp(s1.department , s2.department)==0) {
                printf("Yes , their department are same"); 
            }
            else printf("No , their dept is not same");
            return ;
        }
        int main(){
            student s1,s2;
            scanf("%s",s1.department);
            scanf("%s",s2.department);
            printf("%s\n",s1.department);
            check(s1,s2);
             
            return 0;
        }     */

// FEATURE OF POINTERS
/*
        #include<stdio.h>
        #include<string.h>
        typedef struct pokemon{
            
            int hp;
            int attack;
            int speed;
            char tier;
            char name[15];
        }pokemon;

        int main(){
            pokemon pikachu;
            // int * x ->> address of integer value
            pikachu.hp = 60;
            pikachu.attack = 70;
            pikachu.speed = 100;
            pikachu.tier = 'A';
            strcpy(pikachu.name,"Pikachu");

            pokemon * x = & pikachu;
            printf("%p\n",&pikachu.hp);
            printf("%p\n",&pikachu.attack);
            printf("%p\n",&pikachu.speed);
            printf("%p\n",&pikachu.tier);
            printf("%p\n",&pikachu.name);

            printf("%p ",x);
            return 0;
        }     */

// ACCESSING OF STRUCTURE USING POINTER
/*
        #include<stdio.h>
        #include<string.h>
        typedef struct pokemon{
            
            int hp;
            int attack;
            int speed;
            char tier;
            char name[15];
        }pokemon;

        void fun(pokemon * x){
            // (*x).hp = 70;  
            x->hp = 70;       // (*x).something = x->something
            // (*x).attack = 80;
            x->attack = 80;
            // (*x).speed = 110;
             x->speed = 110;
            // (*x).tier = 'S';
            x->tier = 'S';
            // strcpy((*x).name , "CHAARIZARD");
            strcpy(x->name , "CHAARIZARD");
        }

        int main(){
            // pokemon pikachu;
            // int * x ->> address of integer value
            // pikachu.hp = 60;
            // pikachu.attack = 70;
            // pikachu.speed = 100;
            // pikachu.tier = 'A';
            // strcpy(pikachu.name,"Pikachu");

            pokemon pikachu = {60, 70, 100,  "Pikachu"};  // order is very important
            pikachu.tier = 'A';
             

            printf("%d\n",pikachu.hp);
            printf("%d\n",pikachu.attack);
            printf("%d\n",pikachu.speed);
            printf("%c\n",pikachu.tier);
            printf("%s\n",pikachu.name);

            // pokemon * x = & pikachu;
            // (*x).hp = 70;  //  pikachu.hp = 70
            // printf("%d",pikachu.hp);

            fun( &pikachu );
            printf("%d\n",pikachu.hp);
            printf("%d\n",pikachu.attack);
            printf("%d\n",pikachu.speed);
            printf("%c\n",pikachu.tier);
            printf("%s\n",pikachu.name);
            return 0;
        }       */

//  CREATE A STRUCTURE 'PERSON' HAVING ATTRIBUTES AS AGE AND WEIGHT . ACCESS ITS STRUCTURE VARIABLES USING POINTERS

        // #include<stdio.h>
        // #include<string.h>

        // int main(){
        //     typedef struct person;
        //     return 0;
        // }


//  STRUCTURE VS UNION

        #include<stdio.h>
        #include<string.h>

        int main(){
            typedef union pokemon{
                int hp;
                int attack ;
                int speed;
                char tier;
                char name[15];
            } pokemon;
            pokemon pikachu;
            pikachu.hp = 60;
            pikachu.attack = 80;
            pikachu.speed = 110;
            pikachu.tier = 'A';
            strcpy(pikachu.name,"PIKACHU");

            printf("%d\n",pikachu.hp);
            printf("%d\n",pikachu.attack);
            printf("%d\n",pikachu.speed);
            printf("%c\n",pikachu.tier);
            printf("%s\n",pikachu.name);


           return 0;
        }

