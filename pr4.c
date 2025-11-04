#include <stdio.h>
#include <string.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    char arr[102];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%s", arr);
        for (int j = 0; j < strlen(arr); j++)
        {
            sum += arr[j] - '0';
        }
    }
    if (sum % 3 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}

