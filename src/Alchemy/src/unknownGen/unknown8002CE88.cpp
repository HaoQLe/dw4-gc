#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80021D70();
void *fn_800237D0();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *igGamecubeLongTimer_getMeta();
void igLocationTable_fieldInit();
void igMetaField_register();
void igObject_register();
extern char igLongMetaField_className[];
extern char igLongArrayMetaField_className[];
extern char lbl_80465324[];
extern char igLocationTable_className[];
extern char lbl_80471914[];
extern char igLongMetaField_vtable[];
extern char igLongArrayMetaField_vtable[];
extern char igLocationTable_vtable[];
extern char lbl_8055D36C[8];
extern char lbl_8055D374[8];
extern char lbl_8055D37C[4];
extern char lbl_8055D380[4];
extern char lbl_8055D384[4];
extern char lbl_8055D388[4];
extern void *igLongMetaField_meta;
extern void *lbl_80561990;
extern void *igLongArrayMetaField_meta;
extern void *lbl_80561998;
extern void *igLocationTable_meta;
extern void *lbl_805621F4;
void *igLongMetaField_getMeta();
void *igLongMetaField_vtableRead();
void igLongMetaField_registerNow();
void igLongMetaField_register();
void *igLongMetaField_getMetaCall();
void *igLongArrayMetaField_getMeta();
void *igLongArrayMetaField_vtableRead();
void igLongArrayMetaField_registerNow();
void igLongArrayMetaField_register();
void *igLongArrayMetaField_getMetaCall();
void *igLongArrayMetaField_parentMeta();
void igLongArrayMetaField_fieldInit();
void *igLocationTable_getMeta();
void *igLocationTable_vtableRead();
void igLocationTable_registerNow();
void igLocationTable_register();
void *igLocationTable_getMetaCall();
}
struct UnknownGenRoot8002CF1C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002CF1C(){fn_800638E0(this);}
};
struct UnknownGenObject8002CF1C_0 : UnknownGenRoot8002CF1C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8002CF1C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8002CF1C : UnknownGenObject8002CF1C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8002CF1C(){unknown00=igLongMetaField_vtable;}
};
struct UnknownGenRoot8002D160 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002D160(){fn_800638E0(this);}
};
struct UnknownGenObject8002D160_0 : UnknownGenRoot8002D160 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8002D160_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8002D160_1 : UnknownGenObject8002D160_0 {
 inline ~UnknownGenObject8002D160_1(){unknown00=igLongMetaField_vtable;}
};
struct UnknownGenObject8002D160 : UnknownGenObject8002D160_1 {
 char unknown10[48];
 inline ~UnknownGenObject8002D160(){unknown00=igLongArrayMetaField_vtable;}
};
struct UnknownGenRoot8002D44C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002D44C(){igObject_construct(this);}
};
struct UnknownGenObject8002D44C : UnknownGenRoot8002D44C {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject8002D44C(){unknown00=igLocationTable_vtable;}
};
extern "C" {
void *igGamecubeLongTimer_getMetaCall(){return igGamecubeLongTimer_getMeta();}
void *igLongMetaField_create(void *object){
 igLongMetaField_registerNow();
 return meta_createInstance(igLongMetaField_meta,object);
}
void *igLongMetaField_getMeta(){
 if(!igLongMetaField_meta || !(reinterpret_cast<unsigned int *>(igLongMetaField_meta)[0x24/4]&4)) igLongMetaField_registerNow();
 return igLongMetaField_meta;
}
void *igLongMetaField_vtableRead(){
 UnknownGenObject8002CF1C object;
 object.unknown00=igLongMetaField_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igLongMetaField_registerNow(){
 meta_registerNow((int)igLongMetaField_register);
}
void igLongMetaField_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igLongMetaField_meta,(int)igMetaField_register,(int)fn_80021D70,(int)igLongMetaField_getMetaCall,(int)igLongMetaField_className,52,(int)igLongMetaField_vtableRead,0,0,(int)lbl_8055D36C);
}
void *igLongMetaField_getMetaCall(){return igLongMetaField_getMeta();}
void fn_8002D05C(){
 if(!lbl_80561990){
  void *object=(lbl_80561990=meta_createInstance(igLongMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561990));
   reinterpret_cast<short *>(lbl_80561990)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561990);
  }
 }
}
void *fn_8002D0F4(){
 if(!lbl_80561990){
  igLongMetaField_registerNow();
 }
 return lbl_80561990;
}
void *igLongArrayMetaField_getMeta(){
 if(!igLongArrayMetaField_meta || !(reinterpret_cast<unsigned int *>(igLongArrayMetaField_meta)[0x24/4]&4)) igLongArrayMetaField_registerNow();
 return igLongArrayMetaField_meta;
}
void *igLongArrayMetaField_vtableRead(){
 UnknownGenObject8002D160 object;
 object.unknown00=igLongMetaField_vtable;
 object.unknown00=igLongArrayMetaField_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igLongArrayMetaField_registerNow(){
 meta_registerNow((int)igLongArrayMetaField_register);
}
void igLongArrayMetaField_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igLongArrayMetaField_meta,(int)igLongMetaField_register,(int)igLongArrayMetaField_parentMeta,(int)igLongArrayMetaField_getMetaCall,(int)igLongArrayMetaField_className,56,(int)igLongArrayMetaField_vtableRead,(int)igLongArrayMetaField_fieldInit,0,(int)lbl_8055D374);
}
void *igLongArrayMetaField_getMetaCall(){return igLongArrayMetaField_getMeta();}
void *igLongArrayMetaField_parentMeta(){return igLongMetaField_meta;}
void igLongArrayMetaField_fieldInit(){
 void *meta=igLongArrayMetaField_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_8055D37C,1);
 fn_80053650(meta_field(meta,field),1);
 meta_setupFields(meta,lbl_8055D380,lbl_8055D384,lbl_8055D388,field);
}
void fn_8002D33C(){
 if(!lbl_80561998){
  void *object=(lbl_80561998=meta_createInstance(igLongArrayMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561998));
   reinterpret_cast<short *>(lbl_80561998)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561998);
  }
 }
}
void *fn_8002D3D4(){
 if(!igLocationTable_meta) igLocationTable_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igLocationTable_meta;
}
void *igLocationTable_getMeta(){
 if(!igLocationTable_meta || !(reinterpret_cast<unsigned int *>(igLocationTable_meta)[0x24/4]&4)) igLocationTable_registerNow();
 return igLocationTable_meta;
}
void *igLocationTable_vtableRead(){
 UnknownGenObject8002D44C object;
 object.unknown00=igLocationTable_vtable;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igLocationTable_registerNow(){
 meta_registerNow((int)igLocationTable_register);
}
void igLocationTable_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igLocationTable_meta,(int)igObject_register,(int)fn_800237D0,(int)igLocationTable_getMetaCall,(int)igLocationTable_className,32,(int)igLocationTable_vtableRead,(int)igLocationTable_fieldInit,0,(int)lbl_80465324);
}
void *igLocationTable_getMetaCall(){return igLocationTable_getMeta();}
}
#pragma pop
