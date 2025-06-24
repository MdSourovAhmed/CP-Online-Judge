#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *hackerrankInString(char *s,char *p)
{
    // char p[] = "hackerrank";
    int l_p = strlen(p), l_s = strlen(s), len = l_p + 1 + l_s;
    char nw_s[len];
    strcpy(nw_s, p);
    strcat(nw_s, "#");
    strcat(nw_s, s);
    // printf("%s",nw_s);
    int *lps = calloc(len, sizeof(int));
    for (int i = 1; i < len; ++i)
    {
        int prev_ind = lps[i - 1];
        while (prev_ind && nw_s[i] != nw_s[prev_ind])
            prev_ind = lps[prev_ind - 1];

        lps[i] = prev_ind + (nw_s[i] == nw_s[prev_ind]);
    }
    for (int i = 0; i < len; ++i)
        if (lps[i] == l_p)
            return "YES";
    return "NO";
}

int main()
{
    char s[20],p[10];
    printf("Enter text and pattern to see if a match is present: \n");
    scanf("%s %s", s,p);
    char *ans=hackerrankInString(&s,&p);
    printf("%s\n",ans);
    return 0;
}