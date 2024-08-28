#include<stdio.h>
#include<stdlib.h>
int main()
{
 int i=1;
 int selection;
 int score=0;

while(i<=5)
{
	switch(i)
	{
	  case 1:
		printf("\n\nQ.1)  WHO IS THE MOST WICKET TAKER IN CRICATE HISTORY? ");
		printf("\n\nA.ANIL KUMBLE \t\tB.SHEN WARNE\n\nC.MUTTIAH MURLITHARAN\t\tD.ZAHIR KHAN\n\n");
		scanf("%c", &selection);
		getchar();
		
		printf("\n\n\n");
		
		if(selection=='C'||selection=='c'){
			printf("GOOD YOUR ANSWER IS CORRECT");
			score++;
		}
		else {printf("your answer is wrong, the correct answer is C\a\n");
		       }
		
		printf("\n\n\n");
        int ch ;
        scanf("%d",&ch);
        if(ch == 1){
            system("cls");
        }
		i++;
		break;
		
		
      case 2:
		printf("\n\nQ.2)  WHO IS MISSILE MAN OF INDIA?  ");
		printf("\n\nA.DR VIKRAM SARABHAI\t\tB.C.V. RAMAN\n\nC.DR APJ ABDUL KALAM\t\tD.DR K SIVAN\n\n");
		scanf("%c", &selection);
		getchar();
		
		printf("\n\n\n");
		
		if(selection=='C'||selection=='c'){
			printf("GOOD Your Answer is correct");
			score++;
		}
		else {printf("your answer is wrong, the correct answer is C\a\n");
		       }
		
		printf("\n\n\n");
       
        scanf("%d",&ch);
        if(ch == 1){
            system("cls");
        }
		i++;
		break;
		
		case 3:
		printf("\n\nQ.3) IN WHICH STATE OF INDIA THE ARAVLI HILLS ARE PRESENT? ");
		printf("\n\nA.TRIPURA\t\tB.RAJASTHAN\n\nC.UTTRAKHAND\t\tD.HIMACHAL PRADESH\n\n");
		scanf("%c", &selection);
		getchar();
		
		printf("\n\n\n");
		
		if(selection=='b'||selection=='B'){
			printf("GOOD Your Answer is correct");
			score++;
		}
		else {printf("your answer is wrong, the correct answer is B\a\n");
		       }
		
		printf("\n\n\n");
        
        scanf("%d",&ch);
        if(ch == 1){
            system("cls");
        }
		i++;
		break;
		
		case 4:
		printf("\n\nQ.4) THE DISCOVERY OF ZERO WAS DONE BY ? ");
		printf("\n\nA.ARAYBHATT\t\tB.SHRI NIWAS RAMANUJAN\n\nC.SHRI DHARACHARYA\t\tD.ISAAC NEWTON\n\n");
		scanf("%c", &selection);
		getchar();
		
		printf("\n\n\n");
		
		if(selection=='a'||selection=='A'){
			printf("GOOD Your Answer is correct");
			score++;
		}
		else {printf("your answer is wrong, the correct answer is B\a\n");
		       }
		
		printf("\n\n\n");
      
        scanf("%d",&ch);
        if(ch == 1){
            system("cls");
        }
		i++;
		break;
		
		case 5:
		printf("\n\nQ.5) THE LONGEST RIVER OF INDIA ? ");
		printf("\n\nA.YAMUNA\t\tB.CHAMBAL\n\nC.NARMADA\t\tD.GANGA\n\n");
		scanf("%c", &selection);
		getchar();
		
		printf("\n\n\n");
		
		if(selection=='D'||selection=='d'){
			printf("GOOD Your Answer is correct");
			score++;
		}
		else {printf("your answer is wrong, the correct answer is D\a\n");
		       }
		
		printf("\n\n\n");

        scanf("%d",&ch);
        if(ch == 1){
            system("cls");
        }
		i++;
		break;
    }
}
printf("YOUR TOTAL SCORE IS %d OUT OF 5",score);
	0;
}