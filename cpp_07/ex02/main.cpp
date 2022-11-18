//
// Created by Spider Chung on 11/18/22.
//

#include "Array.hpp"


int main() {
    {
        std::cout << "--------Integer Array-----------" << std::endl;

        Array<int> ar;

        std::cout << "Empty int array size: " << ar.size() << std::endl;

        Array<int> intArray(3);
        std::cout << "intArray size: " << intArray.size() << std::endl;

        intArray[0] = 1;
        intArray[1] = 2;
        intArray[2] = 3;
        intArray.printArray();

        try {
            std::cout << intArray[10] << std::endl;
        } catch (std::exception & e) {
            std::cout << e.what() << std::endl;
        }

        std::cout << "--------------" << std::endl;

        Array<int> newIntArray = intArray;

        newIntArray.printArray();

        std::cout << "--------------" << std::endl;

        Array<int> array1(3);
        array1[0] = 5;
        array1[1] = 8;
        array1[2] = 20;

        std::cout << "array1 = ";
        array1.printArray();

        Array<int> array2(3);
        array2[0] = 10;
        array2[1] = 25;
        array2[2] = 55;

        std::cout << "array2 = ";

        array2.printArray();

        array1 = array2;

        std::cout << "array1 = ";

        array1.printArray();
    }

    {
        std::cout << "--------Float Array-----------" << std::endl;

        Array<float> ar;

        std::cout << "Empty float array size: " << ar.size() << std::endl;

        Array<float> floatArray(3);
        std::cout << "Float array size: " << floatArray.size() << std::endl;

        floatArray[0] = 1.2f;
        floatArray[1] = 2.56f;
        floatArray[2] = 3.85f;
        floatArray.printArray();

        try {
            std::cout << floatArray[10] << std::endl;
        } catch (std::exception & e) {
            std::cout << e.what() << std::endl;
        }

        std::cout << "--------------" << std::endl;

        Array<float> newFloatArray(floatArray);

        newFloatArray.printArray();

        std::cout << "--------------" << std::endl;

        Array<float> array1(3);
        array1[0] = 5.1f;
        array1[1] = 8.1f;
        array1[2] = 20.1f;

        std::cout << "array1 = ";
        array1.printArray();

        Array<float> array2(3);
        array2[0] = 10.2f;
        array2[1] = 25.3f;
        array2[2] = 55.8f;

        std::cout << "array2 = ";

        array2.printArray();

        array1 = array2;

        std::cout << "array1 = ";

        array1.printArray();
    }

    {
        std::cout << "--------String Array-----------" << std::endl;

        Array<std::string> ar;

        std::cout << "Empty string array size: " << ar.size() << std::endl;

        Array<std::string> ar1(3);

        std::cout << "String array size: " << ar1.size() << std::endl;

        Array<std::string> stringArray(3);

        stringArray[0] = "Hello";
        stringArray[1] = "My";
        stringArray[2] = "Friend";
        stringArray.printArray();

        try {
            std::cout << stringArray[10] << std::endl;
        } catch (std::exception & e) {
            std::cout << e.what() << std::endl;
        }

        std::cout << "--------------" << std::endl;

        Array<std::string> newStringArray(stringArray);
        newStringArray.printArray();

        std::cout << "--------------" << std::endl;

        Array<std::string> strArray1(3);
        strArray1[0] = "la";
        strArray1[1] = "la";
        strArray1[2] = "land";

        std::cout << "array1 = ";
        strArray1.printArray();

        Array<std::string> strArray2(3);
        strArray2[0] = "a";
        strArray2[1] = "b";
        strArray2[2] = "c";

        std::cout << "array2 = ";

        strArray2.printArray();

        strArray1 = strArray2;

        std::cout << "array1 = ";

        strArray1.printArray();
    }
    return 0;
}
