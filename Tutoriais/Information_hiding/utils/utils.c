#include "utils.h"
#include "../geometry/rectangles.h"

void rectangle_center_of_mass(rectangle __reference, double point[2]) {

    point[0] = 0;   point[1] = 0;

    point[0] = (rectangle_get_x(__reference) + rectangle_get_w(__reference))/2; 
    point[1] = (rectangle_get_y(__reference) + rectangle_get_h(__reference))/2; 

}