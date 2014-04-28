#ifndef SRS_WIN32_SYS_UIO_HPP
#define SRS_WIN32_SYS_UIO_HPP

#include <windows.h>

struct iovec {
    u_long iov_len;
    char *iov_base;
};

#define inline __inline
static inline int writev(int sock, struct iovec *iov, int nvecs)
{
    return -1;
}

#endif
