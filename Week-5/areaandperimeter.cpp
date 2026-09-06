#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float a, b, c, radius, length, breadth, height, side;
    float area, perimeter, surfaceArea, volume;

    printf("Choose a shape to calculate:\n");
    printf("1. Rectangle\n");
    printf("2. Circle\n");
    printf("3. Triangle\n");
    printf("4. Cube\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Rectangle
        printf("Enter length of the rectangle: ");
        scanf("%f", &length);
        printf("Enter breadth of the rectangle: ");
        scanf("%f", &breadth);

        area = length * breadth;
        perimeter = 2 * (length + breadth);

        printf("Area of Rectangle: %.2f\n", area);
        printf("Perimeter of Rectangle: %.2f\n", perimeter);
    }
    else if (choice == 2) {
        // Circle
        printf("Enter radius of the circle: ");
        scanf("%f", &radius);

        area = 3.14 * radius * radius;
        perimeter = 2 * 3.14 * radius;

        printf("Area of Circle: %.2f\n", area);
        printf("Circumference of Circle: %.2f\n", perimeter);
    }
    else if (choice == 3) {
        // Triangle
        printf("Enter side A of the triangle: ");
        scanf("%f", &a);
        printf("Enter side B of the triangle: ");
        scanf("%f", &b);
        printf("Enter side C of the triangle: ");
        scanf("%f", &c);

        perimeter = a + b + c;
        float s = perimeter / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));  // Heron's formula

        printf("Perimeter of Triangle: %.2f\n", perimeter);
        printf("Area of Triangle: %.2f\n", area);
    }
    else if (choice == 4) {
        // Cube
        printf("Enter side length of the cube: ");
        scanf("%f", &side);

        surfaceArea = 6 * side * side;
        volume = side * side * side;

        printf("Surface Area of Cube: %.2f\n", surfaceArea);
        printf("Volume of Cube: %.2f\n", volume);
    }
    else {
        printf("Invalid choice.\n");
    }

    return 0;
}


