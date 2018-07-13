
Debian
====================
This directory contains files used to package swisscoinclassicd/swisscoinclassic-qt
for Debian-based Linux systems. If you compile swisscoinclassicd/swisscoinclassic-qt yourself, there are some useful files here.

## swisscoinclassic: URI support ##


swisscoinclassic-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install swisscoinclassic-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your swisscoinclassic-qt binary to `/usr/bin`
and the `../../share/pixmaps/swisscoinclassic128.png` to `/usr/share/pixmaps`

swisscoinclassic-qt.protocol (KDE)

