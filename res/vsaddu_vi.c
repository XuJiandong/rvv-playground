#include <stddef.h>
#include <stdint.h>

void vsaddu_vi(size_t n, const uint64_t x[][4], uint64_t y[][4]);

int main() {
  uint64_t x[100][4] = {{0xfffffffffffffff2, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xcb9848f06e9659f6, 0x0000000000000067, 0x63eb500cce126b70, 0xbad28e0ca5854070},
                        {0xaf29109cc0000000, 0x0000000000000040, 0xe5baa16ee5b5419e, 0xe35a000000000000},
                        {0xfffffffffffffffe, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x90e1bc8ba22d3294, 0x2d21e3da342cd6be, 0x000000000003ed82, 0x6d159abfb3030000},
                        {0x14d93f0c55095499, 0x7fc92593c865b4c2, 0xea2177d8d5100000, 0x996d1b60923c18a6},
                        {0xfffffffffffffff4, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x31a7445bdf8bcb5c, 0x0000000000000004, 0xf2a6b292a535dc4e, 0xf48119b103954df1},
                        {0x58aee9fdc3f41b74, 0xbe55668178139c8e, 0x0000000000010000, 0xa8519a5b46242cc0},
                        {0xfffffffffffffff4, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x0ec6680cabb95f09, 0xff98837fda2a5bdf, 0x0ec6680cabb95f09, 0x0000000000000040},
                        {0x4ab9cfc9a41744c4, 0x314320aa7da5b1ef, 0x0000000000000001, 0x262a15662b298944},
                        {0xfffffffffffffff1, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xd251a40a022b9000, 0xffffffffffffffff, 0x0000000000000040, 0x0000000000000000},
                        {0x0000008000000000, 0x8a4a182923bdf75a, 0x7fc92593c865b4c2, 0x4a6c986967d5ace8},
                        {0xfffffffffffffffb, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x8000000000000000, 0xdf09e5c90a990b56, 0x68323fe289df33d1, 0x02ab7bb54e687499},
                        {0x2c1fb5204d248917, 0x3b4de2fabe6d6476, 0x27429c30e8b6cff7, 0x93d7d7a9d87056f0},
                        {0xfffffffffffffffb, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x8f09996552504a5d, 0xd0abd7d3688aa0d7, 0x8f09996552504a5d, 0xb1db9b0fecbfaabe},
                        {0x63eb500cce126b70, 0xc9d368e6546c1f00, 0xf3fbe985738811dd, 0x31a7445bdf8bcb5c},
                        {0xfffffffffffffff6, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x0f812a265e560f2b, 0xb9e2a99fdb7b2948, 0x000000000000000d, 0xdf09e5c90a990b56},
                        {0xb040414dd8c98a14, 0xea2177d8d5100000, 0x4ab9cfc9a41744c4, 0xdf9a26c8470349dd},
                        {0xfffffffffffffff9, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xea2177d8d5100000, 0xaf29109cc0000000, 0xaf29109cc0000000, 0x00000000a865d7d4},
                        {0xdfd83d690e5f073e, 0x16b3a918e4278c9d, 0x6d159abfb3030000, 0xf3fbe985738811dd},
                        {0xfffffffffffffff3, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xe5baa16ee5b5419e, 0x0ec6680cabb95f09, 0x9420000000000000, 0x8c91e2fe14041a34},
                        {0xb1db9b0fecbfaabe, 0xdfd3a0870f60e072, 0x1000000000000000, 0xfecee737556609f5},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x90e1bc8ba22d3294, 0x7fc92593c865b4c2, 0x00129af7f2440efe, 0xf2a6b292a535dc4e},
                        {0xc3bd5e2cd52318a8, 0x00000000000075da, 0xea2177d8d5100000, 0xffffffffffffffff},
                        {0xfffffffffffffffe, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xea2177d8d5100000, 0x00000000a865d7d4, 0x9420000000000000, 0x0000000000000004},
                        {0xbd6192029dd91d60, 0xbe55668178139c8e, 0xb9e2a99fdb7b2948, 0x996d1b60923c18a6},
                        {0xfffffffffffffff0, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xb36eb1caa58ee7dc, 0x0000000000000004, 0x000000000000714c, 0x7c6bcb08155fac38},
                        {0xdf9a26c8470349dd, 0xdf9a26c8470349dd, 0x7f2e6910bdea3ffd, 0xca9d54bd4e78980e},
                        {0xfffffffffffffff6, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x31a7445bdf8bcb5c, 0x00000000000075da, 0x000000000000015b, 0xcb9848f06e9659f6},
                        {0x00129af7f2440efe, 0x6465f271027abfa8, 0x58aee9fdc3f41b74, 0x6edd225600000000},
                        {0xfffffffffffffff9, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xf2a6b292a535dc4e, 0xd251a40a022b9000, 0x0010000000000000, 0xff98837fda2a5bdf},
                        {0x0000000000000067, 0x4cf560811e3465c5, 0x986a686578456056, 0x8a4a182923bdf75a},
                        {0xfffffffffffffff3, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xb9e2a99fdb7b2948, 0xaf29109cc0000000, 0x0ec6680cabb95f09, 0x14d93f0c55095499},
                        {0x5052886f7169c8c5, 0xb1db9b0fecbfaabe, 0xe5baa16ee5b5419e, 0x00020e6dfbb7c441},
                        {0xfffffffffffffffe, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x867e3492977cb1bb, 0x8f09996552504a5d, 0x0000000000000000, 0x0000000000000000},
                        {0x31523358d080e093, 0xbd6192029dd91d60, 0x3d0e482377794618, 0x4fcf7212bebfdd89},
                        {0xfffffffffffffffc, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x0000000100000000, 0x34f2a050c605b6b0, 0xfecee737556609f5, 0x0000000000000001},
                        {0xd27d2fde3497614c, 0xbe55668178139c8e, 0xea2177d8d5100000, 0x0000000000002000},
                        {0xfffffffffffffffc, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x00000bea6a6af755, 0xf5bad73c74be6d8a, 0xa8519a5b46242cc0, 0xea59a91078581c00},
                        {0xa6a669d1baba633e, 0xa73c905bcbc01878, 0xe79541e25d0dba6b, 0x0000000000000040},
                        {0xfffffffffffffffb, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xb9e2a99fdb7b2948, 0x00000bea6a6af755, 0xbad28e0ca5854070, 0x6edd225600000000},
                        {0xf3fbe985738811dd, 0xf5bad73c74be6d8a, 0xb040414dd8c98a14, 0x686f332000000000},
                        {0xfffffffffffffff7, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x0f812a265e560f2b, 0x867e3492977cb1bb, 0xdf9a26c8470349dd, 0x6edd225600000000},
                        {0xff98837fda2a5bdf, 0xd251a40a022b9000, 0x4ab9cfc9a41744c4, 0xf3fbe985738811dd},
                        {0xfffffffffffffff3, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xa8519a5b46242cc0, 0x0000000000010000, 0x0da24e08451a8d1a, 0xdf09e5c90a990b56},
                        {0x1735808ee4398bca, 0x7f2e6910bdea3ffd, 0xdf9a26c8470349dd, 0x0100000000000000},
                        {0xfffffffffffffffb, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xaf29109cc0000000, 0x0000000000000000, 0xf0fe55be95a18d13, 0x0000020000000000},
                        {0x0000000100000000, 0x31a7445bdf8bcb5c, 0x2e00000000000000, 0x9d8dbb3a5bde4347},
                        {0xfffffffffffffff3, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xb1db9b0fecbfaabe, 0xf2a6b292a535dc4e, 0x7c6bcb08155fac38, 0x7c6bcb08155fac38},
                        {0xb040414dd8c98a14, 0x0000000000000001, 0xb9e2a99fdb7b2948, 0xb040414dd8c98a14},
                        {0xfffffffffffffff5, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xfecee737556609f5, 0x8000000000000000, 0x27429c30e8b6cff7, 0x9480583abdfb5837},
                        {0xa73c905bcbc01878, 0x000000000000000d, 0x0da24e08451a8d1a, 0x0000000000000000},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x58aee9fdc3f41b74, 0x986a686578456056, 0xdf09e5c90a990b56, 0xdf09e5c90a990b56},
                        {0xfad4dc0000000000, 0xcb9848f06e9659f6, 0x0000000100000000, 0xb36eb1caa58ee7dc},
                        {0xfffffffffffffff6, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xca9d54bd4e78980e, 0xa73c905bcbc01878, 0x00000bea6a6af755, 0x00000000a865d7d4},
                        {0xb1db9b0fecbfaabe, 0xe79541e25d0dba6b, 0x0000000000000000, 0x37269c228e8e3db1},
                        {0xfffffffffffffffd, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x0000000000002000, 0xe79541e25d0dba6b, 0xdfd3a0870f60e072, 0xb1db9b0fecbfaabe},
                        {0xa8519a5b46242cc0, 0xea2177d8d5100000, 0xf3fbe985738811dd, 0xdf9a26c8470349dd},
                        {0xfffffffffffffff3, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xea59a91078581c00, 0xa6a669d1baba633e, 0x8b4eb00000000000, 0x0000020000000000},
                        {0xb1db9b0fecbfaabe, 0xf2a6b292a535dc4e, 0x00000bea6a6af755, 0x4ab9cfc9a41744c4},
                        {0xfffffffffffffffb, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xb36eb1caa58ee7dc, 0x4fcf7212bebfdd89, 0x0ec6680cabb95f09, 0x314320aa7da5b1ef},
                        {0xbd6192029dd91d60, 0x58aee9fdc3f41b74, 0x9d8dbb3a5bde4347, 0x61fd04828c93ce01},
                        {0xfffffffffffffff2, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x0000800000000000, 0x44a705073f90be80, 0x00004a9e26b7f794, 0x93d7d7a9d87056f0},
                        {0x8a4a182923bdf75a, 0xe35a000000000000, 0x4fcf7212bebfdd89, 0x8c91e2fe14041a34},
                        {0xfffffffffffffff6, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x000000000000015b, 0xd0abd7d3688aa0d7, 0x000000000000015b, 0x6d159abfb3030000},
                        {0x867e3492977cb1bb, 0x0000000380f3cf69, 0x000000000000000d, 0x0000000100000000},
                        {0xfffffffffffffff2, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xf48119b103954df1, 0x6d159abfb3030000, 0x44a705073f90be80, 0x996d1b60923c18a6},
                        {0x16b3a918e4278c9d, 0xb1db9b0fecbfaabe, 0x63eb500cce126b70, 0x3d0e482377794618},
                        {0xfffffffffffffff1, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff}};
  uint64_t y[100][4];
  uint64_t e[100][4] = {{0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xcb9848f06e965a05, 0x0000000000000067, 0x63eb500cce126b70, 0xbad28e0ca5854070},
                        {0xaf29109cc000000f, 0x0000000000000040, 0xe5baa16ee5b5419e, 0xe35a000000000000},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x90e1bc8ba22d32a3, 0x2d21e3da342cd6be, 0x000000000003ed82, 0x6d159abfb3030000},
                        {0x14d93f0c550954a8, 0x7fc92593c865b4c2, 0xea2177d8d5100000, 0x996d1b60923c18a6},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x31a7445bdf8bcb6b, 0x0000000000000004, 0xf2a6b292a535dc4e, 0xf48119b103954df1},
                        {0x58aee9fdc3f41b83, 0xbe55668178139c8e, 0x0000000000010000, 0xa8519a5b46242cc0},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x0ec6680cabb95f18, 0xff98837fda2a5bdf, 0x0ec6680cabb95f09, 0x0000000000000040},
                        {0x4ab9cfc9a41744d3, 0x314320aa7da5b1ef, 0x0000000000000001, 0x262a15662b298944},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xd251a40a022b900f, 0xffffffffffffffff, 0x0000000000000040, 0x0000000000000000},
                        {0x000000800000000f, 0x8a4a182923bdf75a, 0x7fc92593c865b4c2, 0x4a6c986967d5ace8},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x800000000000000f, 0xdf09e5c90a990b56, 0x68323fe289df33d1, 0x02ab7bb54e687499},
                        {0x2c1fb5204d248926, 0x3b4de2fabe6d6476, 0x27429c30e8b6cff7, 0x93d7d7a9d87056f0},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x8f09996552504a6c, 0xd0abd7d3688aa0d7, 0x8f09996552504a5d, 0xb1db9b0fecbfaabe},
                        {0x63eb500cce126b7f, 0xc9d368e6546c1f00, 0xf3fbe985738811dd, 0x31a7445bdf8bcb5c},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x0f812a265e560f3a, 0xb9e2a99fdb7b2948, 0x000000000000000d, 0xdf09e5c90a990b56},
                        {0xb040414dd8c98a23, 0xea2177d8d5100000, 0x4ab9cfc9a41744c4, 0xdf9a26c8470349dd},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xea2177d8d510000f, 0xaf29109cc0000000, 0xaf29109cc0000000, 0x00000000a865d7d4},
                        {0xdfd83d690e5f074d, 0x16b3a918e4278c9d, 0x6d159abfb3030000, 0xf3fbe985738811dd},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xe5baa16ee5b541ad, 0x0ec6680cabb95f09, 0x9420000000000000, 0x8c91e2fe14041a34},
                        {0xb1db9b0fecbfaacd, 0xdfd3a0870f60e072, 0x1000000000000000, 0xfecee737556609f5},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x90e1bc8ba22d32a3, 0x7fc92593c865b4c2, 0x00129af7f2440efe, 0xf2a6b292a535dc4e},
                        {0xc3bd5e2cd52318b7, 0x00000000000075da, 0xea2177d8d5100000, 0xffffffffffffffff},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xea2177d8d510000f, 0x00000000a865d7d4, 0x9420000000000000, 0x0000000000000004},
                        {0xbd6192029dd91d6f, 0xbe55668178139c8e, 0xb9e2a99fdb7b2948, 0x996d1b60923c18a6},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xb36eb1caa58ee7eb, 0x0000000000000004, 0x000000000000714c, 0x7c6bcb08155fac38},
                        {0xdf9a26c8470349ec, 0xdf9a26c8470349dd, 0x7f2e6910bdea3ffd, 0xca9d54bd4e78980e},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x31a7445bdf8bcb6b, 0x00000000000075da, 0x000000000000015b, 0xcb9848f06e9659f6},
                        {0x00129af7f2440f0d, 0x6465f271027abfa8, 0x58aee9fdc3f41b74, 0x6edd225600000000},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xf2a6b292a535dc5d, 0xd251a40a022b9000, 0x0010000000000000, 0xff98837fda2a5bdf},
                        {0x0000000000000076, 0x4cf560811e3465c5, 0x986a686578456056, 0x8a4a182923bdf75a},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xb9e2a99fdb7b2957, 0xaf29109cc0000000, 0x0ec6680cabb95f09, 0x14d93f0c55095499},
                        {0x5052886f7169c8d4, 0xb1db9b0fecbfaabe, 0xe5baa16ee5b5419e, 0x00020e6dfbb7c441},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x867e3492977cb1ca, 0x8f09996552504a5d, 0x0000000000000000, 0x0000000000000000},
                        {0x31523358d080e0a2, 0xbd6192029dd91d60, 0x3d0e482377794618, 0x4fcf7212bebfdd89},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x000000010000000f, 0x34f2a050c605b6b0, 0xfecee737556609f5, 0x0000000000000001},
                        {0xd27d2fde3497615b, 0xbe55668178139c8e, 0xea2177d8d5100000, 0x0000000000002000},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x00000bea6a6af764, 0xf5bad73c74be6d8a, 0xa8519a5b46242cc0, 0xea59a91078581c00},
                        {0xa6a669d1baba634d, 0xa73c905bcbc01878, 0xe79541e25d0dba6b, 0x0000000000000040},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xb9e2a99fdb7b2957, 0x00000bea6a6af755, 0xbad28e0ca5854070, 0x6edd225600000000},
                        {0xf3fbe985738811ec, 0xf5bad73c74be6d8a, 0xb040414dd8c98a14, 0x686f332000000000},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x0f812a265e560f3a, 0x867e3492977cb1bb, 0xdf9a26c8470349dd, 0x6edd225600000000},
                        {0xff98837fda2a5bee, 0xd251a40a022b9000, 0x4ab9cfc9a41744c4, 0xf3fbe985738811dd},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xa8519a5b46242ccf, 0x0000000000010000, 0x0da24e08451a8d1a, 0xdf09e5c90a990b56},
                        {0x1735808ee4398bd9, 0x7f2e6910bdea3ffd, 0xdf9a26c8470349dd, 0x0100000000000000},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xaf29109cc000000f, 0x0000000000000000, 0xf0fe55be95a18d13, 0x0000020000000000},
                        {0x000000010000000f, 0x31a7445bdf8bcb5c, 0x2e00000000000000, 0x9d8dbb3a5bde4347},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xb1db9b0fecbfaacd, 0xf2a6b292a535dc4e, 0x7c6bcb08155fac38, 0x7c6bcb08155fac38},
                        {0xb040414dd8c98a23, 0x0000000000000001, 0xb9e2a99fdb7b2948, 0xb040414dd8c98a14},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xfecee73755660a04, 0x8000000000000000, 0x27429c30e8b6cff7, 0x9480583abdfb5837},
                        {0xa73c905bcbc01887, 0x000000000000000d, 0x0da24e08451a8d1a, 0x0000000000000000},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x58aee9fdc3f41b83, 0x986a686578456056, 0xdf09e5c90a990b56, 0xdf09e5c90a990b56},
                        {0xfad4dc000000000f, 0xcb9848f06e9659f6, 0x0000000100000000, 0xb36eb1caa58ee7dc},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xca9d54bd4e78981d, 0xa73c905bcbc01878, 0x00000bea6a6af755, 0x00000000a865d7d4},
                        {0xb1db9b0fecbfaacd, 0xe79541e25d0dba6b, 0x0000000000000000, 0x37269c228e8e3db1},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x000000000000200f, 0xe79541e25d0dba6b, 0xdfd3a0870f60e072, 0xb1db9b0fecbfaabe},
                        {0xa8519a5b46242ccf, 0xea2177d8d5100000, 0xf3fbe985738811dd, 0xdf9a26c8470349dd},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xea59a91078581c0f, 0xa6a669d1baba633e, 0x8b4eb00000000000, 0x0000020000000000},
                        {0xb1db9b0fecbfaacd, 0xf2a6b292a535dc4e, 0x00000bea6a6af755, 0x4ab9cfc9a41744c4},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xb36eb1caa58ee7eb, 0x4fcf7212bebfdd89, 0x0ec6680cabb95f09, 0x314320aa7da5b1ef},
                        {0xbd6192029dd91d6f, 0x58aee9fdc3f41b74, 0x9d8dbb3a5bde4347, 0x61fd04828c93ce01},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x000080000000000f, 0x44a705073f90be80, 0x00004a9e26b7f794, 0x93d7d7a9d87056f0},
                        {0x8a4a182923bdf769, 0xe35a000000000000, 0x4fcf7212bebfdd89, 0x8c91e2fe14041a34},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x000000000000016a, 0xd0abd7d3688aa0d7, 0x000000000000015b, 0x6d159abfb3030000},
                        {0x867e3492977cb1ca, 0x0000000380f3cf69, 0x000000000000000d, 0x0000000100000000},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xf48119b103954e00, 0x6d159abfb3030000, 0x44a705073f90be80, 0x996d1b60923c18a6},
                        {0x16b3a918e4278cac, 0xb1db9b0fecbfaabe, 0x63eb500cce126b70, 0x3d0e482377794618},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff}};

  vsaddu_vi(100, x, y);

  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 4; j++) {
      if (y[i][j] != e[i][j]) {
        return 1;
      }
    }
  }

  return 0;
}
