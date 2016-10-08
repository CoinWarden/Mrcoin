
Debian
====================
This directory contains files used to package Mrcoind/Mrcoin-qt
for Debian-based Linux systems. If you compile Mrcoind/Mrcoin-qt yourself, there are some useful files here.

## Mrcoin: URI support ##


Mrcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install Mrcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your Mrcoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/Mrcoin128.png` to `/usr/share/pixmaps`

Mrcoin-qt.protocol (KDE)

