#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *igCallStackTracer_getMetaCall();
void igCallStackTracer_register();
void *igGamecubeCallStackTracer_getMetaCall();
extern char lbl_80468A00[];
extern char lbl_804705F8[];
extern char lbl_80472FA0[];
extern char lbl_80473164[];
extern char lbl_80474840[];
extern char lbl_804748A0[];
extern char lbl_80474900[];
extern void *lbl_80561E30;
extern void *lbl_805620F4;
void *igGamecubeCallStackTracer_vtableRead();
void fn_8003BDD8();
void igGamecubeCallStackTracer_register();
void *igGamecubeCallStackTracer_parentMeta();
void *fn_8003BE78();
}
struct UnknownGenObject8003BD5C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igGamecubeCallStackTracer_getMeta(){
 if(!lbl_805620F4 || !(reinterpret_cast<unsigned int *>(lbl_805620F4)[0x24/4]&4)) fn_8003BDD8();
 return lbl_805620F4;
}
void *igGamecubeCallStackTracer_vtableRead(){
 UnknownGenObject8003BD5C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80474900;
 object.unknown00=lbl_804748A0;
 object.unknown00=lbl_80474840;
 object.unknown00=lbl_80473164;
 object.unknown00=lbl_804705F8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8003BDD8(){
 fn_80066188((int)igGamecubeCallStackTracer_register);
}
void igGamecubeCallStackTracer_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805620F4,(int)igCallStackTracer_register,(int)igGamecubeCallStackTracer_parentMeta,(int)igGamecubeCallStackTracer_getMetaCall,(int)lbl_80468A00,20,(int)igGamecubeCallStackTracer_vtableRead,(int)fn_8003BE78,0,0);
}
void *igGamecubeCallStackTracer_parentMeta(){return lbl_80561E30;}
void *fn_8003BE78(){
 void *value0=lbl_805620F4;
 reinterpret_cast<Meta::igMetaObject *>(value0)->_writeProxy=(void *)(void *)igCallStackTracer_getMetaCall;
 return value0;
}
int fn_8003BE8C(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+180);}
}
#pragma pop
