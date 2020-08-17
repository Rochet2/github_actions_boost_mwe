#include <iostream>
#include <boost/filesystem.hpp>
using namespace boost::filesystem;

int main(int argc, char* argv[])
{
  std::cout << argv[0] << " " << file_size(argv[0]) << '\n';
  return 0;
}
