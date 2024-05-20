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

    while (error<3) 
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
			fflush(stdin);
            error++;
            printf("密碼錯誤!請重新輸入!\n");

            if (error==3) 
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

int count=0,i,j;

for (i=0;i<ROWS;++i) 
{
        for (j=0;j<COLS;++j) 
		{
            seats[i][j] = '-';
        }
}

srand(time(NULL));
while (count<10) 
{
        int row = rand() % ROWS;
        int col = rand() % COLS;
        if (seats[row][col] == '-') 
		{
            seats[row][col] = '*';
            prebooked[count][0] = row;
            prebooked[count][1] = col;
            count++;
        }
}

char choice;
   
do
{
	system("CLS");
	
    printf("----------[BookingSystem]----------\n");
    printf("|  a. Available seats             |\n");
    printf("|  b. Arrange for you             |\n");
    printf("|  c. Choose by yourself          |\n");
    printf("|  d. Exit                        |\n");
    printf("------------------------------------\n");
    
    printf("Enter your choice: ");
    scanf("%c",&choice);
    
    if (choice == 'a') 
	{
		int x=9;
        printf("\\123456789\n");
        for (i=0;i<ROWS;++i) 
		{
			fflush(stdin);
            printf("%d ",x--);
            for (j=0;j<COLS;++j) 
			{
                printf("%c", seats[i][j]);
            }
                printf("\n");
        }
        printf("Press any key to return to the main menu.");
        getchar();
        getchar();
    }
    
}while(choice!='q');

return 0;
}
