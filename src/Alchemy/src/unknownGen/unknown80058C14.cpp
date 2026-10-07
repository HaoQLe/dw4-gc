#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80058F30(void *);
void *fn_8005900C();
extern char lbl_8055D92C[1];
}
extern "C" {
void fn_80058C14(int p0){
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+104)=(unsigned char)(int)(void *)(int)*reinterpret_cast<unsigned char *>((lbl_8055D92C+0));
 fn_80058F30((void *)p0);
}
void *fn_80058C3C(){return fn_8005900C();}
}
#pragma pop
