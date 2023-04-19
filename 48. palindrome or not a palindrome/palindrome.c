    // write a  C proGram that will print if a number is palindrome or not palindrome.

    #include<stdio.h>

    int main()
    {

        int a=0,n,r,temp;

        printf(" Give me a Number: ");

        scanf("%d",&n);

        temp=n;
        /* here i have stored the value of
        "n" in "temp" variable. */
        while(n!=0){

        r = n % 10;
        /* to find the reminder we have mod by 10 .
        it will give me the last digit of  Number.
        */
        n = n /10;
        a = a * 10 + r;


        }
        /* suppose we have entered n= 606 as a number
        1. r=606(n)%10=6
           n= 606 (n)/10 => n= 60
            a=0(a)*10+6(r) =>a=6


        2. r= 60 (n) % 10=0
            n= 60(N)/10=>n=6
            a=6(a)*10+0 (r) => a=60


        3.r=6(n)%10 =>6
        n=6(n)/10 =>0  Beacuse we have decleared n as an Integer.
            a=60(a)*10 + 6(r)
            => a = 606

        */


        if (a==temp)
        {
            printf("%d is a Palindrome Number.",temp);
        }
        else
            printf ("%d is not a Palindrome Number.",temp);

      return 0; }


