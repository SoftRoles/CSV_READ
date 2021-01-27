#include <iostream>
// #include <csv2/reader.hpp>

#include <windows.h>
#include <winbase.h>
#include <windef.h>
#include <stdio.h>

#define CSV_READ_API_DLL "csv_read.dll"
typedef void (*TestFunc)(char *);


int main()
{

  int status = 0;
  TestFunc _TestFunc;
  HINSTANCE testLibrary = LoadLibrary(CSV_READ_API_DLL);

  if (testLibrary)
  {
    printf("Here1");
    _TestFunc = (TestFunc)GetProcAddress(testLibrary, "read_csv");
    
    if (_TestFunc)
    {
      printf("Here2");
      _TestFunc("dd");
    }
    FreeLibrary(testLibrary);
  }
  return 0;
  // csv2::Reader<csv2::delimiter<','>,
  //              csv2::quote_character<'"'>,
  //              csv2::first_row_is_header<false>,
  //              csv2::trim_policy::trim_whitespace> csv;

  // if (csv.mmap("foo.csv")) {
  //   std::cout << csv.rows() << std::endl;
  //   std::cout << csv.cols() << std::endl;
  //   const auto header = csv.header();
  //   for (const auto row: csv) {
  //     for (const auto cell: row) {
  //       // Do something with cell value
  //       std::string value;
  //       cell.read_value(value);
  //       std::cout << value << std::endl;
  //     }
  //   }
  // }
}