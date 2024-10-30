# Customer Address Management in C++

This project demonstrates how to create a nested structure in C++ using separate header, source, and main files. The main objective is to represent a `Customer` entity with an `Address` structure, encapsulating basic customer details along with address information.

## Project Structure

The project is divided into three main files:
- **Customer.h**: Defines the `Customer` and `Address` structures.
- **Customer.cpp**: Source file for potential function definitions related to `Customer`. This file may be left empty if no additional functions are added.
- **main.cpp**: Initializes and outputs a complete `Customer` object.

### Structure Details
1. **Address Structure**:
   - `street` (string): Street address.
   - `city` (string): City name.
   - `zipCode` (int): Postal code.

2. **Customer Structure**:
   - `name` (string): Customer name.
   - `id` (int): Customer ID.
   - `address` (Address): Nested `Address` structure with details.

## How to Compile and Run

### Prerequisites
- C++ compiler (e.g., `g++`).

### Compilation Instructions
To compile the project, navigate to the project directory and run the following command:

```bash
g++ main.cpp Customer.cpp -o CustomerApp
