#include <stdio.h>
#include <string.h>
#include "functions_auto.h"

int main (){

car_t cararray[3];

cararray[0] = newcar(VW,190,true,5);;
cararray[1] = newcar(LAMBO,170,false,3);
cararray[2] = newcar(PORSCHE,300,true,4);


printf("Preis VW: %d\n", price(cararray[0]));
printf("Preis LAMBO: %d\n", price(cararray[1]));
printf("Preis PORSCHE: %d\n", price(cararray[2]));

int price_tot;
int i;

for(i=0;i<3;i++){
	price_tot += price(cararray[i]);
}

printf("Der Gesamtpreis ist: %d\n", price_tot);

car_t *newlambo;
newlambo = &(cararray[1]);
newlambo->abs = true;
newlambo->vmax = 300;
newlambo->doors = 8;

printf("Werbung fuer den neuen Lambo: %d km_h und %d Tueren!\n", newlambo->vmax, newlambo->doors);


return 0;
}
