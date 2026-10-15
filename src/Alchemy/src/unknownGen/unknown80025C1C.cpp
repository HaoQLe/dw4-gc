#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void fn_80021B94();
void *fn_80023CF4();
void igShortMetaField_registerNow();
void *meta_newMetaObject(void *);
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
void fn_80071108(void *);
void *igGamecubeSemaphore_getMeta();
void igNamedObject_register();
void *igShortMetaField_getMeta();
void igShortMetaField_register();
extern char igShortArrayMetaField_className[];
extern char igSemaphore_className[];
extern char igShortArrayMetaField_vtable[];
extern char lbl_80471914[];
extern char lbl_80476848[];
extern char lbl_8055D120[8];
extern char lbl_8055D128[4];
extern char lbl_8055D12C[4];
extern char lbl_8055D130[4];
extern char lbl_8055D134[4];
extern void *igShortMetaField_meta;
extern void *lbl_805615DC;
extern void *igShortArrayMetaField_meta;
extern void *lbl_805615E4;
extern void *igSemaphore_meta;
extern void *lbl_805621F4;
void *igShortArrayMetaField_getMeta();
void *igShortArrayMetaField_vtableRead();
void igShortArrayMetaField_registerNow();
void igShortArrayMetaField_register();
void *igShortArrayMetaField_getMetaCall();
void *igShortArrayMetaField_parentMeta();
void igShortArrayMetaField_fieldInit();
void *igSemaphore_getMeta();
void igSemaphore_registerNow();
void igSemaphore_register();
void *igSemaphore_getMetaCall();
void *fn_8002614C();
void *igGamecubeSemaphore_getMetaCall();
}
struct UnknownGenRoot80025D78 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80025D78(){fn_80071108(this);}
};
struct UnknownGenObject80025D78_0 : UnknownGenRoot80025D78 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80025D78_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80025D78_1 : UnknownGenObject80025D78_0 {
 inline ~UnknownGenObject80025D78_1(){unknown00=lbl_80476848;}
};
struct UnknownGenObject80025D78 : UnknownGenObject80025D78_1 {
 char unknown10[48];
 inline ~UnknownGenObject80025D78(){unknown00=igShortArrayMetaField_vtable;}
};
extern "C" {
void *igShortMetaField_getMetaCall(){return igShortMetaField_getMeta();}
void fn_80025C3C(){
 if(!lbl_805615DC){
  void *object=(lbl_805615DC=meta_createInstance(igShortMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805615DC));
   reinterpret_cast<short *>(lbl_805615DC)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805615DC);
  }
 }
}
void *fn_80025CD4(){
 if(!lbl_805615DC){
  igShortMetaField_registerNow();
 }
 return lbl_805615DC;
}
void *igShortArrayMetaField_create(void *object){
 igShortArrayMetaField_registerNow();
 return meta_createInstance(igShortArrayMetaField_meta,object);
}
void *igShortArrayMetaField_getMeta(){
 if(!igShortArrayMetaField_meta || !(reinterpret_cast<unsigned int *>(igShortArrayMetaField_meta)[0x24/4]&4)) igShortArrayMetaField_registerNow();
 return igShortArrayMetaField_meta;
}
void *igShortArrayMetaField_vtableRead(){
 UnknownGenObject80025D78 object;
 object.unknown00=igShortArrayMetaField_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igShortArrayMetaField_registerNow(){
 meta_registerNow((int)igShortArrayMetaField_register);
}
void igShortArrayMetaField_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igShortArrayMetaField_meta,(int)igShortMetaField_register,(int)igShortArrayMetaField_parentMeta,(int)igShortArrayMetaField_getMetaCall,(int)igShortArrayMetaField_className,56,(int)igShortArrayMetaField_vtableRead,(int)igShortArrayMetaField_fieldInit,0,(int)lbl_8055D120);
}
void *igShortArrayMetaField_getMetaCall(){return igShortArrayMetaField_getMeta();}
void *igShortArrayMetaField_parentMeta(){return igShortMetaField_meta;}
void igShortArrayMetaField_fieldInit(){
 void *meta=igShortArrayMetaField_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_8055D128,1);
 fn_80053650(meta_field(meta,field),1);
 meta_setupFields(meta,lbl_8055D12C,lbl_8055D130,lbl_8055D134,field);
}
void fn_80025F50(){
 if(!lbl_805615E4){
  void *object=(lbl_805615E4=meta_createInstance(igShortArrayMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805615E4));
   reinterpret_cast<short *>(lbl_805615E4)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805615E4);
  }
 }
}
void *igSemaphore_create(void *object){
 igSemaphore_registerNow();
 return meta_createInstance(igSemaphore_meta,object);
}
void *fn_80026020(){
 if(!igSemaphore_meta) igSemaphore_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igSemaphore_meta;
}
void *igSemaphore_getMeta(){
 if(!igSemaphore_meta || !(reinterpret_cast<unsigned int *>(igSemaphore_meta)[0x24/4]&4)) igSemaphore_registerNow();
 return igSemaphore_meta;
}
void igSemaphore_registerNow(){
 meta_registerNow((int)igSemaphore_register);
}
void igSemaphore_register(){
 fn_80021B94();
 meta_registerClass(1,(int)&igSemaphore_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igSemaphore_getMetaCall,(int)igSemaphore_className,12,0,(int)fn_8002614C,0,0);
}
void *igSemaphore_getMetaCall(){return igSemaphore_getMeta();}
void *fn_8002614C(){
 void *value0=igSemaphore_meta;
 reinterpret_cast<Meta::igMetaObject *>(value0)->_abstractProxy=(void *)(void *)igGamecubeSemaphore_getMetaCall;
 return value0;
}
void *igGamecubeSemaphore_getMetaCall(){return igGamecubeSemaphore_getMeta();}
UnknownGenHolder *dtor_80026180(UnknownGenHolder *object,short flags){
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
}
#pragma pop
