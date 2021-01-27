
#ifdef _WIN32
#ifdef csv_read_EXPORTS
#define CSV_READ_EXPORTS __declspec(dllexport)
#else
#define CSV_READ_EXPORTS __declspec(dllimport)
#endif
#else
#define CSV_READ_EXPORTS
#endif

extern "C"
{
  CSV_READ_EXPORTS void read_csv(char *file);
}