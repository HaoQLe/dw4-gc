#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beLuaState_fieldInit();
void *beLuaState_getMeta();
void *beLuaState_parentMeta();
void beLuaState_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igLuaState_register();
extern char beLuaState_className[];
extern char beLuaState_meta[];
void beLuaState_register();
void *beLuaState_getMetaCall();
}
extern "C" {
void beLuaState_arkRegister(){
 meta_registerNow((int)beLuaState_register);
}
void beLuaState_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beLuaState_meta,(int)igLuaState_register,(int)beLuaState_parentMeta,(int)beLuaState_getMetaCall,(int)beLuaState_className,24,(int)beLuaState_vtableRead,(int)beLuaState_fieldInit,0,0);
}
void *beLuaState_getMetaCall(){return beLuaState_getMeta();}
}
#pragma pop
