#include <stdlib.h>
#include <string.h>
#include "rectangles.h"
#include "../utils/utils.h"

#define __NULL_DOUBLE__ -__DBL_MAX__

typedef struct {

    double x, y, w, h;
    string color;

} rect;


rectangle rectangle_new() {

    rect *rect_new = calloc(1, sizeof(rect));
    rect_new->color = calloc(1, sizeof(char));  // calloc opcional devido à condição da linha 45
    return rect_new;

}

void rectangle_destroy(rectangle __reference) {

    if (__reference == NULL) return;
    
    free(((rect*)__reference)->color);
    free(__reference);

}

string rectangle_get_color(rectangle __reference) {

    return (__reference == NULL) ? "NullReferenceException" : ((rect*)__reference)->color ;

}

void rectangle_set_color(rectangle __reference, string __color) {

    if (__reference == NULL) return;

    rect *__rectangle = __reference;

    if (__rectangle->color == NULL) {

        __rectangle->color = calloc(strlen(__color) + 1, sizeof(char));

    }else {

        __rectangle->color = realloc(__rectangle->color, strlen(__color) + 1);

    }

    strcpy(__rectangle->color, __color);

}

double rectangle_get_x(rectangle __reference) {

    return (__reference == NULL) ? __NULL_DOUBLE__ : ((rect*)__reference)->x ;

}

void rectangle_set_x(rectangle __reference, double __x) {

    if (__reference != NULL) ((rect*)__reference)->x = __x;

}

double rectangle_get_y(rectangle __reference) {

    return (__reference == NULL) ? __NULL_DOUBLE__ : ((rect*)__reference)->y ;

}

void rectangle_set_y(rectangle __reference, double __y) {

    if (__reference != NULL) ((rect*)__reference)->y = __y;

}

double rectangle_get_w(rectangle __reference) {

    return (__reference == NULL) ? __NULL_DOUBLE__ : ((rect*)__reference)->w ;

}

void rectangle_set_w(rectangle __reference, double __w) {

    if (__reference != NULL) ((rect*)__reference)->w = __w;

}

double rectangle_get_h(rectangle __reference) {

    return (__reference == NULL) ? __NULL_DOUBLE__ : ((rect*)__reference)->h ;

}

void rectangle_set_h(rectangle __reference, double __h) {

    if (__reference != NULL) ((rect*)__reference)->h = __h;

}