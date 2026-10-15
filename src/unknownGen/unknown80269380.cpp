#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80023CF4();
void *meta_newMetaObject(void *);
void *fn_8002BED0();
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_80270424();
void *fn_80270A38();
void fn_80272D8C(void *,int);
void fn_80273450(void *,void *);
void fn_802734C8(void *,void *,void *);
void *fn_802737A0(void *);
void *fn_802739F0(void *,int);
void igNamedObject_register();
void igObject_register();
extern char igNamedObject_vtable[];
extern char igLuaState_className[];
extern char igLuaGlue_className[];
extern char igLuaGlue_vtable[];
extern char igLuaState_vtable[];
extern char igLuaState_dependencies[8];
extern char igLuaState_fieldTypes[8];
extern char igLuaState_fieldNames[8];
extern char igLuaState_fieldStorage[8];
extern char igLuaState_fieldOffsets[8];
extern void *lbl_805621F4;
extern char lbl_80565FE8[1];
extern char lbl_80565FE9[1];
extern void *igLuaState_meta;
extern void *igLuaGlue_meta;
extern void *lbl_80566044;
void fn_80269380();
void *igLuaState_getMeta();
void *igLuaState_vtableRead();
void igLuaState_arkRegister();
void igLuaState_register();
void *igLuaState_getMetaCall();
void igLuaState_fieldInit();
void *igLuaGlue_getMeta();
void *igLuaGlue_vtableRead();
void igLuaGlue_arkRegister();
void igLuaGlue_register();
void *igLuaGlue_getMetaCall();
}
struct UnknownGenRoot802693F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802693F0(){igObject_construct(this);}
};
struct UnknownGenObject802693F0_0 : UnknownGenRoot802693F0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802693F0_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802693F0 : UnknownGenObject802693F0_0 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject802693F0(){unknown00=igLuaState_vtable;}
};
struct UnknownGenObject80269684_0 {
 void *unknown00;
 char unknown04[4];
};
extern "C" {
void fn_80269380(){
 if((int)*reinterpret_cast<signed char *>((lbl_80565FE9+0))==0){
  *reinterpret_cast<unsigned char *>((lbl_80565FE8+0))=0;
  *reinterpret_cast<unsigned char *>((lbl_80565FE9+0))=1;
 }
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80565FE8+0))){
  return;
 }
 *reinterpret_cast<unsigned char *>((lbl_80565FE8+0))=1;
}
}
#pragma pop
