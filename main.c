#include <stdio.h>
#include <math.h>
//

int main()
{
    float  r, area,circ;
    printf(" enter the radius of the circle ");
    //bu scanf de r yi girdi�imizde isleme orada basliyor yani hangi de�eri gireceksen scanf de onu tanitmamiz yeterli.
    scanf("%f",&r);
    area= M_PI*r*r;
    circ= M_PI*r*2;
    // \n ifadesi art arda gelen yerleri alt satira ge�iriyor ve istedigimiz yere koyabiliriz. C�mlenin ortasina da koyabiliriz.
    printf(" the area of a circle with radius %.3f is %.3f \n",r,area);
    printf("the circumference of a circle with radius %.3f is %.3f",r,circ );

    return 0;
}
