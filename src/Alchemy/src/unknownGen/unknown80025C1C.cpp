#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void fn_80021B94();
void *fn_80023CF4();
void fn_80025B8C();
void *fn_80029E64(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80071108(void *);
void *igGamecubeSemaphore_getMeta();
void igNamedObject_register();
void *igShortMetaField_getMeta();
void igShortMetaField_register();
extern char lbl_804636EC[];
extern char lbl_80463704[];
extern char lbl_8047110C[];
extern char lbl_80471914[];
extern char lbl_80476848[];
extern char lbl_8055D120[8];
extern char lbl_8055D128[4];
extern char lbl_8055D12C[4];
extern char lbl_8055D130[4];
extern char lbl_8055D134[4];
extern void *lbl_805615D8;
extern void *lbl_805615DC;
extern void *lbl_805615E0;
extern void *lbl_805615E4;
extern void *lbl_805615EC;
extern void *lbl_805621F4;
void *igShortArrayMetaField_getMeta();
void *igShortArrayMetaField_vtableRead();
void fn_80025E10();
void igShortArrayMetaField_register();
void *igShortArrayMetaField_getMetaCall();
void *igShortArrayMetaField_parentMeta();
void igShortArrayMetaField_fieldInit();
void *igSemaphore_getMeta();
void fn_80026098();
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
 inline ~UnknownGenObject80025D78(){unknown00=lbl_8047110C;}
};
extern "C" {
void *igShortMetaField_getMetaCall(){return igShortMetaField_getMeta();}
void fn_80025C3C(){
 if(!lbl_805615DC){
  void *object=(lbl_805615DC=fn_8006546C(lbl_805615D8,fn_800607F4(lbl_805621F4)));
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
  fn_80025B8C();
 }
 return lbl_805615DC;
}
void *fn_80025D04(void *object){
 fn_80025E10();
 return fn_8006546C(lbl_805615E0,object);
}
void *igShortArrayMetaField_getMeta(){
 if(!lbl_805615E0 || !(reinterpret_cast<unsigned int *>(lbl_805615E0)[0x24/4]&4)) fn_80025E10();
 return lbl_805615E0;
}
void *igShortArrayMetaField_vtableRead(){
 UnknownGenObject80025D78 object;
 object.unknown00=lbl_8047110C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80025E10(){
 fn_80066188((int)igShortArrayMetaField_register);
}
void igShortArrayMetaField_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805615E0,(int)igShortMetaField_register,(int)igShortArrayMetaField_parentMeta,(int)igShortArrayMetaField_getMetaCall,(int)lbl_804636EC,56,(int)igShortArrayMetaField_vtableRead,(int)igShortArrayMetaField_fieldInit,0,(int)lbl_8055D120);
}
void *igShortArrayMetaField_getMetaCall(){return igShortArrayMetaField_getMeta();}
void *igShortArrayMetaField_parentMeta(){return lbl_805615D8;}
void igShortArrayMetaField_fieldInit(){
 void *meta=lbl_805615E0;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055D128,1);
 fn_80053650(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055D12C,lbl_8055D130,lbl_8055D134,field);
}
void fn_80025F50(){
 if(!lbl_805615E4){
  void *object=(lbl_805615E4=fn_8006546C(lbl_805615E0,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805615E4));
   reinterpret_cast<short *>(lbl_805615E4)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805615E4);
  }
 }
}
void *fn_80025FE8(void *object){
 fn_80026098();
 return fn_8006546C(lbl_805615EC,object);
}
void *fn_80026020(){
 if(!lbl_805615EC) lbl_805615EC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805615EC;
}
void *igSemaphore_getMeta(){
 if(!lbl_805615EC || !(reinterpret_cast<unsigned int *>(lbl_805615EC)[0x24/4]&4)) fn_80026098();
 return lbl_805615EC;
}
void fn_80026098(){
 fn_80066188((int)igSemaphore_register);
}
void igSemaphore_register(){
 fn_80021B94();
 fn_80066204(1,(int)&lbl_805615EC,(int)igNamedObject_register,(int)fn_80023CF4,(int)igSemaphore_getMetaCall,(int)lbl_80463704,12,0,(int)fn_8002614C,0,0);
}
void *igSemaphore_getMetaCall(){return igSemaphore_getMeta();}
void *fn_8002614C(){
 void *value0=lbl_805615EC;
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
