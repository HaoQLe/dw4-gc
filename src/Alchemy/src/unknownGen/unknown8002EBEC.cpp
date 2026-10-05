#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void fn_8002F178();
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
extern void *lbl_80561A04;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_8002EBEC(void *object){
 fn_8002F178();
 return fn_8006546C(lbl_80561A04,object);
}
void *fn_8002EC24(){
 if(!lbl_80561A04) lbl_80561A04=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561A04;
}
void *fn_8002EC60(){
 if(!lbl_80561A04 || !(reinterpret_cast<unsigned int *>(lbl_80561A04)[0x24/4]&4)) fn_8002F178();
 return lbl_80561A04;
}
}
#pragma pop
