#!/usr/bin/env bash

cd ../../../qmk_firmware/keyboards/crkbd/keymaps
ln -snfv ../../../../keyboards/crkbd/3x5-home-row-mods joakimmj-3x5-home-row-mods
cd ../../..
qmk compile -kb crkbd -km joakimmj-3x5-home-row-mods
cp .build/crkbd_rev1_joakimmj-3x5-home-row-mods.hex ../keyboards/crkbd/3x5-home-row-mods/assets/

