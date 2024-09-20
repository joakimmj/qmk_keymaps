#!/usr/bin/env bash

cd ../../../../qmk_firmware/keyboards/crkbd/keymaps
ln -snfv ../../../../keyboards/crkbd/3x5-home-row-mods/v3 joakimmj-3x5-home-row-mods-v3
cd ../../..
qmk compile -kb crkbd -km joakimmj-3x5-home-row-mods-v3
cp .build/crkbd_rev1_joakimmj-3x5-home-row-mods-v3.hex ../keyboards/crkbd/3x5-home-row-mods/v3/assets/
