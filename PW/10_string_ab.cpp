#include <iostream>
#include <cstring>

using namespace std;


/*
int main()
{
    // DIFFERENT METHOF OF INITIALISATION OF STRING
    char x = 'A';

    char s1[10] = "Hello";
    cout << s1 << endl;

    char s2[] = "Hello";
    cout << s2 << endl;

    char s3[] = {'H', 'e', 'l', 'l', 'o', '\0', 'p', 'p', 'p', 'p', 'p'};
    cout << s3 << endl;

    char s4[] = {65, 66, 67, 68, '\0'};
    cout << s4 << endl;

    char *s5 = "Hello";
    cout << s5 << endl;

    return 0;
}                */

// READING AND PRINTING STRING
// to take input ->> cin>>s;  ,   cin.get(s,100);  ,  cin.getline(s,100);
/*
int main()
{
   char s[100];
   char s1[100];

   cout<<"Enter the name : ";
   cin.get(s,100);

   cout<<"Welcome "<<s<<endl;

   cin.ignore();               // first string k input k baad ka kuch v character ho ye ignore krega jaise iss case me enter tha

   cout<<"Enter the name again : ";
   cin.get(s1,100);

   cout<<"Welcome "<<s1<<endl;

    return 0;
}                         */

// FUNCTION ON STRING
/*
int main()
{

    char str[50] = "Hello World";

    cout << "The length of the string is : " << strlen(str) << endl;
    return 0;
}                  */


// POINTER TO A STRING
/*
    int main(){

        char *s = new char [100];

        cout << "Enter a String ";
        cin >> s;

        cout << "Length  " << strlen(s) << endl;

        delete [] s;

        cout << "Length  " << strlen(s) << endl;

        return 0;
    }           */

// STRCAT  &  STRNCAT
/*
    int main(){

        char s1[20] = "Good";
        char s2[10] = " Morning";

        strcat(s1, s2);

        cout << s1 << endl;

        strncat(s1, s2, 4);

        cout << s1 << endl;

        return 0;
    }                */


// STRCPY & STRNCPY
/*
    int main(){

        char s1[30] = "Good";
        char s2[10] = "";

       // strcpy(s2, s1);

        cout << s2 << endl;

        strncpy (s2, s1, 2);

        cout << s2 << endl;
        return 0;
    }            */

//  SUBSTRING AND COMPARE
/*
    int main(){

        char s1[20] = "Programming";
        char s2[10] = "kite";


        if(strstr(s1, s2)!= NULL)
        cout << strstr(s1, s2) << endl;

        else cout << "Not Found " << endl;

        return 0;
    }       */

// STRCHR & STRRCHR
/*
    int main(){

        char s1[20] = "Programming";
        
        cout << strchr(s1, 'r') << endl;

        cout << strrchr(s1, 'r') << endl;

        cout << strchr(s1, 'p') << endl;   // small p is not present

        return 0;
    }   */

// STRCMP(STR1, STR2)
/*
     int main(){

        // char s1[20] = "Hello";
        // char s2[20] = "Hello";

        // char s1[20] = "hello";
        // char s2[20] = "Hello";

        char s1[20] = "Hello";
        char s2[20] = "hello";

        cout << strcmp(s1, s2) << endl;
       
        return 0;
    }                */


// TOKENISER AND TO INTEGER STRTOL(STR1), STRTOF(STR1, NULL)
/*
    int main(){

        char s1[10] = "235";
        char s2[10] = "54.78";

        long int x = strtol(s1, NULL, 10);
        float y = strtof(s2, NULL);

        cout << x + 10 << endl << y - 5 << endl;

        return 0;
    }              */

// TOKENISER STRTOK(STR1, "=;");
/*
    int main(){

        char s1[50] = "x =10; y = 20; z = 35";

        char *token = strtok(s1, ";");

        while(token != NULL){
            cout << token << endl;
            token = strtok(NULL, ";");
        }
        return 0;
    }          */

//  CLASS STRING
/*
    int main(){

        string str;
        
        cout << "Enter the string ";
        getline(cin, str) ;

        cout << str << endl;

        getline(cin, str);

        cout << str << endl;
        return 0;
    }               */

// BASIC FUNCTION OF CLASS STRING
/*
    int main(){

        string str = "Hello";

        cout << "Length -> " << str.length() << endl;
        
        cout << "Size -> " << str.size() << endl;

        cout << "Capacity -> " << str.capacity() << endl;

        str.resize(50);

        cout << "Capacity -> " << str.capacity() << endl;

        cout << "Max_Size -> " << str.max_size() << endl;

        str.clear();

        cout << "Length -> " << str.length() << endl;

        if(str.empty()){
            cout << "String is empty " << endl;
        }
        else cout << str << endl;
        
        return 0;
    }                */


// SOME MORE CLASS STRING FUNCTION
// str.append("Hello");
/*
    int main(){

        string str = "Hello";

        cout << "Capacity & length before adding -> " << str.capacity() << " " << str.length() << endl;

        str.append("How are yoy all ? Hope all are fine. ");

        cout << "Capacity & length after adding -> " << str.capacity() << " " << str.length() << endl;

        cout << str << endl;
        return 0;
    }            */

// STR.INSERT(3, "KK");
/*
    int main(){

        string str = "How you";

        str.insert(3, " area", 4);

        cout << str << endl;

        return 0;
    }               */

