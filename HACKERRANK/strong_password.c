#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Max(int a, int b)
{
    return a > b ? a : b;
}
int minimumNumber(int n, char *password)
{
    // Return the minimum number of characters to make the password strong
    char sp_char[] = "!@#$%^&*()-+";
    int *fr = calloc(4, sizeof(int));
    for (int i = 0; i < n; ++i)
    {
        char c = password[i];
        for (int j = 0; sp_char[j]; j++)
            if (sp_char[j] == c)
                fr[0]++;
        if (c >= 'a' && c <= 'z')
            fr[1]++;
        if (c >= 'A' && c <= 'Z')
            fr[3]++;
        if (c >= '0' && c <= '9')
            fr[2]++;
    }
    int ans = 0;
    for (int i = 0; i < 4; ++i)
        if (!fr[i])
            ans++;
    return (n >= 6 ? ans : Max(ans, 6 - n));
}

int main()
{
    int n;
    scanf("%d", &n);
    char *password = calloc(n, sizeof(char));
    scanf("%s", password);
    int answer = minimumNumber(n, password);

    printf("%d\n", answer);

    return 0;
}