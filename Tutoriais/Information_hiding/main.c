#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "geometry/rectangles.h"
#include "utils/utils.h"

int main(int argc, char *argv[]) {

    double x = 0, 
    y = 0, 
    w = 0, 
    h = 0;

    string color = "none";

    rectangle example = rectangle_new();
    

    for (int i = 1; i < argc; i++) {

        if (!strcmp(argv[i], "-x")) {
            if (argv[++i]) {
                x = atof(argv[i]);
            }
        } else if (!strcmp(argv[i], "-y")) {
            if (argv[++i]) {
                y = atof(argv[i]);
            }
        } else if (!strcmp(argv[i], "-w")) {
            if (argv[++i]) {
                w = atof(argv[i]);
            }
        } else if (!strcmp(argv[i], "-h")) {
            if (argv[++i]) {
                h = atof(argv[i]);
            }
        } else if (!strcmp(argv[i], "-color")) {
            if (argv[++i]) {
                color = argv[i];
            }
        }

    }

    rectangle_set_x(example, x);
    rectangle_set_y(example, y);
    rectangle_set_w(example, w);
    rectangle_set_h(example, h);
    rectangle_set_color(example, color);

    printf("------------------ INFORMATION HIDDING ------------------\n\n");

    printf("x: %lf\n", rectangle_get_x(example));
    printf("y: %lf\n", rectangle_get_y(example));
    printf("w: %lf\n", rectangle_get_w(example));
    printf("h: %lf\n\n", rectangle_get_h(example));

    printf("color: %s\n\n", rectangle_get_color(example));

    printf("---------------------------------------------------------\n\n");

    double center[2]; 
    rectangle_center_of_mass(example, center);

    printf("center of mass: (%.2lf, %.2lf)\n\n", *center, *(center + 1));

    printf("---------------------------------------------------------\n");

    rectangle_destroy(example);

}