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
void *igMacroOpt_getMeta(){
 if(!igMacroOpt_meta || !(reinterpret_cast<unsigned int *>(igMacroOpt_meta)[0x24/4]&4)) igMacroOpt_arkRegister();
 return igMacroOpt_meta;
}
void *igMacroOpt_vtableRead(){
 UnknownGenObject801424A0 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igMacroOpt_vtable;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMacroOpt_arkRegister(){
 meta_registerNow((int)igMacroOpt_register);
}
void igMacroOpt_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igMacroOpt_meta,(int)igOptBase_register,(int)fn_801308D0,(int)igMacroOpt_getMetaCall,(int)igMacroOpt_className,48,(int)igMacroOpt_vtableRead,(int)igMacroOpt_fieldInit,0,(int)igMacroOpt_dependencies);
}
void *igMacroOpt_getMetaCall(){return igMacroOpt_getMeta();}
void igMacroOpt_fieldInit(){
 void *value0=igMacroOpt_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igMacroOpt_fieldTypes,2);
 void *value2=meta_field(value0,value1);
 fn_80071694(value2,(void *)0);
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value4=fn_80026B14();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+52)=1;
 meta_setupFields(value0,igMacroOpt_fieldNames,igMacroOpt_fieldStorage,igMacroOpt_fieldOffsets,value1);
}
void *fn_80142760(){
 if(!igLogInterface_meta) igLogInterface_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igLogInterface_meta;
}
void *igLogInterface_getMeta(){
 if(!igLogInterface_meta || !(reinterpret_cast<unsigned int *>(igLogInterface_meta)[0x24/4]&4)) igLogInterface_arkRegister();
 return igLogInterface_meta;
}
void *igLogInterface_vtableRead(){
 UnknownGenObject801427D8_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=igInterface_vtable;
 object.unknown00=igLogInterface_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igLogInterface_arkRegister(){
 meta_registerNow((int)igLogInterface_register);
}
void igLogInterface_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igLogInterface_meta,(int)igInterface_register,(int)fn_8013B680,(int)igLogInterface_getMetaCall,(int)igLogInterface_className,36,(int)igLogInterface_vtableRead,(int)igLogInterface_fieldInit,0,0);
}
void *igLogInterface_getMetaCall(){return igLogInterface_getMeta();}
void igLogInterface_fieldInit(){
 void *value0=igLogInterface_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igLogInterface_fieldTypes,1);
 meta_setupFields(value0,igLogInterface_fieldNames,igLogInterface_fieldStorage,igLogInterface_fieldOffsets,value1);
}
void *fn_80142950(){
 if(!igLockInterface_meta) igLockInterface_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igLockInterface_meta;
}
void *igLockInterface_getMeta(){
 if(!igLockInterface_meta || !(reinterpret_cast<unsigned int *>(igLockInterface_meta)[0x24/4]&4)) igLockInterface_arkRegister();
 return igLockInterface_meta;
}
void *igLockInterface_vtableRead(){
 UnknownGenObject801429C8 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=igInterface_vtable;
 object.unknown00=igLockInterface_vtable;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
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
