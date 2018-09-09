#include <stdio.h>
int isVowel(char C)
{
    if(C=='a'||C=='e'||C=='i'||C=='o'||C=='u'||C=='A'||C=='E'||C=='I'||C=='O'||C=='U')
        return 1;
    return 0;    
}
int main()
{
    char S[100];
    int N;
    fgets(S,100,stdin);
    N=strlen(S);
    for(int i=0;i<N;i++)
    {
        if(!isVowel(S[i]))
            printf("%c",S[i]);
        if(S[i]==' ')
            continue;
    }
}
