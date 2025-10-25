#include <device.h>
#include <drivers/keyboard.h>
#include <dt-bindings/zmk/keys.h>

#ifdef CONFIG_ZMK_STUDIO
#include <zmk/studio.h>
#endif

// Define physical layout(s)
const struct zmk_keymap_layout my_layouts[] = {
    // ตัวอย่าง layout ของคุณ
    { /* แถว 1 */ &kp A, &kp B, &kp C },
    { /* แถว 2 */ &kp D, &kp E, &kp F },
    // เพิ่มตามจำนวนแถว/คอลัมน์จริง
};

const size_t my_layout_count = sizeof(my_layouts) / sizeof(my_layouts[0]);

#ifdef CONFIG_ZMK_STUDIO
ZMK_STUDIO_KEYBOARD(PORDESIGN_5X7, my_layouts, my_layout_count);
#endif
