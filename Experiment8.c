#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int n, m;
    // printf("the number of processes[Pi]the number of resources[Ri]:\n");
    scanf("%d %d", &n, &m);
    // printf("%d %d",n,m);

    // int * ptr= malloc((n*m)*sizeof(int));
    // while(1){

    // }
    int rog[100][100];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            rog[i][j] = 0;
        }
    }
    int flag = 1, count = 0;

    do
    {
        /* code */
        char c;
        // printf("Are there any more entries {Pi , Ri} [y/n] \n");
        scanf("%c", &c);
        if (c == 'n' || c == 'N')
        {
            flag = 0;
            break;
        }
        else
        {
            int i, j;
            // printf("Enter {Pi,Ri}");
            scanf("%d %d", &i, &j);
            rog[i-1][j-1] = 1;
        }
    } while (flag == 1);
    printf("  ");
    for (int i = 1; i <= m; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", i + 1);
        for (int j = 0; j < m; j++)
        {
            printf("%d ", rog[i][j]);
        }
        printf("\n");
    }
    return 0;
}
