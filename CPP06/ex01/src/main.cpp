#include "../include/Serialize.hpp"
#include <iostream>

int main(void) {
  Data data = {"hello", 42, "world"};
<<<<<<< HEAD
    Data* originalPtr = &data;

  std::cout << "Original Data: " << originalPtr->s1 << ", " << originalPtr->i << ", " << originalPtr->s2 << std::endl;
  std::cout << "Original Pointer Address: " << originalPtr << std::endl;

  uintptr_t serializedValue = Serialize::serialize(originalPtr);
  std::cout << "\nSerialized Value (uintptr_t): " << serializedValue << std::endl;

  Data* deserializedPtr = Serialize::deserialize(serializedValue);

  std::cout << "\nDeserialized Data: " << deserializedPtr->s1 << ", " << deserializedPtr->i << ", " << deserializedPtr->s2 << std::endl;
  std::cout << "Deserialized Pointer Address: " << deserializedPtr << std::endl;
  if (originalPtr == deserializedPtr) {
    std::cout << "\n✅ Success: Pointers are identical!" << std::endl;
  } else {
    std::cout << "\n❌ Failure: Pointers are different." << std::endl;
  }
=======
  std::cout << "s1: " << data.s1 << " - value: " << data.i
            << " - s2: " << data.s2 << std::endl;
  uintptr_t seriData = Serialize::serialize(&data);
  std::cout << "s1: " << data.s1 << " - value: " << data.i
            << " - s2: " << data.s2 << std::endl;
  std::cout << "Data serialize: " << seriData << std::endl;
  Data *deseData = Serialize::deserialize(seriData);
  std::cout << "s1: " << deseData->s1 << " - value: " << deseData->i
            << " - s2: " << deseData->s2 << std::endl;
    std::cout << "Data serialize: " << seriData << std::endl;
>>>>>>> 77865698d07d5c6a4de48da70cc633f6ca211f15

  return 0;

}
