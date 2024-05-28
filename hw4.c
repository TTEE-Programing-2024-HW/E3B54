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
            case 'b':
                Display();
                break;
            case 'c':
                Search();
                break;
            case 'd':
                Ranking();
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

void Display() 
{
    system("CLS");
    
    printf("�m�W        �Ǹ�    �ƾ�    ���z    �^��    ������\n");
    printf("----------------------------------------------------\n");

    int i;
    for (i = 0; i < numStudents; ++i) 
	{
        double average = (students[i].math + students[i].physics + students[i].english) / 3.0;
        printf("%-12s%-8d%-8d%-8d%-8d%-8.1f\n", students[i].name, students[i].id, students[i].math, students[i].physics, students[i].english, average);
    }

    printf("Press any key to return to the menu...");
    getchar(); 
    getchar(); 
}

void Search() {
    system("CLS");
    
    char name[50];
    printf("��J�n�d�䪺�ǥͩm�W: ");
    scanf("%s", name);

    int found = 0;
    int i;
    
    for (i = 0; i < numStudents; ++i) 
	{
        if (strcmp(students[i].name, name) == 0) 
		{
            double average = (students[i].math + students[i].physics + students[i].english) / 3.0;
            printf("�m�W        �Ǹ�    �ƾ�    ���z    �^��    ������\n");
            printf("%-12s%-8d%-8d%-8d%-8d%-8.1f\n", students[i].name, students[i].id, students[i].math, students[i].physics, students[i].english, average);
            found = 1;
            break;
        }
    }

    if (!found) 
	{
        printf("�S�����ǥ� %s�C\n", name);
    }
    printf("Press any key to return to the menu...");
    getchar(); 
    getchar(); 
}

void Ranking() 
{
    system("CLS");
    int i,j;
    
    for (i = 0; i < numStudents - 1; ++i) 
	{
        for (j = 0; j < numStudents - i - 1; ++j) 
		{
            double avg1 = (students[j].math + students[j].physics + students[j].english) / 3.0;
            double avg2 = (students[j + 1].math + students[j + 1].physics + students[j + 1].english) / 3.0;
            
            if (avg1 < avg2) 
			{
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    printf("�m�W        �Ǹ�      ������\n");
    printf("---------------------------\n");
    for (i = 0; i < numStudents; ++i) 
	{
        double average = (students[i].math + students[i].physics + students[i].english) / 3.0;
        printf("%-12s%-8d%-8.1f\n", students[i].name, students[i].id, average);
    }
    printf("Press any key to return to the menu...");
    getchar(); 
    getchar(); 
}
