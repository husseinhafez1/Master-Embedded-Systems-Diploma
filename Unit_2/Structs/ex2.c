#include<stdio.h>

struct Sdistance {
	float feet;
	float inch;
};

void scanDistance(struct Sdistance *d) {
	printf("\nEnter information for 1st distance\n");
	printf("Enter feet: ");
	scanf("%f", &(d->feet));
	printf("Enter inch: ");
	scanf("%f", &(d->inch));
}

int main() {
	struct Sdistance d1;
	struct Sdistance d2;
	scanDistance(&d1);
	scanDistance(&d2);
	struct Sdistance res;
	res.feet = d1.feet + d2.feet;
	res.inch = d1.inch + d2.inch;
	if (res.inch >= 12) {
		res.feet++;
		res.inch-=12;
	}
	printf("Sum of distances=%.1f'-%.1f\"", res.feet, res.inch);
	return 0;
}