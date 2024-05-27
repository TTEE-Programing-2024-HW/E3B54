#include <stdio.h>
#include<stdlib.h>
#include <string.h>

#define MAX_STUDENTS 10
#define password 2024

typedef struct 
{
    char name[50];
    int id;
    int math;
    int physics;
    int english;
} Student;

Student students[MAX_STUDENTS];
int numStudents = 0;

void Welcome();
int Password();
void Menu();
void Enter();
void Display();
void Search();
void Ranking();
void exit();

int main() 
{
    Welcome();

    if (!Password()) 
	{
        printf("���~�w�F�T���A�����}!\n");
        return 1;
    }

    while (1) 
	{
        system("CLS");
        
        char choice;
        scanf(" %c", &choice);

        
    }
}

void Welcome() 
{
    printf("	              .:--.                   :--.        .  .\n");
    printf("             :-.  :-:              .-++++*=    . .. .. .  \n");
    printf("             -.*+-. .::.--==++++=--*+++****-   . ....  .  \n");
    printf("            .-:****=.       ----.++++*****++   .  .... .   \n");
    printf("            -:-**=-:.            =++++*****+   .  .   .     \n");
    printf("            =.-+.                .++++++**+*        .      \n");
    printf("            =.:.                  :++++++*+#:              \n");
    printf("            +.  .-+*##*-         :+%%%#**++*+              \n");
    printf("           .+ ..:    .=##       =#=::++***++#::=---=:      \n");
    printf("          .+..:-::                    .-+===+*=.:- :+      \n");
    printf("          =- -=-:.         .+:         .::-:.*-:--::=.     \n");
    printf("          *  . .:.    .::... ..::::    .. .:::+     +.     \n");
    printf("          *  .=-                        .:-. .*     +      \n");
    printf("          +.                              .: .+ :=++=      \n");
    printf("          :+   .                             +.-+++*:      \n");
    printf("           :+=+=++=.                       :=. +++++       \n");
    printf("          .-+::-+:-+=                   :=**   :=+*.       \n");
    printf("         +--+=+*===-=*+=-:..      .::-+***+.     +:        \n");
    printf("        -=::++==+::::=#****#*****#*****+-.      =:         \n");
    printf("        -=:-+::-+-==::+:.=+===+=--::..        :=.          \n");
    printf("         :=*::-=*=++-:-++------+:            :=            \n");
    printf("          .#::--*--+-::+==------+.           =.            \n");
    printf("           +=::+=:-=++:+=:--=:::-          :==---.         \n");
    printf("          :=*-:=++*+++=*:--==---         .=: . :.+         \n");
    printf("         +-.-+--*==++-==  ....          :+ .==-..=.        \n");
    printf("        :+....=+=-=-:-+.                +.  .:=..=         \n");
    printf("        .+:==. .-===--                  +.     -=          \n");
    printf("        .:=.     .                      .-=---+:.::.       \n");
    printf("       .::-+-.. --:-::..                :=++*+:::::        \n");
    printf("        ::::-:--:.   .:-----------::::::+++=: ::::         \n");
    printf("         .:::                                 ..           \n");
    
    system("pause");
    system("CLS");
}

int Password() 
{
    int attempts = 0;
    int input;
    
    while (attempts < 3) 
	{
        printf("��J4�r�K�X: ");
        scanf("%d", &input);
        if (input == password) 
		{
            printf("Welcome!\n");
            return 1;
        } 
		else 
		{
		    attempts++;
		    if(attempts < 3)
		    {
                printf("���~!�ЦA�դ@��!\n");
		    }
        }
    }
    return 0;
}
