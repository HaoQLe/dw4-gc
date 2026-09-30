#include <igGap.h>

// Synthetic boolean text-conversion partition. Shared storage remains original.
extern "C" {
    int sprintf(char *, const char *, ...);
    void *fn_80054140(Gap::igUnsignedInt);
    void *fn_80053F28(void *);
    const char *fn_80054094(void *, const char *);
    extern void *lbl_80562140;
    extern char lbl_8055D79C[5], lbl_8055D7A4[6], lbl_8055D7AC[3];
}

inline const char *unknown8003EAE8Acquire(const char *text){
    if(reinterpret_cast<unsigned long>(text) == 0) return NULL;
    if(!lbl_80562140){
        void *storage = fn_80054140(0x10);
        if(storage) storage = fn_80053F28(storage);
        lbl_80562140 = storage;
    }
    return fn_80054094(lbl_80562140, text);
}

struct Unknown8003EAE8String {
    const char *unknown00;
    Unknown8003EAE8String(const Unknown8003EAE8String&);
    inline Unknown8003EAE8String(const char *text) : unknown00(unknown8003EAE8Acquire(text)) {}
};

extern "C" Unknown8003EAE8String fn_8003EAE8(void *, const Gap::igBool *value){
    char buffer[0x400];
    sprintf(buffer, lbl_8055D7AC, *value ? lbl_8055D79C : lbl_8055D7A4);
    return Unknown8003EAE8String(buffer);
}
