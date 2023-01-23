#include <iostream>

int main() {
    int *pData = new int;

    int *pNewData = new int(10);

    *pData = 5;
    std::cout << "pData: " << *pData << std::endl;
    std::cout << "pNewData: " << *pNewData << std::endl;

    return 0;
}


//int main(int argc, char* argv[]) {
//    std::cout << "Hello, Inguk!" << std::endl;
//    return 0;
//}