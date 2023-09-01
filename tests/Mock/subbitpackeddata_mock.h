#ifndef _KT_SUBBITPACKEDDATA_H_
#define _KT_SUBBITPACKEDDATA_H_

#include <cstdint>

namespace kt
{
/**
 * Mock implementation of SubBitPackedData that does nothing to avoid potential devisions by 0
 */
class SubBitPackedData
{
private:
  SubBitPackedData() {}

public:
  template <typename T>
  static inline uint16_t Get(const T &data, uint32_t divisor, uint16_t modulo)
  {
    return 0;
  }

  template <typename T>
  static inline void Set(T &data, uint32_t power, uint16_t modulo, uint16_t state)
  {
  }
};

}  // namespace kt

#endif  //_KT_SUBBITPACKEDDATA_H_
