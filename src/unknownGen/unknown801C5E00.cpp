#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_801C5FD8();
extern void *lbl_805621F4;
extern void *lbl_8056520C;
}
extern "C" {
void *fn_801C5E00(void *object){
 fn_801C5FD8();
 return fn_8006546C(lbl_8056520C,object);
}
void *fn_801C5E38(){
 if(!lbl_8056520C) lbl_8056520C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056520C;
}
void *fn_801C5E74(){
 if(!lbl_8056520C || !(reinterpret_cast<unsigned int *>(lbl_8056520C)[0x24/4]&4)) fn_801C5FD8();
 return lbl_8056520C;
}
}
#pragma pop
