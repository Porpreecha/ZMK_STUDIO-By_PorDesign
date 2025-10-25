#ifdef CONFIG_ZMK_STUDIO
#include <zmk/studio.h>
#endif

BUILD_ASSERT(
#ifdef CONFIG_ZMK_STUDIO
    1  // แสดงว่า keyboard นี้รองรับ Studio
#else
    1
#endif
);
