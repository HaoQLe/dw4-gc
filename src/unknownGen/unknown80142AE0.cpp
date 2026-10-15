#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *fn_80026B14();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_80071694(void *,void *);
void fn_8012FC48();
void *fn_801308D0();
void *fn_8013B680();
void igInterface_register();
void igLockInterface_fieldInit();
void igOptBase_register();
extern char igMacroOpt_className[];
extern char igLogInterface_className[];
extern char igLockInterface_dependencies[];
extern char igLockInterface_className[];
extern char lbl_804A4A04[];
extern char igMacroOpt_vtable[];
extern char igLogInterface_vtable[];
extern char igLockInterface_vtable[];
extern char lbl_804A6460[];
extern char igInterface_vtable[];
extern char lbl_804AAF48[];
extern char igMacroOpt_dependencies[8];
extern char igMacroOpt_fieldTypes[8];
extern char igMacroOpt_fieldNames[8];
extern char igMacroOpt_fieldStorage[8];
extern char igMacroOpt_fieldOffsets[8];
extern char igLogInterface_fieldTypes[4];
extern char igLogInterface_fieldNames[4];
extern char igLogInterface_fieldStorage[4];
extern char igLogInterface_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igMacroOpt_meta;
extern void *igLogInterface_meta;
extern void *igLockInterface_meta;
void *igMacroOpt_getMeta();
void *igMacroOpt_vtableRead();
void igMacroOpt_arkRegister();
void igMacroOpt_register();
void *igMacroOpt_getMetaCall();
void igMacroOpt_fieldInit();
void *igLogInterface_getMeta();
void *igLogInterface_vtableRead();
void igLogInterface_arkRegister();
void igLogInterface_register();
void *igLogInterface_getMetaCall();
void igLogInterface_fieldInit();
void *igLockInterface_getMeta();
void *igLockInterface_vtableRead();
void igLockInterface_arkRegister();
void igLockInterface_register();
void *igLockInterface_getMetaCall();
}
struct UnknownGenRoot801424A0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801424A0(){igObject_construct(this);}
};
struct UnknownGenObject801424A0_0 : UnknownGenRoot801424A0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801424A0_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801424A0 : UnknownGenObject801424A0_0 {
 UnknownGenString unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject801424A0(){unknown00=igMacroOpt_vtable;}
};
struct UnknownGenObject801427D8_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenRoot801429C8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801429C8(){igObject_construct(this);}
};
struct UnknownGenObject801429C8 : UnknownGenRoot801429C8 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject801429C8(){unknown00=igLockInterface_vtable;}
};
extern "C" {
UnknownGenHolder *dtor_80142AE0(UnknownGenHolder *object,short flags){
 if(object){
  UnknownGenValue *value=object->unknown00;
  if(value){
   --value->unknown04;
   if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);
  }
  if(flags>0) __dl__FPv(object);
 }
 return object;
}
void igLockInterface_arkRegister(){
 meta_registerNow((int)igLockInterface_register);
}
void igLockInterface_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igLockInterface_meta,(int)igInterface_register,(int)fn_8013B680,(int)igLockInterface_getMetaCall,(int)igLockInterface_className,44,(int)igLockInterface_vtableRead,(int)igLockInterface_fieldInit,0,(int)igLockInterface_dependencies);
}
void *igLockInterface_getMetaCall(){return igLockInterface_getMeta();}
}
#pragma pop
