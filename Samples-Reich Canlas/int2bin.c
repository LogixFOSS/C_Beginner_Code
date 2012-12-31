#include <stdio.h>
#include <stdlib.h>

char *int2bin(int a);

int main()
{
    int dec;
    char* bin;
    int cnt=0,cnt2=0;

    printf("Enter a decimal integer: ");
    scanf("%d",&dec);
    bin = int2bin(dec);
    printf("\n\nThe binary equivalent is: ");

    for (cnt=0; cnt<=31; cnt++)
    {
        //find the first index where a '1' can be found
        if (bin[cnt]=='1')
        {
            for (cnt2 = cnt; cnt2 < 32; cnt2++)
            {
                printf("%c",bin[cnt2]);
            }
            cnt=31;
        }

    }

    getchar();
    return (0);
}




char *int2bin(int a)
{
 char *str,*tmp;
 int cnt = 31;
 str = (char *) malloc(33); /*32 + 1 , becoz its a 32 bit bin number*/
 tmp = str;
 while ( cnt > -1 ){
      str[cnt]= '0';
      cnt--;
 }
 cnt = 31;
 while (a >= 1)
 {
       if (a%2==1)
       {
           str[cnt] = '1';
       }

      cnt--;
      a = a/2 ;
 }

 return tmp;

}
