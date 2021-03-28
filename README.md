# UEFI Hello World
A simple template for creating a UEFI application, which prints "Hello, world!" onto the screen.

# Compiling
```
make
make bootloader
```

# Running on real hardware
To run your UEFI application on real hardware create an "efi" folder on a USB stick, and in that folder create a "boot" folder.

Then copy x86_64/bootloader/main.efi to your USB to efi/boot/bootx64.efi.

Then, reboot the computer and boot from the USB.
