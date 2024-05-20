#include <stdio.h>
#include <stdlib.h>

#define ROWS 9
#define COLS 9

int main(void) 
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
    
    int password, error = 0;

    while (error < 3) 
	{
		printf("密碼值：2024\n");
        printf("請輸入密碼:");
        scanf("%d", &password);

        if (password == 2024) 
		{
            printf("歡迎使用!\n");
            break;
        } 
		else 
		{
            error++;
            printf("密碼錯誤!請重新輸入!\n");

            if (error == 3) 
			{
                printf("錯誤已達三次，程式即將關閉!\n");
                return 0;
            }
        }
    }
    system("pause");
    system("CLS");

char seats[ROWS][COLS];
int prebooked[10][2]=
{
    {0, 1}, {1, 4}, {2, 7}, {3, 8}, {4, 2}, 
    {5, 5}, {6, 6}, {7, 3}, {8, 0}, {8, 7}
};
int i,j;
for (i=0;i<ROWS;++i) 
{
        for (j=0;j<COLS;++j) 
		{
            seats[i][j] = '-';
        }
}
for (i=0;i<10;++i) 
{
    seats[prebooked[i][0]][prebooked[i][1]] = '*';
}
char choice;
   
while(choice!='q');
{
    printf("----------[BookingSystem]----------\n");
    printf("|  a. Available seats             |\n");
    printf("|  b. Arrange for you             |\n");
    printf("|  c. Choose by yourself          |\n");
    printf("|  d. Exit                        |\n");
    printf("------------------------------------\n");
    
    printf("Enter your choice: ");
    scanf("%c",&choice);
    
}

return 0;
}
