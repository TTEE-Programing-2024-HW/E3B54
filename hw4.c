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
        printf("錯誤已達三次，請離開!\n");
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
        printf("輸入4字密碼: ");
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
                printf("錯誤!請再試一次!\n");
		    }
		    else
		    {
		        printf("錯誤!已達最大嘗試次數!\n");
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
    
    printf("請輸入學生數量 (5-10): ");
    scanf("%d", &n);
    
    if (n < 5 || n > 10) 
	{
        printf("無效指令，請重新輸入!\n");
        system("pause");
        Enter();
        return;
    }
    
    printf("輸入%d個學生的資料。\n", n);
    for (i = 0; i < n; ++i) 
	{
        printf("第%d個學生:\n", i + 1);
        printf("輸入名字: ");
        scanf("%s", students[numStudents].name);
        printf("輸入學號(6位整數): ");
        scanf("%d", &students[numStudents].id);
        if (students[numStudents].id < 100000 || students[numStudents].id > 999999) 
		{
            printf("無效指令，請重新輸入!\n");
            i--;
            continue;
        }
        printf("輸入數學分數 (0-100): "); 
        scanf("%d", &students[numStudents].math);
        if (students[numStudents].math < 0 || students[numStudents].math > 100) {
            printf("無效指令，請重新輸入!\n");
            i--; // 回到上一個學生
            continue;
        }
        printf("輸入物理成績 (0-100): ");
        scanf("%d", &students[numStudents].physics);
        if (students[numStudents].physics < 0 || students[numStudents].physics > 100) {
            printf("無效指令，請重新輸入!\n");
            i--; // 回到上一個學生
            continue;
        }
        printf("輸入英文成績 (0-100): ");
        scanf("%d", &students[numStudents].english);
        if (students[numStudents].english < 0 || students[numStudents].english > 100) {
            printf("無效指令，請重新輸入!\n");
            i--;
            continue;
        }
        
        numStudents++;
    }

    printf("已全部輸入完畢!");
    getchar();
    getchar();
}

void Display() 
{
    system("CLS");
    
    printf("姓名        學號    數學    物理    英文    平均分\n");
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
    printf("輸入要查找的學生姓名: ");
    scanf("%s", name);

    int found = 0;
    int i;
    
    for (i = 0; i < numStudents; ++i) 
	{
        if (strcmp(students[i].name, name) == 0) 
		{
            double average = (students[i].math + students[i].physics + students[i].english) / 3.0;
            printf("姓名        學號    數學    物理    英文    平均分\n");
            printf("%-12s%-8d%-8d%-8d%-8d%-8.1f\n", students[i].name, students[i].id, students[i].math, students[i].physics, students[i].english, average);
            found = 1;
            break;
        }
    }

    if (!found) 
	{
        printf("沒有找到學生 %s。\n", name);
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

    printf("姓名        學號      平均分\n");
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
