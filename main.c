#include <stdio.h>
#include <stdlib.h>

#include <mach/mach_error.h>

int main(int argc, char const **argv)
{
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <error>\n", argv[0]);
        return EXIT_FAILURE;
    }

    int code = (int)strtoul(argv[1], NULL, 0);
    char const *error = mach_error_string(code);
    puts(error);

    return EXIT_SUCCESS;
}
