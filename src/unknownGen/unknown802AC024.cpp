#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802AC0F8();
extern void *lbl_805343EC;
}
extern "C" {
void *fn_802AC024(void *object){
 fn_802AC0F8();
 return fn_8006546C(lbl_805343EC,object);
}
void *fn_802AC064(){
 if(!lbl_805343EC || !(reinterpret_cast<unsigned int *>(lbl_805343EC)[0x24/4]&4)) fn_802AC0F8();
 return lbl_805343EC;
}
}
#pragma pop
