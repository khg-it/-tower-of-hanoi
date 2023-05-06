# include <stdio.h>

void towerofhanoi(int n,char source,char destination,char spare)
{
    if(n==1)
    {
        printf("\n disk move from %c to %c",source ,destination);
    }
    else
    {
        towerofhanoi(n-1,source,spare,destination);
        towerofhanoi(1,source,destination,spare);
        towerofhanoi(n-1,spare,destination,source);
    }
}

int main()
{
    int n=3;
    towerofhanoi(n,'A','B','C');
}
