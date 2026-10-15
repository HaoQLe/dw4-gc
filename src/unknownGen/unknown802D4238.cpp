#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void beKeyboardReceiver_arkRegister();
void *fn_80301F68();
extern void *beKeyboardReceiver_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802D4238(){return fn_80301F68();}
void *beKeyboardReceiver_metaObject(){
 if(!beKeyboardReceiver_meta) beKeyboardReceiver_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beKeyboardReceiver_meta;
}
void *beKeyboardReceiver_getMeta(){
 if(!beKeyboardReceiver_meta || !(reinterpret_cast<unsigned int *>(beKeyboardReceiver_meta)[0x24/4]&4)) beKeyboardReceiver_arkRegister();
 return beKeyboardReceiver_meta;
}
}
#pragma pop
