#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/Mrcoin.png
ICON_DST=../../src/qt/res/icons/Mrcoin.ico
convert ${ICON_SRC} -resize 16x16 Mrcoin-16.png
convert ${ICON_SRC} -resize 32x32 Mrcoin-32.png
convert ${ICON_SRC} -resize 48x48 Mrcoin-48.png
convert Mrcoin-16.png Mrcoin-32.png Mrcoin-48.png ${ICON_DST}

