void print_error(int errnum) {
    rsize_t size = strerrorlen_s(errnum) + 1;
    char msg[size];
    if (strerror_s(msg, size, errnum) != 0) {
        fputs(msg, stderr);
    }
    else {
        fputs("unknown error", stderr);
    }
}