#include <stdio.h>

struct vector{
    int i;
    int j;
};

struct vector sumvector(struct vector v1, struct vector v2 ){
    struct vector v3 = {v1.i + v2.i, v1.j + v2.j}; // Sum the i and j components of the vectors
    return v3; // Return the resulting vector
}


int main(){
    struct vector v1 = {1, 2};
    struct vector v2 = {3, 4};
    struct vector v3 = sumvector(v1, v2);
    printf("The value of vector v3 is %di + %dj\n", v3.i, v3.j); // Print the vector values
    
    return 0;
}