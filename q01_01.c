// 12S21015 - Sitogab Antonio Octavianus Girsang

#include <stdio.h>
#include <string.h>

int main(int _argc, char **_argv)
{

  int j,i,x,len,temp;
  char str[100],nstr[len-x];
    x=1;
    gets(str);
    len = strlen(str);
    
    for (i = 0; i < len; i++)
    {   
        if (str[i]==','){
           x++;
        }
    }
    for (i = 0; i < len; i++)
    {   
        if (str[i]!=','){
           nstr[j]=str[i];
           j++;
        }
    }
    for (i = 0; i < x; i++)
    {
        for(j = i + 1; j < x; j++)
        {
            if (nstr[i] > nstr[j])
            {
                temp = nstr[i];
                nstr[i] = nstr[j];
                nstr[j] = temp;
            }
        }
    }
    for (i = 0; i < x; i++)
    {
        if(i!=x-1){
            printf("%c,", nstr[i]);
        } else {
            printf("%c", nstr[i]);
        }
    }


  return 0;
}



