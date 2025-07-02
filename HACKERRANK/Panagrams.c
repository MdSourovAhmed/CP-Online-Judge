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


/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

/*
 * To return the string from the function, you should either do static allocation or dynamic allocation
 *
 * For example,
 * char* return_string_using_static_allocation() {
 *     static char s[] = "static allocation of string";
 *
 *     return s;
 * }
 *
 * char* return_string_using_dynamic_allocation() {
 *     char* s = malloc(100 * sizeof(char));
 *
 *     s = "dynamic allocation of string";
 *
 *     return s;
 * }
 *
 */
char* pangrams(char* s) {
    int *fr=calloc(26, sizeof(int));
    for(int i=0;s[i];++i){
        if(s[i]>='a'&&s[i]<='z')fr[s[i]-'a']++;
        else fr[s[i]-'A']++;
    }
    for(int i=0;i<26;++i)if(!fr[i])return "not pangram";
    return "pangram";
}

int main()
{
    char* s = calloc(1024,sizeof(char));
    scanf("%[^\n]s",s);

    printf("%s\n", s);
    char* result = pangrams(s);

    printf("%s\n", result);

    return 0;
}