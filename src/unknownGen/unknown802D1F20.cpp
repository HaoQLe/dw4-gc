#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beLuaData_fieldInit();
void *beLuaData_getMeta();
void beLuaData_vtableRead();
void *fn_80023CF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char lbl_8041FAC0[];
extern char lbl_804D1848[];
extern char lbl_8053510C[];
void beLuaData_register();
void *beLuaData_getMetaCall();
}
extern "C" {
void fn_802D1F20(){
 fn_80066188((int)beLuaData_register);
}
void beLuaData_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053510C,(int)igNamedObject_register,(int)fn_80023CF4,(int)beLuaData_getMetaCall,(int)lbl_8041FAC0,16,(int)beLuaData_vtableRead,(int)beLuaData_fieldInit,0,(int)lbl_804D1848);
}
void *beLuaData_getMetaCall(){return beLuaData_getMeta();}
}
#pragma pop
