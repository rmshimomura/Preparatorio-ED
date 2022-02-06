#ifndef RECTANGLES_H_INCLUDED
#define RECTANGLES_H_INCLUDED

typedef char* string;
typedef void* rectangle;

rectangle rectangle_new();
void rectangle_destroy(rectangle __reference);

char* rectangle_get_color(rectangle __reference);
void rectangle_set_color(rectangle __reference, string __color);

double rectangle_get_x(rectangle __reference);
void rectangle_set_x(rectangle __reference, double __x);

double rectangle_get_y(rectangle __reference);
void rectangle_set_y(rectangle __reference, double __y);

double rectangle_get_w(rectangle __reference);
void rectangle_set_w(rectangle __reference, double __w);

double rectangle_get_h(rectangle __reference);
void rectangle_set_h(rectangle __reference, double __h);


#endif