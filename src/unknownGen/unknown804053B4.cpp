#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80405938();
extern void *lbl_8055C880;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_804053B4(){
 if(!lbl_8055C880) lbl_8055C880=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8055C880;
}
void *igViewerRenderer_getMeta(){
 if(!lbl_8055C880 || !(reinterpret_cast<unsigned int *>(lbl_8055C880)[0x24/4]&4)) fn_80405938();
 return lbl_8055C880;
}
}
#pragma pop
