FROM gcc:4.9 AS gcc
COPY main.c /usr/src/memtest/main.c
WORKDIR /usr/src/memtest
RUN gcc -static -static-libgcc -std=c99 -o memtest main.c

FROM scratch

COPY --from=gcc /usr/src/memtest/memtest /memtest
CMD ["/memtest"]