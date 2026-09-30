#include <igGap.h>

// Synthetic boolean text-conversion partition. Shared storage remains original.
extern "C" {
    int sscanf(const char *, const char *, ...);
    int sprintf(char *, const char *, ...);
    int fn_8007784C(const char *, const char *, Gap::igUnsignedInt);
    void *fn_80054140(Gap::igUnsignedInt);
    void *fn_80053F28(void *);
    const char *fn_80054094(void *, const char *);
    extern void *lbl_80562140;
    extern char lbl_8055D794[5], lbl_8055D79C[5], lbl_8055D7A4[6], lbl_8055D7AC[3];
}

extern "C" int fn_8003EA18(void *, Gap::igBool *value, const char *text){
    int consumed = 0;
    int number = 0;
    sscanf(text, lbl_8055D794, &number, &consumed);
    if(consumed > 0){
        *value = number != 0;
        return consumed;
    }
    if(fn_8007784C(lbl_8055D79C, text, 4) == 0){
        *value = true;
        return 4;
    }
    if(fn_8007784C(lbl_8055D7A4, text, 5) == 0){
        *value = false;
        return 5;
    }
    return 0;
}

