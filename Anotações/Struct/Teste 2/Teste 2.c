#include <stdio.h>

main(){

double dist;
double n;

dist = 20;
n = 1;


while (dist < 10.0)
{
    dist = dist + 1.0 / n;
    n = n + 1.0;
}
printf("Ela gastou %lf horas para andar %lf.\n",
       n / 3600, dist);


return 0;
}
