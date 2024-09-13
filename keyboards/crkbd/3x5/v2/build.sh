#!/usr/bin/env bash

cd ../../../../qmk_firmware/keyboards/crkbd/keymaps
ln -snfv ../../../../keyboards/crkbd/3x5/v2 joakimmj-3x5-v2
cd ../../..
qmk compile -kb crkbd -km joakimmj-3x5-v2
cp .build/crkbd_rev1_joakimmj-3x5-v2.hex ../keyboards/crkbd/3x5/v2/assets/
