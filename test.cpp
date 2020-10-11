#include "cnpy.h"
#include <cstdint>
#include <vector>

int main() {
  cnpy::npy_save("chars.npy", std::vector<char>(20), {4, 5});
  cnpy::npy_save("uchars.npy", std::vector<unsigned char>(20), {4, 5});
  cnpy::npy_save("schars.npy", std::vector<signed char>(20), {4, 5});

  cnpy::npy_save("shorts.npy", std::vector<short>(20), {4, 5});
  cnpy::npy_save("int16s.npy", std::vector<int16_t>(20), {4, 5});
  cnpy::npy_save("uint16s.npy", std::vector<uint16_t>(20), {4, 5});

  cnpy::npy_save("fp32s.npy", std::vector<float>(20), {4, 5});
  cnpy::npy_save("fp64s.npy", std::vector<double>(20), {4, 5});
  cnpy::npy_save("fp128s.npy", std::vector<long double>(20), {4, 5});

  cnpy::npy_save("comp32s.npy", std::vector<std::complex<float>>(20), {4, 5});
  cnpy::npy_save("comp64s.npy", std::vector<std::complex<double>>(20), {4, 5});
}
