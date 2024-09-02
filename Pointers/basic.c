// Pointers workflow

#include<stdio.h>

void main(){
    int alpha, *cosmo, **delta;
    alpha=12;// init
    cosmo=&alpha;// init
    printf("\nvalue of alpha %d",alpha);//12
    printf("\naddress of alpha %d",&alpha);
    printf("\nvalue of cosmo %d",cosmo);
    printf("\nvalue via pointer cosmo %d",*cosmo);
    printf("\naddress of cosmo %d",&cosmo);
    delta=&cosmo;
    printf("\nvalue of delta %d",delta);//
    printf("\nvalue via *delta %d",*delta);
    printf("\nvalue via **delta %d",**delta);
}