#include <stdio.h>

void volume(int r);

int main (void){
    int radius;

    printf("radius: ");
    scanf("%d", &radius);
    volume(radius);

    return 0;
}

void volume(int r){
    float v = 4.0f/3.0f * 3.14f * r * r * r;
    printf("Volume of Sphere: %0.2f m3\n", v);
}

