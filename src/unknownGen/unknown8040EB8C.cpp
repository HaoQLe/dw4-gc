#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80068128(void *,void *);
extern void *lbl_8055C778;
extern void *lbl_8055C788;
extern void *lbl_8055C854;
extern void *lbl_8055C860;
extern void *lbl_8055C8D4;
extern void *lbl_80563624;
}
extern "C" {
void *fn_8040EB8C(){return lbl_8055C778;}
void *fn_8040EB9C(){return lbl_8055C788;}
void *fn_8040EBAC(){return lbl_8055C854;}
void fn_8040EBBC(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_80068128((void *)p1,lbl_80563624);
}
void *fn_8040EBEC(){return lbl_8055C860;}
void fn_8040EBFC(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_80068128((void *)p1,lbl_8055C8D4);
}
}
#pragma pop
