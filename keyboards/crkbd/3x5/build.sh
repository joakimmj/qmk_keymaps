#!/usr/bin/env bash

cd ../../../qmk_firmware/keyboards/crkbd/keymaps
ln -snfv ../../../../keyboards/crkbd/3x5 joakimmj-3x5
cd ../../..
qmk compile -kb crkbd -km joakimmj-3x5
cp .build/crkbd_rev1_joakimmj-3x5.hex ../keyboards/crkbd/3x5/assets/

