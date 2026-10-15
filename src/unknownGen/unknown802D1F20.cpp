#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beLuaData_fieldInit();
void *beLuaData_getMeta();
void beLuaData_vtableRead();
void *fn_80023CF4();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char beLuaData_className[];
extern char lbl_804D1848[];
extern char beLuaData_meta[];
void beLuaData_register();
void *beLuaData_getMetaCall();
}
extern "C" {
void beLuaData_registerNow(){
 meta_registerNow((int)beLuaData_register);
}
void beLuaData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beLuaData_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beLuaData_getMetaCall,(int)beLuaData_className,16,(int)beLuaData_vtableRead,(int)beLuaData_fieldInit,0,(int)lbl_804D1848);
}
void *beLuaData_getMetaCall(){return beLuaData_getMeta();}
}
#pragma pop
