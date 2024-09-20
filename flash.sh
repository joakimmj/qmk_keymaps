#!/usr/bin/env bash

keyboard=$(find -L ./keyboards -mindepth 1 -maxdepth 1 -type d | fzf)
if [[ -z $keyboard ]]; then
    exit 0
fi
selected_keyboard=$(basename "$keyboard" | tr . _)

keymap=$(find -L ./qmk_firmware/keyboards/$selected_keyboard/keymaps/ -mindepth 1 -maxdepth 1 -type d -not -name default | fzf)
if [[ -z $keymap ]]; then
    exit 0
fi
selected_keymap=$(basename "$keymap" | tr . _)

cd qmk_firmware

sudo qmk flash -kb $selected_keyboard -km $selected_keymap

