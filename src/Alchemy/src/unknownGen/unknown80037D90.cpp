#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *meta_newMetaObject(void *);
void igCharMetaField_registerNow();
void fn_8003FF90(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
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
void igCallStackTable_fieldInit();
void *igCharMetaField_getMeta();
void igCharMetaField_register();
void *igGamecubeCallStackTracer_getMeta();
void igObject_register();
void igUnsignedIntListNoClean_register();
extern char igCharArrayMetaField_className[];
extern char igCallStackTracer_className[];
extern char lbl_804677DC[];
extern char igCallStackTable_className[];
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char igCharArrayMetaField_vtable[];
extern char igCallStackTracer_vtable[];
extern char igCallStackTable_vtable[];
extern char lbl_80473F24[];
extern char igUnsignedIntListNoClean_vtable[];
extern char igUnsignedIntList_vtable[];
extern char lbl_80474900[];
extern char lbl_8055D678[8];
extern char lbl_8055D680[4];
extern char lbl_8055D684[4];
extern char lbl_8055D688[4];
extern char lbl_8055D68C[4];
extern void *igUnsignedIntListNoClean_meta;
extern void *igCharMetaField_meta;
extern void *lbl_80561E20;
extern void *igCharArrayMetaField_meta;
extern void *lbl_80561E28;
extern void *igCallStackTracer_meta;
extern void *igCallStackTable_meta;
extern void *lbl_805621F4;
void *igCharArrayMetaField_getMeta();
void *igCharArrayMetaField_vtableRead();
void igCharArrayMetaField_registerNow();
void igCharArrayMetaField_register();
void *igCharArrayMetaField_getMetaCall();
void *igCharArrayMetaField_parentMeta();
void igCharArrayMetaField_fieldInit();
void *igCallStackTracer_getMeta();
void *igCallStackTracer_vtableRead();
void igCallStackTracer_registerNow();
void igCallStackTracer_register();
void *igCallStackTracer_getMetaCall();
void *igCallStackTracer_parentMeta();
void *fn_80038304();
void *igGamecubeCallStackTracer_getMetaCall();
void *igCallStackTable_getMeta();
void *igCallStackTable_vtableRead();
void igCallStackTable_registerNow();
void igCallStackTable_register();
void *igCallStackTable_getMetaCall();
}
struct UnknownGenRoot80037EEC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80037EEC(){fn_8003FF90(this);}
};
struct UnknownGenObject80037EEC_0 : UnknownGenRoot80037EEC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80037EEC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80037EEC_1 : UnknownGenObject80037EEC_0 {
 inline ~UnknownGenObject80037EEC_1(){unknown00=lbl_80473F24;}
};
struct UnknownGenObject80037EEC : UnknownGenObject80037EEC_1 {
 char unknown10[48];
 inline ~UnknownGenObject80037EEC(){unknown00=igCharArrayMetaField_vtable;}
};
struct UnknownGenObject800381D4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800383B0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800383B0(){igObject_construct(this);}
};
struct UnknownGenObject800383B0 : UnknownGenRoot800383B0 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject800383B0(){unknown00=igCallStackTable_vtable;}
};
extern "C" {
void *igCharMetaField_getMetaCall(){return igCharMetaField_getMeta();}
void fn_80037DB0(){
 if(!lbl_80561E20){
  void *object=(lbl_80561E20=meta_createInstance(igCharMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561E20));
   reinterpret_cast<short *>(lbl_80561E20)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561E20);
  }
 }
}
void *fn_80037E48(){
 if(!lbl_80561E20){
  igCharMetaField_registerNow();
 }
 return lbl_80561E20;
}
void *igCharArrayMetaField_create(void *object){
 igCharArrayMetaField_registerNow();
 return meta_createInstance(igCharArrayMetaField_meta,object);
}
void *igCharArrayMetaField_getMeta(){
 if(!igCharArrayMetaField_meta || !(reinterpret_cast<unsigned int *>(igCharArrayMetaField_meta)[0x24/4]&4)) igCharArrayMetaField_registerNow();
 return igCharArrayMetaField_meta;
}
void *igCharArrayMetaField_vtableRead(){
 UnknownGenObject80037EEC object;
 object.unknown00=igCharArrayMetaField_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCharArrayMetaField_registerNow(){
 meta_registerNow((int)igCharArrayMetaField_register);
}
void igCharArrayMetaField_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igCharArrayMetaField_meta,(int)igCharMetaField_register,(int)igCharArrayMetaField_parentMeta,(int)igCharArrayMetaField_getMetaCall,(int)igCharArrayMetaField_className,56,(int)igCharArrayMetaField_vtableRead,(int)igCharArrayMetaField_fieldInit,0,(int)lbl_8055D678);
}
void *igCharArrayMetaField_getMetaCall(){return igCharArrayMetaField_getMeta();}
void *igCharArrayMetaField_parentMeta(){return igCharMetaField_meta;}
void igCharArrayMetaField_fieldInit(){
 void *meta=igCharArrayMetaField_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_8055D680,1);
 fn_80053650(meta_field(meta,field),1);
 meta_setupFields(meta,lbl_8055D684,lbl_8055D688,lbl_8055D68C,field);
}
void fn_800380C4(){
 if(!lbl_80561E28){
  void *object=(lbl_80561E28=meta_createInstance(igCharArrayMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561E28));
   reinterpret_cast<short *>(lbl_80561E28)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561E28);
  }
 }
}
void *fn_8003815C(){
 if(!igCallStackTracer_meta) igCallStackTracer_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igCallStackTracer_meta;
}
void *igCallStackTracer_getMeta(){
 if(!igCallStackTracer_meta || !(reinterpret_cast<unsigned int *>(igCallStackTracer_meta)[0x24/4]&4)) igCallStackTracer_registerNow();
 return igCallStackTracer_meta;
}
void *igCallStackTracer_vtableRead(){
 UnknownGenObject800381D4_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80474900;
 object.unknown00=igUnsignedIntList_vtable;
 object.unknown00=igUnsignedIntListNoClean_vtable;
 object.unknown00=igCallStackTracer_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCallStackTracer_registerNow(){
 meta_registerNow((int)igCallStackTracer_register);
}
void igCallStackTracer_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igCallStackTracer_meta,(int)igUnsignedIntListNoClean_register,(int)igCallStackTracer_parentMeta,(int)igCallStackTracer_getMetaCall,(int)igCallStackTracer_className,20,(int)igCallStackTracer_vtableRead,(int)fn_80038304,0,0);
}
void *igCallStackTracer_getMetaCall(){return igCallStackTracer_getMeta();}
void *igCallStackTracer_parentMeta(){return igUnsignedIntListNoClean_meta;}
void *fn_80038304(){
 void *value0=igCallStackTracer_meta;
 reinterpret_cast<Meta::igMetaObject *>(value0)->_abstractProxy=(void *)(void *)igGamecubeCallStackTracer_getMetaCall;
 return value0;
}
void *igGamecubeCallStackTracer_getMetaCall(){return igGamecubeCallStackTracer_getMeta();}
void *fn_80038338(){
 if(!igCallStackTable_meta) igCallStackTable_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igCallStackTable_meta;
}
void *igCallStackTable_getMeta(){
 if(!igCallStackTable_meta || !(reinterpret_cast<unsigned int *>(igCallStackTable_meta)[0x24/4]&4)) igCallStackTable_registerNow();
 return igCallStackTable_meta;
}
void *igCallStackTable_vtableRead(){
 UnknownGenObject800383B0 object;
 object.unknown00=igCallStackTable_vtable;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCallStackTable_registerNow(){
 meta_registerNow((int)igCallStackTable_register);
}
void igCallStackTable_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igCallStackTable_meta,(int)igObject_register,(int)fn_800237D0,(int)igCallStackTable_getMetaCall,(int)igCallStackTable_className,24,(int)igCallStackTable_vtableRead,(int)igCallStackTable_fieldInit,0,(int)lbl_804677DC);
}
void *igCallStackTable_getMetaCall(){return igCallStackTable_getMeta();}
}
#pragma pop
