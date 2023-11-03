#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Cant't write to %s\n"
#define ERR_NOCLOSE "Error: Cant't close fd %s\n"
#define PERMISSIONS (S_IRUSR | 
