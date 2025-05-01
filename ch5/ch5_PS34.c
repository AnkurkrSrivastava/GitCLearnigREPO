#include <stdio.h>

    float force_of_attraction(float mass1, float mass2, float g, float radius) {
    return (g * mass1 * mass2 ) / (radius * radius);
    }
    int main(){
        float mass1 = 6.0;
        float mass2 = 7.0;
        float g = 9.8;
        float radius = 2.0;
        printf("The force of attraction is %.2f\n", force_of_attraction(mass1, mass2, g, radius));
    return 0;
}