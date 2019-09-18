#include<stdio.h>
int main()
{
    char day[4],sbl[4];

    int d,h,m,s,ed,eh,em,es,ts,ts1,est;

    int dd,dh,dm,ds,ext;

    scanf("%s %d",&day,&d);

    scanf("%d %s %d %s %d",&h,&sbl,&m,&sbl,&s);

    scanf("%s %d",&day,&ed);

    scanf("%d %s %d %s %d",&eh,&sbl,&em,&sbl,&es);

    ts = d *86400 + h * 3600 + m * 60 + s;

    ts1 = ed *86400 + eh * 3600 + em * 60 + es;

    est = ts1 - ts;

    dd = est / 86400;

    ext = est % 86400;

    dh = ext / 3600;

    ext = ext % 3600;

    dm = ext / 60;

    ext = ext % 60;

    ds = ext;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",dd,dh,dm,ds);

    return 0;


}
