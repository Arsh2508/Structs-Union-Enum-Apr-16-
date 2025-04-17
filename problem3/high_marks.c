#include <stdio.h>
#include "student.h"

void high_marks(struct student* st, const int n){
	int max_i = 0; 
	for(int i = 1; i < n; ++i){
		if(st[i].marks > st[max_i].marks){
			max_i = i;
		}
	}
	printf("\nStudent with highest marks: %s (%d years) -  %.2f\n", st[max_i].name, st[max_i].age, st[max_i].marks);
}
