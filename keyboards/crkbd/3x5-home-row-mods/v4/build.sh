#!/usr/bin/env bash

cd ../../../../qmk_firmware/keyboards/crkbd/keymaps
ln -snfv ../../../../keyboards/crkbd/3x5-home-row-mods/v4 joakimmj-3x5-home-row-mods-v4
cd ../../..
qmk compile -kb crkbd -km joakimmj-3x5-home-row-mods-v4
cp .build/crkbd_rev1_joakimmj-3x5-home-row-mods-v4.hex ../keyboards/crkbd/3x5-home-row-mods/v4/assets/

