// GetLastError.cpp

#include <stdio.h>
#include <tchar.h>
#include <Windows.h>

int _tmain() {
	//Windows system functions
	HANDLE hFile = CreateFile(_T("ABC.DAT"), GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (hFile == INVALID_HANDLE_VALUE) {
		_tprintf(_T("error code: %d \n"), GetLastError());
		return 0;
	}
	return 0;
}