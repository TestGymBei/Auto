# include "functions_auto.h"

car_t newcar(enum marke M, int v, enum bool a, int d){
		car_t car0;
		car0.brand = M;
		car0.vmax = v;
		car0.abs = a;
		car0.doors = d;

		return car0;

	}

int price (car_t car){

		enum marke M = car.brand;
		int v = car.vmax;
		enum bool a = car.abs;
		int d = car.doors;

		int estimate = v*50*d;

		if(a == true){
			estimate += 5000;
		}

		if(M == PORSCHE){
			estimate *= 2;
		}
		else if (M == LAMBO){
			estimate *= 20;
		}

		return estimate;

	}
