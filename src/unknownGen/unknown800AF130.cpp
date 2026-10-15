#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800C3A2C(int);
void fn_800C3A9C();
void igTextureAttr_fieldInit();
void igVisualAttribute_register();
extern char igTextureBindAttr_className[];
extern char lbl_80478534[];
extern char igTextureAttr_className[];
extern char igTextureBindAttr_vtable[];
extern char igTextureAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E030[8];
extern char lbl_8055E038[8];
extern char lbl_8055E040[8];
extern char lbl_8055E048[8];
extern char lbl_8055E050[8];
extern void *lbl_805621F4;
extern void *igTextureBindAttr_meta;
extern void *igTextureAttr_meta;
void *igTextureBindAttr_getMeta();
void *igTextureBindAttr_vtableRead();
void igTextureBindAttr_registerNow();
void igTextureBindAttr_register();
void *igTextureBindAttr_getMetaCall();
void igTextureBindAttr_fieldInit();
void fn_800AF44C();
void *fn_800AF4A4();
void *igTextureAttr_getMeta();
void *igTextureAttr_vtableRead();
void igTextureAttr_registerNow();
void igTextureAttr_register();
void *igTextureAttr_getMetaCall();
}
struct UnknownGenRoot800AF1E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AF1E0(){fn_8006665C(this);}
};
struct UnknownGenObject800AF1E0 : UnknownGenRoot800AF1E0 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject800AF1E0(){unknown00=igTextureBindAttr_vtable;}
};
struct UnknownGenRoot800AF51C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AF51C(){fn_8006665C(this);}
};
struct UnknownGenObject800AF51C : UnknownGenRoot800AF51C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[32];
 UnknownGenRefMember unknown30;
 char unknown34[4];
 UnknownGenRefMember unknown38;
 char unknown3C[4];
 UnknownGenRefMember unknown40;
 char unknown44[4];
 inline ~UnknownGenObject800AF51C(){unknown00=igTextureAttr_vtable;}
};
extern "C" {
void *igTextureBindAttr_create(void *object){
 igTextureBindAttr_registerNow();
 return meta_createInstance(igTextureBindAttr_meta,object);
}
void *fn_800AF168(){
 if(!igTextureBindAttr_meta) igTextureBindAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTextureBindAttr_meta;
}
void *igTextureBindAttr_getMeta(){
 if(!igTextureBindAttr_meta || !(reinterpret_cast<unsigned int *>(igTextureBindAttr_meta)[0x24/4]&4)) igTextureBindAttr_registerNow();
 return igTextureBindAttr_meta;
}
void *igTextureBindAttr_vtableRead(){
 UnknownGenObject800AF1E0 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igTextureBindAttr_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
UnknownGenHolder *dtor_800AF280(UnknownGenHolder *object,short flags){
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
void igTextureBindAttr_registerNow(){
 meta_registerNow((int)igTextureBindAttr_register);
}
void igTextureBindAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igTextureBindAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTextureBindAttr_getMetaCall,(int)igTextureBindAttr_className,20,(int)igTextureBindAttr_vtableRead,(int)igTextureBindAttr_fieldInit,(int)fn_800AF44C,(int)lbl_8055E030);
}
void *igTextureBindAttr_getMetaCall(){return igTextureBindAttr_getMeta();}
void igTextureBindAttr_fieldInit(){
 void *value0=igTextureBindAttr_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E038,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800AF4A4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+48)=(void *)fn_800C3A2C;
 fn_800659C0(value0,lbl_8055E040,lbl_8055E048,lbl_8055E050,value1);
}
void fn_800AF44C(){return fn_800C3A9C();}
void *igTextureAttr_create(void *object){
 igTextureAttr_registerNow();
 return meta_createInstance(igTextureAttr_meta,object);
}
void *fn_800AF4A4(){
 if(!igTextureAttr_meta) igTextureAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTextureAttr_meta;
}
void *igTextureAttr_getMeta(){
 if(!igTextureAttr_meta || !(reinterpret_cast<unsigned int *>(igTextureAttr_meta)[0x24/4]&4)) igTextureAttr_registerNow();
 return igTextureAttr_meta;
}
void *igTextureAttr_vtableRead(){
 UnknownGenObject800AF51C object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igTextureAttr_vtable;
 object.unknown0C.value=0;
 object.unknown30.value=0;
 object.unknown38.value=0;
 object.unknown40.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTextureAttr_registerNow(){
 meta_registerNow((int)igTextureAttr_register);
}
void igTextureAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igTextureAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTextureAttr_getMetaCall,(int)igTextureAttr_className,72,(int)igTextureAttr_vtableRead,(int)igTextureAttr_fieldInit,0,(int)lbl_80478534);
}
void *igTextureAttr_getMetaCall(){return igTextureAttr_getMeta();}
}
#pragma pop
