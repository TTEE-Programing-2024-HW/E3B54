#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

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
                break;
            }
        }
    }
    printf("密碼值：%d\n", password);

    system("pause");
    system("CLS");

    while (1) 
	{
        printf("--------------------------\n");
        printf("|  a. 畫出直角三角形     |\n");
        printf("|  b. 顯示乘法表         |\n");
        printf("|  c. 結束               |\n");
        printf("--------------------------\n");

        char choice, triangle;
        int i,j;
        printf("請選擇使用項目:");
        fflush(stdin);
        scanf(" %c", &choice);

        if (choice == 'a' || choice == 'A') 
		{
            system("CLS");

            printf("請輸入'a'到'n'之間的一個字元：");
            fflush(stdin);
            scanf(" %c", &triangle);

            if (triangle<'a' || triangle>'n') 
			{
                printf("請輸入'a'到'n'之間的一個字元!\n");
                continue;
            } 
			else 
			{
                printf("以下是以'%c'為底的直角三角形：\n", triangle);
                int rows = triangle - 'a' + 1;
                for (i = 0;i<rows;i++) 
				{
                    for ( j = 0; j < rows - i - 1; j++) 
					{
                        printf(" ");
                    }
                    char ch = 'a';
                    for ( j = 0; j <= i; j++) 
					{
                        printf("%c", ch++);
                    }
                    printf("\n");
            }
            } 
        }
        
        int n;
        if(choice=='b'||choice=='B')
        {
        	printf("請輸入1~9的整數:");
        	scanf("%d",&n);
        	
        	if(n<1||n>9)
        	{
        		printf("警告:請輸入1~9之間的整數!\n");
        		continue;
			}
			else
			{
				printf("以下是%d*%d的乘法表:\n",n,n);
				for (i=1;i<=n;i++) 
				{
                for (j=1;j<=n;j++) 
				{
                    printf("%d*%d=%2d ",i,j,i*j);	
			    }
			    printf("\n");
		        }
           }
		    system("pause");
            system("CLS");
        }
    }
    return 0;
}

