#ifndef FUNCTIONS_AUTO_H_
#define FUNCTIONS_AUTO_H_

enum marke {VW, PORSCHE, LAMBO};
enum bool {true, false};

typedef struct car {
		enum marke brand;
		int vmax;
		enum bool abs;
		int doors;

	}car_t;

int price ();
car_t newcar();

#endif /* FUNCTIONS_AUTO_H_ */
