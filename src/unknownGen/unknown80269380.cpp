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
void *igLuaState_getMeta(){
 if(!igLuaState_meta || !(reinterpret_cast<unsigned int *>(igLuaState_meta)[0x24/4]&4)) igLuaState_arkRegister();
 return igLuaState_meta;
}
void *igLuaState_vtableRead(){
 UnknownGenObject802693F0 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igLuaState_vtable;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igLuaState_arkRegister(){
 meta_registerNow((int)igLuaState_register);
}
void igLuaState_register(){
 fn_80269380();
 meta_registerClass(0,(int)&igLuaState_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igLuaState_getMetaCall,(int)igLuaState_className,20,(int)igLuaState_vtableRead,(int)igLuaState_fieldInit,0,(int)igLuaState_dependencies);
}
void *igLuaState_getMetaCall(){return igLuaState_getMeta();}
void igLuaState_fieldInit(){
 void *value0=igLuaState_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igLuaState_fieldTypes,2);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=fn_8002BED0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,igLuaState_fieldNames,igLuaState_fieldStorage,igLuaState_fieldOffsets,value1);
}
void *fn_8026960C(){
 if(!igLuaGlue_meta) igLuaGlue_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igLuaGlue_meta;
}
void *igLuaGlue_getMeta(){
 if(!igLuaGlue_meta || !(reinterpret_cast<unsigned int *>(igLuaGlue_meta)[0x24/4]&4)) igLuaGlue_arkRegister();
 return igLuaGlue_meta;
}
void *igLuaGlue_vtableRead(){
 UnknownGenObject80269684_0 object;
 igObject_construct(&object);
 object.unknown00=igLuaGlue_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igLuaGlue_arkRegister(){
 meta_registerNow((int)igLuaGlue_register);
}
void igLuaGlue_register(){
 fn_80269380();
 meta_registerClass(0,(int)&igLuaGlue_meta,(int)igObject_register,(int)fn_800237D0,(int)igLuaGlue_getMetaCall,(int)igLuaGlue_className,8,(int)igLuaGlue_vtableRead,0,0,0);
}
void *igLuaGlue_getMetaCall(){return igLuaGlue_getMeta();}
void *igLuaGlue_virtual58(){return igLuaGlue_meta;}
void *igLuaGlue_virtual24(){return fn_80270424();}
void *igLuaGlue_virtual28(){return fn_80270A38();}
void fn_802697BC(int p0,int p1,int p2,int p3){
 fn_802737A0((void *)p0);
 fn_80273450((void *)p0,(void *)p1);
 fn_802734C8((void *)p0,(void *)p2,(void *)p3);
 fn_802739F0((void *)p0,-3);
 fn_80272D8C((void *)p0,-2);
}
void fn_80269830(int p0,int p1,int p2){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=(void *)p2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+4)=(void *)p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=lbl_80566044;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=(void *)0;
 void *value0=lbl_80566044;
 if(value0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+16)=(void *)p0;
 }
 lbl_80566044=(void *)p0;
}
}
#pragma pop
