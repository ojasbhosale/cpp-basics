#include <iostream>
using namespace std;


int main() {

    cout << "Hello, World!" << endl;

    // variables
        // ASCII values
            // A -> 65, B -> 66...Z -> 90
            // a -> 97, b -> 98...z -> 122

    // data types

        //primitive data types:
            // int, char, float, double, bool
        //derived data types:
            // array, pointer, reference, function, structure, union, enumeration    

        // int
            //int size -> 4 bytes (32 bits), 1 byte = 8 bits
            int age = 25;
            cout << "age : " << age << endl;
            cout << "size of age : " << sizeof(age) << endl;

        // char
            //char size -> 1 byte (8 bits)
            char grade = 'A';
            cout << "grade : " << grade << endl;

        // float
            //float size -> 4 bytes (32 bits)
            float PI = 3.14f;
            cout << "PI value : " << PI << endl;

        // bool
            //bool size -> 1 byte (8 bits)
            bool isSafe = false;
            cout << "isSafe : " << isSafe << endl;
            // true -> 1, false -> 0

        // double
            //double size -> 8 bytes (64 bits)
            double PI2 = 3.14159265358979323846;
            cout << "PI2 value : " << PI2 << endl;

    // operators

        // arithmetic operators
            // +, -, *, /, %
            int a = 10, b = 3;
            cout << "sum : " << a + b << endl;
            cout << "difference : " << a - b << endl;
            cout << "product : " << a * b << endl;
            cout << "division : " << a / b << endl;
            cout << "remainder : " << a % b << endl; // % -> modulus operator 

            // division
                // int / int -> int
                cout << "division : " << 10 / 3 << endl; // 3

                // float / int -> float
                // int / float -> float
                // float / float -> float
                // double / double -> double    
                // double / int -> double
                // double / float -> double

        // relational operators

            // >, <, >=, <=, ==, !=
            int x = 10, y = 20;
            cout << "is x greater than y : " << (x > y) << endl; //false -> 0
            cout << "is x less than y : " << (x < y) << endl; //true -> 1
            cout << "is x greater than or equal to y : " << (x >= y) << endl; //false -> 0
            cout << "is x less than or equal to y : " << (x <= y) << endl; //true -> 1
            cout << "is x equal to y : " << (x == y) << endl; //false -> 0
            cout << "is x not equal to y : " << (x != y) << endl; //true -> 1

        // logical operators

            // OR -> ||, AND -> &&, NOT -> !
            // OR -> if any one is true, then result is true
            // AND -> if both are true, then result is true
            // NOT -> reverse the result

        // unary operators

            // increment -> ++, decrement -> --
            int z = 5;
            cout << "z : " << z << endl;
            cout << "z++ : " << z++ << endl; //5
            cout << "z : " << z << endl; //6
            cout << "++z : " << ++z << endl; //7
            cout << "z : " << z << endl; //7  

            

    return 0;
}

    