// str.replace(3, 4, "KK"); => str.replace(index, no. of letters that u want to replace, "replacing string") 
/*
    int main(){

        string str = "Programming";

        str.replace(3, 6, "H");

        cout << str << endl;

        return 0;
    }           */

/*

    int main(){

        string str = "Programming ";

        str.erase();

        cout << str << endl;

        str = "Programming";

        str.push_back('H');

        cout << str << endl;

        str.pop_back();

        cout << str << endl;

        string str2 = "Language";

        str.swap(str2);

        cout << str << endl;

        cout << str2 << endl;

        return 0;
    }              */

// COPY AND FIND FUNCTION IN CLASS STRING
/*
    int main(){

        string s = "Welcome";

        char str[10];

        //s.copy(str, s.length());
        //str[s.length()] = '\0';

        s.copy(str, 3);
        str[3] = '\0';

        cout << str << endl;
        return 0;
    }         */


// STR.FIND("TEXT");
/*
    int main(){

        string str = "How are you ";

        cout << "Index of are " << str.find("are") << endl;

        cout << "Index of yo " << str.find("yo") << endl;

        cout << "Index of o " << str.find('o') << endl;

        cout << "Index of o from right " << str.rfind('o') << endl;

        cout << "Index of is " << str.find("is") << endl;

        return 0;
    }            */


// STR.FIND_FIRST_OF("TEXT");
/*
    int main(){

        string str = "Hello World";

        cout <<"Index of le " << str.find_first_of("le") << endl;

        cout <<"Index of l " << str.find_last_of("l") << endl;


        return 0;
    }           */


//  S.SUBSTR(START, NUMBER)

/*
    int main(){

        string str = "Programming";

        cout << str.substr(3) << endl;

        cout << str.substr(3, 4) << endl;

        string str2 = "Hello";

        cout << str.compare(str2) << endl;
        return 0;
    }              */

//  DIFFERENT FUNCTIONS AND OPERATOR IN CLASS STRING
/*
    int main(){

        string str = "Holiday";

        cout << str.at(4) << endl;

        str[4] = 'M';

        cout << str << endl;

        string str1 = "Hello ";
        string str2 = "World";

        str1 = str1 + str2;
        
        cout << str1 << endl;

        str1 = str1 + " How are you? ";

        cout << str1 << endl;
        return 0;
    }             */

// ITERATOR IN CLASS STRING
// string :: iterator
/*
    int main(){

        string str = "today";

        string :: iterator it;

        for(it = str.begin(); it != str.end(); it++){
            //cout << (*it) << " ";
            *it = *it - 32;            // converting all the lowercase in the uppercase
        }

        cout << str;
        cout << endl;
    }          */

// string :: reverse_iterator
/*
    int main(){

        string str = "Today";

        string :: reverse_iterator it;
        
        for(it = str.rbegin(); it != str.rend(); it++){
            cout << (*it) << " ";
        }
        cout << endl;

        return 0;
    }         */

// 
/*
    int main(){

        string str = "today";

        for(int i = 0; str[i] != '\0'; i++){
            str[i] = str[i] - 32;
        }
        cout << str;
        cout << endl;
        return 0;
    }         */

// FIND THE LENGTH OF A STRING
/*
    int main(){

        string str;
        getline(cin, str);

        int length = 0;
        
        while(str[length] != '\0'){
            length++;
        }

        cout << "Length -> " << length << endl;
        cout << "Length -> " << str.length() << endl;

        return 0;
    }   */

// using iterator
/*
    int main(){

        string str;
        getline(cin, str);

        int length = 0;
        
        string :: iterator it;

        for(it = str.begin(); it != str.end(); it++){
            length++;
        }
        cout << "Length -> " << length << endl;
        return 0;
    }    */

// CHANGE UPPER CASE LETTER TO LOWER CASE
/*
    int main(){

        string str ;
        getline(cin, str);

        for(int i = 0; str[i] != '\0'; i++){

            if(str[i] >= 65 && str[i] <= 90){

                str[i] = str[i] + 32;
            }
        }

        cout << str;

        return 0;
    }              */

// COUNT NUMBER OF VOWEL CONSONANTS AND WORDS
/*
    int main(){

        string str ;
        getline (cin, str);

        int vowels = 0, consonant = 0, space = 0;

        for(int i = 0; str[i] != '\0'; i++){
            if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ) {

                    vowels++;
            }

            else if (str[i] == ' '){
                    space++;
            }
            else consonant++;
        }

        cout << "No of vowels -> " << vowels << endl;
        cout << "No of consonant -> " << consonant << endl;
        cout << "No of words -> " << space + 1 << endl;
        return 0;
    }              */

// REVERSE A STRING AND CHECH A STRING IS A PALINDROME
/*
    int main(){

        string str;
        getline(cin, str);

        string rev = "";

        int len = str.length();

        rev.resize(len);

        for(int i = 0, j = len - 1; i < len; i++, j-- ){
            rev[i] = str[j];
        }
        rev[len] = '\0';
        if(str.compare(rev) == 0){
            cout << "Palindrome" << endl;
        }
        else cout << "Not Palindrome" << endl;
        return 0;
    }            */

// FIND THE USERNAME FROM THE EMAIL ADDRESS

    int main(){

        string email ;
        getline(cin, email);

        int i = email.find('@');

        string uname = email.substr(0,i);

        cout << "The user name is " << uname << endl;
        return 0;
    }