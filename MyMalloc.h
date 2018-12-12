#define OFFSET 2
#define PAGE_SIZE 1024
#define NUMBER_OF_PAGES 12

__declspec(dllexport) void *vrk_malloc(int size);
__declspec(dllexport) void vrk_free(void *address);
__declspec(dllexport) void displayBlob();