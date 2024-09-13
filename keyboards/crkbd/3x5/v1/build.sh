#!/usr/bin/env bash

cd ../../../../qmk_firmware/keyboards/crkbd/keymaps
ln -snfv ../../../../keyboards/crkbd/3x5/v1 joakimmj-3x5-v1
cd ../../..
qmk compile -kb crkbd -km joakimmj-3x5-v1
cp .build/crkbd_rev1_joakimmj-3x5-v1.hex ../keyboards/crkbd/3x5/v1/assets/
