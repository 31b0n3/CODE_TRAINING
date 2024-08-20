#include <windows.h>
#include <stdio.h>

void ListFiles(const char *path) {
    WIN32_FIND_DATA findFileData;
    HANDLE hFind = INVALID_HANDLE_VALUE;

    // Tạo đường dẫn tìm kiếm
    char searchPath[MAX_PATH];
    snprintf(searchPath, sizeof(searchPath), "%s\\*.*", path);

    // Bắt đầu tìm kiếm
    hFind = FindFirstFile(searchPath, &findFileData);

    if (hFind == INVALID_HANDLE_VALUE) {
        printf("FindFirstFile failed (%d)\n", GetLastError());
        return;
    } 
    else {
        printf("Found files:\n");
        do {
            // Bỏ qua "." và ".."
            if (strcmp(findFileData.cFileName, ".") != 0 && strcmp(findFileData.cFileName, "..") != 0) {
                printf("%s\n", findFileData.cFileName);
            }
        } while (FindNextFile(hFind, &findFileData) != 0);

        // Kiểm tra lỗi
        if (GetLastError() != ERROR_NO_MORE_FILES) {
            printf("FindNextFile failed (%d)\n", GetLastError());
        }

        // Đóng handle tìm kiếm
        FindClose(hFind);
    }
}

int main() {
    ListFiles("C:\\path\\to\\your\\directory");
    return 0;
}
