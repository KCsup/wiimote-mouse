#include <windows.h>

void move_cursor_to_center() {
    int width = GetSystemMetrics(SM_CXSCREEN);
    int height = GetSystemMetrics(SM_CYSCREEN);
    
    SetCursorPos(width / 2, height / 2);
}

int main() {
	while(1)
	{
		// middle mouse is currently clicked
		if(GetAsyncKeyState(VK_MBUTTON) & 0x8000)
			move_cursor_to_center();
	}
    return 0;
}