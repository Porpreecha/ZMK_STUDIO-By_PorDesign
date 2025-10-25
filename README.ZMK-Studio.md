# ZMK Config - Pordesign_5x7 for nice_nano_v2

Features
- Keyboard: 5x7 matrix (col2row)
- MCU: nice_nano_v2 (nRF52840)
- Build: GitHub Actions or local via VS Code task
- Flash: Copy `.uf2` to NICENANO drive (UF2) or use `west flash` if supported

Build locally
```
west build -s zmk/app -b nice_nano_v2 -- -DSHIELD=Pordesign_5x7 -DZMK_CONFIG=./config
```

Flash (UF2)
หลัง build เสร็จ จะได้ไฟล์ `build/zephyr/zmk.uf2`
ให้กด double-reset ที่ nice!nano แล้ว copy ไฟล์นี้ลงไดรฟ์ `NICENANO`.

Use in VS Code / ZMK Studio
- Run task: `ZMK: Build nice_nano_v2 + Pordesign_5x7`
- Monitor serial: `ZMK: Monitor`
