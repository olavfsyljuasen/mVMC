#include "ilaenv.h"

extern "C" {
int ilaenv_(int *ispec, const char *name, const char *opts,
            int *n1, int *n2, int *n3, int *n4,
            int name_len, int opts_len);
}

int ilaenv_wrap(int ispec, const char *name, const char *opts,
                int n1, int n2, int n3, int n4)
{
    return ilaenv_(&ispec, name, opts, &n1, &n2, &n3, &n4,
                   6, 1);
}
