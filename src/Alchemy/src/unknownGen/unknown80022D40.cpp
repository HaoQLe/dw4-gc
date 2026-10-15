#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80021D70();
void igUnsignedIntMetaField_registerNow();
void *fn_80023E40();
void *fn_80026020();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065D94(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_800755F8();
void *fn_8007568C();
void fn_80075A2C(void *);
void *igGamecubeThreadManager_getMeta();
void *igLongTimer_getMeta();
void igMetaField_register();
void igNamedObject_register();
void igObject_register();
void *igThread_fieldInit();
void *igUnsignedIntMetaField_getMeta();
void igUnsignedIntMetaField_register();
extern char igVirtualCFuncMetaField_className[];
extern char igUnsignedIntArrayMetaField_className[];
extern char igUnsignedCharMetaField_className[];
extern char igUnsignedCharArrayMetaField_className[];
extern char lbl_804631F8[];
extern char igThreadManager_className[];
extern char lbl_804632A8[];
extern char lbl_804632B4[];
extern char igThread_className[];
extern char igUnsignedIntArrayMetaField_vtable[];
extern char igUnsignedCharMetaField_vtable[];
extern char igUnsignedCharArrayMetaField_vtable[];
extern char lbl_80471914[];
extern char lbl_80476E6C[];
extern char lbl_8055CF58[8];
extern char lbl_8055CF60[4];
extern char lbl_8055CF64[4];
extern char lbl_8055CF68[4];
extern char lbl_8055CF6C[4];
extern char lbl_8055CF70[8];
extern char lbl_8055CF78[8];
extern char lbl_8055CF80[4];
extern char lbl_8055CF84[4];
extern char lbl_8055CF88[4];
extern char lbl_8055CF8C[4];
extern char lbl_8055CF90[8];
extern char lbl_8055CF98[8];
extern char lbl_8055CFA8[8];
extern char lbl_8055CFB0[8];
extern char lbl_8055CFB8[8];
extern char lbl_8055CFF0[8];
extern char lbl_8055CFF8[8];
extern char lbl_8055D000[6];
extern char lbl_8055D018[6];
extern char lbl_8055D030[8];
extern char lbl_8055D038[8];
extern char lbl_8055D040[5];
extern void *igUnsignedIntMetaField_meta;
extern void *lbl_805614C0;
extern void *igUnsignedIntArrayMetaField_meta;
extern void *lbl_805614C8;
extern void *igUnsignedCharMetaField_meta;
extern void *lbl_805614D4;
extern void *igUnsignedCharArrayMetaField_meta;
extern void *lbl_805614DC;
extern void *igTimer_meta;
extern void *igThreadManager_meta;
extern void *lbl_805614F4;
extern void *lbl_805614F8;
extern void *lbl_805614FC;
extern void *lbl_80561500;
extern void *igThread_meta;
extern void *igNamedObject_meta;
extern void *lbl_805621F4;
extern void *igObject_meta;
void *igUnsignedIntArrayMetaField_getMeta();
void *igUnsignedIntArrayMetaField_vtableRead();
void igUnsignedIntArrayMetaField_registerNow();
void igUnsignedIntArrayMetaField_register();
void *igUnsignedIntArrayMetaField_getMetaCall();
void *igUnsignedIntArrayMetaField_parentMeta();
void igUnsignedIntArrayMetaField_fieldInit();
void *igUnsignedCharMetaField_getMeta();
void *igUnsignedCharMetaField_vtableRead();
void igUnsignedCharMetaField_registerNow();
void igUnsignedCharMetaField_register();
void *igUnsignedCharMetaField_getMetaCall();
void *igUnsignedCharArrayMetaField_getMeta();
void *igUnsignedCharArrayMetaField_vtableRead();
void igUnsignedCharArrayMetaField_registerNow();
void igUnsignedCharArrayMetaField_register();
void *igUnsignedCharArrayMetaField_getMetaCall();
void *igUnsignedCharArrayMetaField_parentMeta();
void igUnsignedCharArrayMetaField_fieldInit();
void *igTimer_getMeta();
void igTimer_registerNow();
void igTimer_register();
void *igTimer_getMetaCall();
void *fn_800237D0();
void *fn_800237D8();
void *igLongTimer_getMetaCall();
void *igThreadManager_getMeta();
void igThreadManager_registerNow();
void igThreadManager_register();
void *igThreadManager_getMetaCall();
void igThreadManager_fieldInit();
void *igGamecubeThreadManager_getMetaCall();
void *fn_80023A30();
void *fn_80023A50();
void *igThread_getMeta();
void igThread_registerNow();
void igThread_register();
void *igThread_getMetaCall();
void *fn_80023CF4();
}
struct UnknownGenRoot80022E9C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80022E9C(){fn_80075A2C(this);}
};
struct UnknownGenObject80022E9C_0 : UnknownGenRoot80022E9C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80022E9C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80022E9C_1 : UnknownGenObject80022E9C_0 {
 inline ~UnknownGenObject80022E9C_1(){unknown00=lbl_80476E6C;}
};
struct UnknownGenObject80022E9C : UnknownGenObject80022E9C_1 {
 char unknown10[48];
 inline ~UnknownGenObject80022E9C(){unknown00=igUnsignedIntArrayMetaField_vtable;}
};
struct UnknownGenRoot80023180 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80023180(){fn_800638E0(this);}
};
struct UnknownGenObject80023180_0 : UnknownGenRoot80023180 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80023180_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80023180 : UnknownGenObject80023180_0 {
 char unknown10[48];
 inline ~UnknownGenObject80023180(){unknown00=igUnsignedCharMetaField_vtable;}
};
struct UnknownGenRoot800233FC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800233FC(){fn_800638E0(this);}
};
struct UnknownGenObject800233FC_0 : UnknownGenRoot800233FC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject800233FC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject800233FC_1 : UnknownGenObject800233FC_0 {
 inline ~UnknownGenObject800233FC_1(){unknown00=igUnsignedCharMetaField_vtable;}
};
struct UnknownGenObject800233FC : UnknownGenObject800233FC_1 {
 char unknown10[48];
 inline ~UnknownGenObject800233FC(){unknown00=igUnsignedCharArrayMetaField_vtable;}
};
extern "C" {
void *igUnsignedIntMetaField_getMetaCall(){return igUnsignedIntMetaField_getMeta();}
void fn_80022D60(){
 if(!lbl_805614C0){
  void *object=(lbl_805614C0=meta_createInstance(igUnsignedIntMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805614C0));
   reinterpret_cast<short *>(lbl_805614C0)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805614C0);
  }
 }
}
void *fn_80022DF8(){
 if(!lbl_805614C0){
  igUnsignedIntMetaField_registerNow();
 }
 return lbl_805614C0;
}
void *igUnsignedIntArrayMetaField_create(void *object){
 igUnsignedIntArrayMetaField_registerNow();
 return meta_createInstance(igUnsignedIntArrayMetaField_meta,object);
}
void *igUnsignedIntArrayMetaField_getMeta(){
 if(!igUnsignedIntArrayMetaField_meta || !(reinterpret_cast<unsigned int *>(igUnsignedIntArrayMetaField_meta)[0x24/4]&4)) igUnsignedIntArrayMetaField_registerNow();
 return igUnsignedIntArrayMetaField_meta;
}
void *igUnsignedIntArrayMetaField_vtableRead(){
 UnknownGenObject80022E9C object;
 object.unknown00=igUnsignedIntArrayMetaField_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igUnsignedIntArrayMetaField_registerNow(){
 meta_registerNow((int)igUnsignedIntArrayMetaField_register);
}
void igUnsignedIntArrayMetaField_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igUnsignedIntArrayMetaField_meta,(int)igUnsignedIntMetaField_register,(int)igUnsignedIntArrayMetaField_parentMeta,(int)igUnsignedIntArrayMetaField_getMetaCall,(int)igUnsignedIntArrayMetaField_className,56,(int)igUnsignedIntArrayMetaField_vtableRead,(int)igUnsignedIntArrayMetaField_fieldInit,0,(int)lbl_8055CF58);
}
void *igUnsignedIntArrayMetaField_getMetaCall(){return igUnsignedIntArrayMetaField_getMeta();}
void *igUnsignedIntArrayMetaField_parentMeta(){return igUnsignedIntMetaField_meta;}
void igUnsignedIntArrayMetaField_fieldInit(){
 void *meta=igUnsignedIntArrayMetaField_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_8055CF60,1);
 fn_80053650(meta_field(meta,field),1);
 meta_setupFields(meta,lbl_8055CF64,lbl_8055CF68,lbl_8055CF6C,field);
}
void fn_80023074(){
 if(!lbl_805614C8){
  void *object=(lbl_805614C8=meta_createInstance(igUnsignedIntArrayMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805614C8));
   reinterpret_cast<short *>(lbl_805614C8)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805614C8);
  }
 }
}
void *igUnsignedCharMetaField_create(void *object){
 igUnsignedCharMetaField_registerNow();
 return meta_createInstance(igUnsignedCharMetaField_meta,object);
}
void *igUnsignedCharMetaField_getMeta(){
 if(!igUnsignedCharMetaField_meta || !(reinterpret_cast<unsigned int *>(igUnsignedCharMetaField_meta)[0x24/4]&4)) igUnsignedCharMetaField_registerNow();
 return igUnsignedCharMetaField_meta;
}
void *igUnsignedCharMetaField_vtableRead(){
 UnknownGenObject80023180 object;
 object.unknown00=igUnsignedCharMetaField_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igUnsignedCharMetaField_registerNow(){
 meta_registerNow((int)igUnsignedCharMetaField_register);
}
void igUnsignedCharMetaField_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igUnsignedCharMetaField_meta,(int)igMetaField_register,(int)fn_80021D70,(int)igUnsignedCharMetaField_getMetaCall,(int)igUnsignedCharMetaField_className,52,(int)igUnsignedCharMetaField_vtableRead,0,0,(int)lbl_8055CF70);
}
void *igUnsignedCharMetaField_getMetaCall(){return igUnsignedCharMetaField_getMeta();}
void fn_800232C0(){
 if(!lbl_805614D4){
  void *object=(lbl_805614D4=meta_createInstance(igUnsignedCharMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805614D4));
   reinterpret_cast<short *>(lbl_805614D4)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805614D4);
  }
 }
}
void *fn_80023358(){
 if(!lbl_805614D4){
  igUnsignedCharMetaField_registerNow();
 }
 return lbl_805614D4;
}
void *igUnsignedCharArrayMetaField_create(void *object){
 igUnsignedCharArrayMetaField_registerNow();
 return meta_createInstance(igUnsignedCharArrayMetaField_meta,object);
}
void *igUnsignedCharArrayMetaField_getMeta(){
 if(!igUnsignedCharArrayMetaField_meta || !(reinterpret_cast<unsigned int *>(igUnsignedCharArrayMetaField_meta)[0x24/4]&4)) igUnsignedCharArrayMetaField_registerNow();
 return igUnsignedCharArrayMetaField_meta;
}
void *igUnsignedCharArrayMetaField_vtableRead(){
 UnknownGenObject800233FC object;
 object.unknown00=igUnsignedCharMetaField_vtable;
 object.unknown00=igUnsignedCharArrayMetaField_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igUnsignedCharArrayMetaField_registerNow(){
 meta_registerNow((int)igUnsignedCharArrayMetaField_register);
}
void igUnsignedCharArrayMetaField_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igUnsignedCharArrayMetaField_meta,(int)igUnsignedCharMetaField_register,(int)igUnsignedCharArrayMetaField_parentMeta,(int)igUnsignedCharArrayMetaField_getMetaCall,(int)igUnsignedCharArrayMetaField_className,56,(int)igUnsignedCharArrayMetaField_vtableRead,(int)igUnsignedCharArrayMetaField_fieldInit,0,(int)lbl_8055CF78);
}
void *igUnsignedCharArrayMetaField_getMetaCall(){return igUnsignedCharArrayMetaField_getMeta();}
void *igUnsignedCharArrayMetaField_parentMeta(){return igUnsignedCharMetaField_meta;}
void igUnsignedCharArrayMetaField_fieldInit(){
 void *meta=igUnsignedCharArrayMetaField_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_8055CF80,1);
 fn_80053650(meta_field(meta,field),1);
 meta_setupFields(meta,lbl_8055CF84,lbl_8055CF88,lbl_8055CF8C,field);
}
void fn_800235D8(){
 if(!lbl_805614DC){
  void *object=(lbl_805614DC=meta_createInstance(igUnsignedCharArrayMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805614DC));
   reinterpret_cast<short *>(lbl_805614DC)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805614DC);
  }
 }
}
void *igTimer_create(void *object){
 igTimer_registerNow();
 return meta_createInstance(igTimer_meta,object);
}
void *fn_800236A8(){
 if(!igTimer_meta) igTimer_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTimer_meta;
}
void *igTimer_getMeta(){
 if(!igTimer_meta || !(reinterpret_cast<unsigned int *>(igTimer_meta)[0x24/4]&4)) igTimer_registerNow();
 return igTimer_meta;
}
void igTimer_registerNow(){
 meta_registerNow((int)igTimer_register);
}
void igTimer_register(){
 fn_80021B94();
 meta_registerClass(1,(int)&igTimer_meta,(int)igObject_register,(int)fn_800237D0,(int)igTimer_getMetaCall,(int)lbl_8055CF90,8,0,(int)fn_800237D8,0,0);
}
void *igTimer_getMetaCall(){return igTimer_getMeta();}
void *fn_800237D0(){return igObject_meta;}
void *fn_800237D8(){
 void *value0=igTimer_meta;
 reinterpret_cast<Meta::igMetaObject *>(value0)->_abstractProxy=(void *)(void *)igLongTimer_getMetaCall;
 return value0;
}
void *igLongTimer_getMetaCall(){return igLongTimer_getMeta();}
void *igThreadManager_create(void *object){
 igThreadManager_registerNow();
 return meta_createInstance(igThreadManager_meta,object);
}
void *igThreadManager_getMeta(){
 if(!igThreadManager_meta || !(reinterpret_cast<unsigned int *>(igThreadManager_meta)[0x24/4]&4)) igThreadManager_registerNow();
 return igThreadManager_meta;
}
void igThreadManager_registerNow(){
 meta_registerNow((int)igThreadManager_register);
}
void igThreadManager_register(){
 fn_80021B94();
 meta_registerClass(1,(int)&igThreadManager_meta,(int)igObject_register,(int)fn_800237D0,(int)igThreadManager_getMetaCall,(int)igThreadManager_className,16,0,(int)igThreadManager_fieldInit,(int)fn_80023A30,(int)lbl_804631F8);
}
void *igThreadManager_getMetaCall(){return igThreadManager_getMeta();}
void igThreadManager_fieldInit(){
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(igThreadManager_meta)+24)=1;
 void *value0=igThreadManager_meta;
 void *value2=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055CF98,2);
 void *value3=meta_field(value0,value2);
 void *value4=fn_80023E40();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+52)=1;
 void *value5=meta_field(value0,(reinterpret_cast<char *>(value2)+1));
 void *value6=fn_80026020();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+56)=value6;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value5)+52)=1;
 meta_setupFields(value0,lbl_8055CFA8,lbl_8055CFB0,lbl_8055CFB8,value2);
 void *value1=igThreadManager_meta;
 reinterpret_cast<Meta::igMetaObject *>(value1)->_abstractProxy=(void *)(void *)igGamecubeThreadManager_getMetaCall;
 fn_80065D94((void *)fn_80023A50);
}
void *igGamecubeThreadManager_getMetaCall(){return igGamecubeThreadManager_getMeta();}
void *fn_80023A30(){return fn_800755F8();}
void *fn_80023A50(){return fn_8007568C();}
void *fn_80023A70(){
 char *data=igVirtualCFuncMetaField_className;
 if(!lbl_805614F4) lbl_805614F4=fn_800635C8(data+0x174,data+0x144,data+0x15C,0x6);
 return lbl_805614F4;
}
void *fn_80023ABC(){
 void *value0;
 if(!lbl_805614F8){
  value0=fn_800635C8(lbl_8055D000,lbl_8055CFF0,lbl_8055CFF8,2);
  lbl_805614F8=value0;
 }
 return lbl_805614F8;
}
void *fn_80023B00(){
 void *value0;
 if(!lbl_805614FC){
  value0=fn_800635C8(lbl_8055D018,lbl_804632A8,lbl_804632B4,3);
  lbl_805614FC=value0;
 }
 return lbl_805614FC;
}
void *fn_80023B4C(){
 void *value0;
 if(!lbl_80561500){
  value0=fn_800635C8(lbl_8055D040,lbl_8055D030,lbl_8055D038,2);
  lbl_80561500=value0;
 }
 return lbl_80561500;
}
void *igThread_create(void *object){
 igThread_registerNow();
 return meta_createInstance(igThread_meta,object);
}
void *fn_80023BC8(){
 if(!igThread_meta) igThread_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igThread_meta;
}
void *igThread_getMeta(){
 if(!igThread_meta || !(reinterpret_cast<unsigned int *>(igThread_meta)[0x24/4]&4)) igThread_registerNow();
 return igThread_meta;
}
void igThread_registerNow(){
 meta_registerNow((int)igThread_register);
}
void igThread_register(){
 fn_80021B94();
 meta_registerClass(1,(int)&igThread_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igThread_getMetaCall,(int)igThread_className,48,0,(int)igThread_fieldInit,0,0);
}
void *igThread_getMetaCall(){return igThread_getMeta();}
void *fn_80023CF4(){return igNamedObject_meta;}
}
#pragma pop
