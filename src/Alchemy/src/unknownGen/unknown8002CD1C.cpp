#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *igLongTimer_fieldInit();
void *igLongTimer_getMetaCall();
void igTimer_register();
extern char lbl_8046527C[];
extern void *lbl_805614E4;
extern void *lbl_80561978;
void fn_8002CD58();
void igLongTimer_register();
void *igLongTimer_parentMeta();
}
extern "C" {
void *igLongTimer_getMeta(){
 if(!lbl_80561978 || !(reinterpret_cast<unsigned int *>(lbl_80561978)[0x24/4]&4)) fn_8002CD58();
 return lbl_80561978;
}
void fn_8002CD58(){
 fn_80066188((int)igLongTimer_register);
}
void igLongTimer_register(){
 fn_80021B94();
 fn_80066204(1,(int)&lbl_80561978,(int)igTimer_register,(int)igLongTimer_parentMeta,(int)igLongTimer_getMetaCall,(int)lbl_8046527C,40,0,(int)igLongTimer_fieldInit,0,0);
}
void *igLongTimer_parentMeta(){return lbl_805614E4;}
}
#pragma pop
