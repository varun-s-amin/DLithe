#include <iostream>
#include <vector>
using namespace std;

// Define a struct to represent the dynamic array
typedef struct {
    float* salaries; // Pointer to store the salaries
    int size;        // Current size of the vector
    int capacity;    // Current capacity of the vector
    int max_size;    // Maximum size of the vector
} vector_t;

// Function to create a new vector
vector_t* createVector() {
    // Allocate memory for the vector structure
    vector_t* vector = (vector_t*)malloc(sizeof(vector_t));
    
    // Initialize the vector's capacity
    vector->capacity = 10;
    vector->size = 0;
    vector->max_size = 100000;
    
    // Allocate memory for the salaries array
    vector->salaries = (float*)malloc(sizeof(float) * vector->capacity);
    return vector;
}

// Function to deallocate the vector
void emptyVector(vector_t* vector) {
    // Free the salaries array
    free(vector->salaries);
    vector->salaries = nullptr;
    
    // Free the vector structure
    free(vector);
    vector = nullptr;
}

// Function to add a new salary to the vector
void push_back(vector_t* vector, float salary) {
    // Check if the current capacity is exceeded
    if (vector->capacity <= vector->size) {
        // Increase capacity if possible
        if (vector->capacity + 10 <= vector->max_size) {
            vector->capacity += 10;
            
            // Reallocate memory for the salaries array
            vector->salaries = (float*)realloc(vector->salaries, sizeof(float) * vector->capacity);
        } else {
            cout << "vector exhausted" << endl;
            return;
        }
    }
    
    // Add the new salary and increase the size
    vector->salaries[vector->size] = salary;
    vector->size++;
}

// Main function to test the vector operations
int main() {
    // Create a new vector
    vector_t* vector = createVector();
    
    // Print initial vector properties
    cout << "Salaries: [size=" << vector->size << ", capacity=" << vector->capacity << "]" << endl;
    
    // Add salaries to the vector
    for (int I = 1; I <= 10; I++) {
        push_back(vector, 1000.0f * I);
    }
    
    // Print updated vector properties
    cout << "Salaries: [size=" << vector->size << ", capacity=" << vector->capacity << "]" << endl;
    
    // Print all salaries in the vector
    for (int J = 0; J < vector->size; J++) {
        cout << vector->salaries[J] << " ";
    }
    cout << endl;
    
    // Deallocate the vector
    emptyVector(vector);
    return 0;
}
