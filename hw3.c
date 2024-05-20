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
int suggested_seats[4][2];
int found = 0;
  
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
    
    if (choice=='b') 
	{
        int num_seats;
        printf("How many seats do you need? (1-4): ");
        scanf("%d", &num_seats);
        if (num_seats<1||num_seats>4) 
		{
            printf("Invalid number of seats.\n");
            continue;
        }
        
        found=0; 
        
        do{
            if(num_seats <= 3) 
		    {
			int row,col;
            for(row = 0; row<ROWS&&!found;++row) 
			{
                for(col=0;col<=COLS-num_seats&&!found;++col) 
				{
                    int available=1;
                    int k;
                    for(k=0; k<num_seats;++k) 
					{
                        if(seats[row][col + k]!='-') 
						{
                            available=0;
                            break;
                        }
                    }
                        if(available) 
						{	
                            for(k=0;k<num_seats;++k) 
							{
                                suggested_seats[k][0]=row;
                                suggested_seats[k][1]=col + k;
                            }
                            found=1;
                        }
                }
            }
        } 
		else {
			    int row,col;
                for(row = 0; row<ROWS&&!found;++row) 
				{
                    for(col=0;col<=COLS-4 && !found;++col) 
					{
                        int available=1;
                        int k;
                        for(k=0;k<4;++k) 
						{
                            if(seats[row][col + k] != '-') 
							{
                                available = 0;
                                break;
                            }
                        }
                        if(available) 
						{
                            for(k = 0; k < 4; ++k) 
							{
                                suggested_seats[k][0] = row;
                                suggested_seats[k][1] = col + k;
                            }
                            found = 1;
                        }
                    }
                }
                for (row=0;row<ROWS - 1 && !found; ++row) 
				{
                    for (col=0; col<=COLS - 2 && !found; ++col) 
					{
                        int available = 1;
                        int k;
                        for (k = 0; k < 2; ++k) 
						{
                            if (seats[row][col + k] != '-' || seats[row + 1][col + k] != '-') 
							{
                                available = 0;
                                break;
                            }
                        }
                        if (available) 
						{
                            for (k = 0; k < 2; ++k) 
							{
                                suggested_seats[k][0] = row;
                                suggested_seats[k][1] = col + k;
                                suggested_seats[k + 2][0] = row + 1;
                                suggested_seats[k + 2][1] = col + k;
                            }
                            found = 1;
                        }
                    }
                }
            }

            if (found) 
			{
                for (i = 0; i < num_seats; ++i) 
				{
                    seats[suggested_seats[i][0]][suggested_seats[i][1]] = '@';
                }
                printf("//987654321\n");
                int x=9;
                for (i = 0; i < ROWS; ++i) 
				{
                    printf("%d ",x--);
                    for (j = 0; j < COLS; ++j) 
					{
                        printf("%c", seats[i][j]);
                    }
                    printf("\n");
                }

                char satisfied;
                printf("Are you satisfied with the arrangement? (y/n): ");
                scanf(" %c", &satisfied);
                if (satisfied == 'y' || satisfied == 'Y') 
				{
                    for (i = 0; i < num_seats; ++i) 
					{
                        seats[suggested_seats[i][0]][suggested_seats[i][1]] = '*';
                    }
                } 
				else 
				{
                    for (i = 0; i < num_seats; ++i) 
					{
                        seats[suggested_seats[i][0]][suggested_seats[i][1]] = '-';
                    }
                    break;
                }
            } 
			else 
			{
                printf("No suitable arrangement found.\n");
            }
	   }while (!found);
    }
    
    if (choice == 'c') 
	{
        char input[20];
        printf("Enter your seat choices (e.g., 1-2,2-9): ");
        scanf("%s", input);

        int selected_positions[4][2];
        int num_seats = 0;
        char *token = strtok(input, ",");
        int valid = 1;

        while (token != NULL && num_seats < 4) 
		{
            int row, col;
            if (sscanf(token, "%d-%d", &row, &col) != 2 || row < 1 || row > ROWS || col < 1 || col > COLS || seats[row - 1][col - 1] != '-') 
			{
                printf("Seat already booked or invalid seat choice.\n");
                valid = 0;
                break;
            }
                selected_positions[num_seats][0] = row - 1;
                selected_positions[num_seats][1] = col - 1;
                num_seats++;
                token = strtok(NULL, ",");
        }

            if (valid && num_seats > 0) 
			{
                for (i = 0; i < num_seats; ++i) 
				{
                    seats[selected_positions[i][0]][selected_positions[i][1]] = '@';
                }
                printf("//987654321\n");
                for (i = 0; i < ROWS; ++i) 
				{
					int x=9;
                    printf("%d ", x--);
                    for (j = 0; j < COLS; ++j) 
					{
                        printf("%c", seats[i][j]);
                    }
                    printf("\n");
                }
                printf("Press any key if the selection is correct.");
                getchar();
                getchar();
                for (i = 0; i < num_seats; ++i) 
				{
                    seats[selected_positions[i][0]][selected_positions[i][1]] = '*';
                }
            }
    }
}while(choice!='q');

return 0;
}
