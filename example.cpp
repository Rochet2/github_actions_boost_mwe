// From https://www.boost.org/doc/libs/1_74_0/libs/filesystem/doc/tutorial.html

#include <iostream>
#include <boost/filesystem.hpp>
using namespace boost::filesystem;

int main(int argc, char* argv[])
{
  std::cout << argv[0] << " " << file_size(argv[0]) << '\n';
  return 0;
}
