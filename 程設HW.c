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
        printf("�п�J�K�X:");
        scanf("%d", &password);

        if (password == 2024) 
		{
            printf("�w��ϥ�!\n");
            break;
        } 
		else 
		{
            error++;
            printf("�K�X���~!�Э��s��J!\n");

            if (error == 3) 
			{
                printf("���~�w�F�T���A�{���Y�N����!\n");
                break;
            }
        }
    }
    printf("�K�X�ȡG%d\n", password);

    system("pause");
    system("CLS");

    while (1) 
	{
        printf("--------------------------\n");
        printf("|  a. �e�X�����T����     |\n");
        printf("|  b. ��ܭ��k��         |\n");
        printf("|  c. ����               |\n");
        printf("--------------------------\n");

        char choice, triangle;
        int i,j;
        printf("�п�ܨϥζ���:");
        fflush(stdin);
        scanf(" %c", &choice);

        if (choice == 'a' || choice == 'A') 
		{
            system("CLS");

            printf("�п�J'a'��'n'�������@�Ӧr���G");
            fflush(stdin);
            scanf(" %c", &triangle);

            if (triangle<'a' || triangle>'n') 
			{
                printf("�п�J'a'��'n'�������@�Ӧr��!\n");
                continue;
            } 
			else 
			{
                printf("�H�U�O�H'%c'�����������T���ΡG\n", triangle);
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
        	printf("�п�J1~9�����:");
        	scanf("%d",&n);
        	
        	if(n<1||n>9)
        	{
        		printf("ĵ�i:�п�J1~9���������!\n");
        		continue;
			}
			else
			{
				printf("�H�U�O%d*%d�����k��:\n",n,n);
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

