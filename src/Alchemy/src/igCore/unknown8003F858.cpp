#include <igGap.h>

// Synthetic hidden-result ABI; semantic type and unused receiver remain unknown.
struct Unknown8003F858Result {
    Gap::igInt unknown00;
    inline Unknown8003F858Result(Gap::igInt value) : unknown00(value) {}
    inline Unknown8003F858Result(const Unknown8003F858Result& other) : unknown00(other.unknown00) {}
};
extern "C" {
    extern Gap::igInt kSuccess__3Gap;
    extern const char *lbl_8056211C;
    extern char lbl_80468F04[60], lbl_8055D7B8[7];
    extern char lbl_8055D7AC[3], lbl_8055D7C0[3], lbl_8055D7D0[3];
    extern char lbl_8055D7C4[2], lbl_8055D7C8[2], lbl_8055D7CC[2];
    int sprintf(char *, const char *, ...);
    char *strrchr(const char *, int);
    char *strcpy(char *, const char *);
    char *strcat(char *, const char *);
    char *strncat(char *, const char *, unsigned long);
    unsigned long strlen(const char *);
}

extern "C" Unknown8003F858Result fn_8003F858(void *, Gap::igUnsignedInt value, const char *first, Gap::igInt firstCount, const char *second, Gap::igInt secondCount, const char *pattern, char *output, Gap::igInt limit){
    Unknown8003F858Result result = kSuccess__3Gap;
    if(!pattern || !*pattern) pattern = lbl_8056211C;
    if(!pattern || !*pattern) pattern = lbl_80468F04;
    if(limit) output[0] = 0;
    while(*pattern){
        char code = *pattern++;
        char custom[256];
        custom[0] = 0;
        if(code != '"' && *pattern == '\''){
            int index = 0;
            ++pattern;
            while(*pattern && *pattern != '\'' && index < 255){
                if(*pattern == '\\'){
                    ++pattern;
                    switch(*pattern){
                        case 'n': custom[index++] = '\n'; break;
                        case 'r': custom[index++] = '\r'; break;
                        case 't': custom[index++] = '\t'; break;
                    }
                } else custom[index++] = *pattern;
                ++pattern;
            }
            custom[index] = 0;
            if(*pattern == '\'') ++pattern;
        }
        char buffer[256];
        buffer[0] = 0;
        switch(code){
            case 'a': sprintf(buffer, custom[0] ? custom : lbl_8055D7B8, value); break;
            case 'f': {
                const char *backslash = strrchr(second, '\\');
                const char *slash = strrchr(second, '/');
                const char *base;
                if(backslash && slash) base = backslash > slash ? backslash : slash;
                else base = backslash ? backslash : slash;
                if(base) ++base;
                else base = second;
                if(base && *base) sprintf(buffer, custom[0] ? custom : lbl_8055D7AC, base);
                break;
            }
            case 'l': sprintf(buffer, custom[0] ? custom : lbl_8055D7C0, secondCount); break;
            case 'o': sprintf(buffer, custom[0] ? custom : lbl_8055D7C0, firstCount); break;
            case 'p':
                if(second && *second) sprintf(buffer, custom[0] ? custom : lbl_8055D7AC, second);
                break;
            case 's': sprintf(buffer, custom[0] ? custom : lbl_8055D7AC, first); break;
            case '\\':
                switch(*pattern++){
                    case 'n': strcpy(buffer, lbl_8055D7C4); break;
                    case 'r': strcpy(buffer, lbl_8055D7C8); break;
                    case 't': strcpy(buffer, lbl_8055D7CC); break;
                }
                break;
            case '"':
                while(*pattern && *pattern != '"'){
                    if(*pattern == '\\'){
                        ++pattern;
                        switch(*pattern){
                            case 'n': strcat(buffer, lbl_8055D7C4); break;
                            case 'r': strcat(buffer, lbl_8055D7C8); break;
                            case 't': strcat(buffer, lbl_8055D7CC); break;
                        }
                    } else sprintf(buffer + strlen(buffer), lbl_8055D7D0, *pattern);
                    ++pattern;
                }
                if(*pattern == '"') ++pattern;
                break;
            default: sprintf(buffer, lbl_8055D7D0, code); break;
        }
        strncat(output, buffer, limit);
    }
    if(limit > 1) output[limit - 1] = 0;
    return result;
}

