#include <efi.h>
#include <efilib.h>

EFI_STATUS efi_main (EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE *SystemTable) {
	EFI_INPUT_KEY Key;

	InitializeLib(ImageHandle, SystemTable); // Allows us to use functions like Print()

	Print(L"Hello, world!"); // Prints "Hello, world!" to the screen

	while ((ST->ConIn->ReadKeyStroke(ST->ConIn, &Key)) == EFI_NOT_READY); // Loops until a key is pressed

	return EFI_SUCCESS; // Exits the UEFI application
}
