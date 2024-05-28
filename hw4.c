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
        Menu();
        
        char choice;
        scanf(" %c", &choice);

         switch (choice) 
		 {
            case 'a':
                Enter();
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
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
            system("pause");
            return 1;
        } 
		else 
		{
		    attempts++;
		    if(attempts < 3)
		    {
                printf("���~!�ЦA�դ@��!\n");
		    }
		    else
		    {
		        printf("���~!�w�F�̤j���զ���!\n");
		        return 0;
		    }	 
        }
    }
    return 0;
}

void Menu() 
{
    printf("------------[Grade System]----------\n");
    printf("|  a. Enter student grades       |\n");
    printf("|  b. Display student grades     |\n");
    printf("|  c. Search for student grades  |\n");
    printf("|  d. Grade ranking              |\n");
    printf("|  e. Exit system                |\n");
    printf("-----------------------------------\n");
    printf("Enter your choice: ");
}

void Enter() 
{
    system("CLS");
    
    int n,i;
    
    printf("�п�J�ǥͼƶq (5-10): ");
    scanf("%d", &n);
    
    if (n < 5 || n > 10) 
	{
        printf("�L�ī��O�A�Э��s��J!\n");
        system("pause");
        Enter();
        return;
    }
    
    printf("��J%d�Ӿǥͪ���ơC\n", n);
    for (i = 0; i < n; ++i) 
	{
        printf("��%d�Ӿǥ�:\n", i + 1);
        printf("��J�W�r: ");
        scanf("%s", students[numStudents].name);
        printf("��J�Ǹ�(6����): ");
        scanf("%d", &students[numStudents].id);
        if (students[numStudents].id < 100000 || students[numStudents].id > 999999) 
		{
            printf("�L�ī��O�A�Э��s��J!\n");
            i--;
            continue;
        }
        printf("��J�ƾǤ��� (0-100): "); 
        scanf("%d", &students[numStudents].math);
        if (students[numStudents].math < 0 || students[numStudents].math > 100) {
            printf("�L�ī��O�A�Э��s��J!\n");
            i--; // �^��W�@�Ӿǥ�
            continue;
        }
        printf("��J���z���Z (0-100): ");
        scanf("%d", &students[numStudents].physics);
        if (students[numStudents].physics < 0 || students[numStudents].physics > 100) {
            printf("�L�ī��O�A�Э��s��J!\n");
            i--; // �^��W�@�Ӿǥ�
            continue;
        }
        printf("��J�^�妨�Z (0-100): ");
        scanf("%d", &students[numStudents].english);
        if (students[numStudents].english < 0 || students[numStudents].english > 100) {
            printf("�L�ī��O�A�Э��s��J!\n");
            i--;
            continue;
        }
        
        numStudents++;
    }

    printf("�w������J����!");
    getchar();
    getchar();
}

