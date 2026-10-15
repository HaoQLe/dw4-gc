#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *fn_800237D0();
void *fn_80023FDC();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_8010F0F4();
void igGeometryElement_register();
void igNonRefCountedObjectList_register();
void igObjectList_register();
void igObject_register();
void igTextElement_fieldInit();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char igNonRefCountedObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igNonRefCountedViewList_className[];
extern char igViewList_className[];
extern char lbl_80494648[];
extern char igTextElement_className[];
extern char igTextElement_vtable[];
extern char lbl_80497ED4[];
extern char igViewList_vtable[];
extern char lbl_80497F9C[];
extern char igNonRefCountedViewList_vtable[];
extern char lbl_804980C8[];
extern char lbl_8055EEB0[8];
extern char lbl_8055EEB8[8];
extern char lbl_8055EEC0[8];
extern char lbl_8055EEC8[7];
extern char lbl_8055EED0[4];
extern char lbl_8055EEDC[4];
extern char lbl_8055EEE0[4];
extern char lbl_8055EEE4[4];
extern void *lbl_805621F4;
extern char lbl_80563570[1];
extern char lbl_80563571[1];
extern void *igNonRefCountedViewList_meta;
extern void *igViewList_meta;
extern void *igView_meta;
extern void *igTextElement_meta;
extern void *igGeometryElement_meta;
void fn_8010CBD4();
void *igNonRefCountedViewList_getMeta();
void *igNonRefCountedViewList_vtableRead();
void igNonRefCountedViewList_registerNow();
void igNonRefCountedViewList_register();
void *igNonRefCountedViewList_getMetaCall();
void *igViewList_getMeta();
void *igViewList_vtableRead();
void igViewList_registerNow();
void igViewList_register();
void *igViewList_getMetaCall();
void *igView_getMeta();
void igView_registerNow();
void igView_register();
void *igView_getMetaCall();
void igView_fieldInit();
void *igTextElement_getMeta();
void *igTextElement_vtableRead();
void igTextElement_registerNow();
void igTextElement_register();
void *igTextElement_getMetaCall();
void *igTextElement_parentMeta();
}
struct UnknownGenObject8010CC80_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8010CE1C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8010D130 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010D130(){igObject_construct(this);}
};
struct UnknownGenObject8010D130_0 : UnknownGenRoot8010D130 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[28];
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject8010D130_0(){unknown00=lbl_80497ED4;}
};
struct UnknownGenObject8010D130 : UnknownGenObject8010D130_0 {
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 UnknownGenString unknown34;
 char unknown38[8];
 inline ~UnknownGenObject8010D130(){unknown00=igTextElement_vtable;}
};
extern "C" {
void *fn_8010CB98(int p0,int p1,int p2,int p3,int p4,int p5){
 if((int)p0!=0){
  if((int)(short)p1>0){
   __dl__FPv((void *)p0);
  }
 }
 return (void *)p0;
}
void fn_8010CBD4(){
 if((int)*reinterpret_cast<signed char *>((lbl_80563571+0))==0){
  *reinterpret_cast<unsigned char *>((lbl_80563570+0))=0;
  *reinterpret_cast<unsigned char *>((lbl_80563571+0))=1;
 }
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80563570+0))){
  return;
 }
 *reinterpret_cast<unsigned char *>((lbl_80563570+0))=1;
}
void *fn_8010CC08(){
 if(!igNonRefCountedViewList_meta) igNonRefCountedViewList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igNonRefCountedViewList_meta;
}
void *igNonRefCountedViewList_getMeta(){
 if(!igNonRefCountedViewList_meta || !(reinterpret_cast<unsigned int *>(igNonRefCountedViewList_meta)[0x24/4]&4)) igNonRefCountedViewList_registerNow();
 return igNonRefCountedViewList_meta;
}
void *igNonRefCountedViewList_vtableRead(){
 UnknownGenObject8010CC80_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igNonRefCountedObjectList_vtable;
 object.unknown00=lbl_804980C8;
 object.unknown00=igNonRefCountedViewList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igNonRefCountedViewList_registerNow(){
 meta_registerNow((int)igNonRefCountedViewList_register);
}
void igNonRefCountedViewList_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igNonRefCountedViewList_meta,(int)igNonRefCountedObjectList_register,(int)fn_80023FDC,(int)igNonRefCountedViewList_getMetaCall,(int)igNonRefCountedViewList_className,20,(int)igNonRefCountedViewList_vtableRead,0,0,(int)lbl_8055EEB0);
}
void *igNonRefCountedViewList_getMetaCall(){return igNonRefCountedViewList_getMeta();}
void *fn_8010CDA4(){
 if(!igViewList_meta) igViewList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igViewList_meta;
}
void *igViewList_getMeta(){
 if(!igViewList_meta || !(reinterpret_cast<unsigned int *>(igViewList_meta)[0x24/4]&4)) igViewList_registerNow();
 return igViewList_meta;
}
void *igViewList_vtableRead(){
 UnknownGenObject8010CE1C_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_80497F9C;
 object.unknown00=igViewList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igViewList_registerNow(){
 meta_registerNow((int)igViewList_register);
}
void igViewList_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igViewList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igViewList_getMetaCall,(int)igViewList_className,20,(int)igViewList_vtableRead,0,0,(int)lbl_8055EEB8);
}
void *igViewList_getMetaCall(){return igViewList_getMeta();}
void *igView_getMeta(){
 if(!igView_meta || !(reinterpret_cast<unsigned int *>(igView_meta)[0x24/4]&4)) igView_registerNow();
 return igView_meta;
}
void igView_registerNow(){
 meta_registerNow((int)igView_register);
}
void igView_register(){
 fn_8010CBD4();
 meta_registerClass(1,(int)&igView_meta,(int)igObject_register,(int)fn_800237D0,(int)igView_getMetaCall,(int)lbl_8055EEC8,12,0,(int)igView_fieldInit,0,(int)lbl_8055EEC0);
}
void *igView_getMetaCall(){return igView_getMeta();}
void igView_fieldInit(){
 void *value0=igView_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055EED0,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_8010F0F4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 meta_setupFields(value0,lbl_8055EEDC,lbl_8055EEE0,lbl_8055EEE4,value1);
}
void *fn_8010D0B8(){
 if(!igTextElement_meta) igTextElement_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTextElement_meta;
}
void *igTextElement_getMeta(){
 if(!igTextElement_meta || !(reinterpret_cast<unsigned int *>(igTextElement_meta)[0x24/4]&4)) igTextElement_registerNow();
 return igTextElement_meta;
}
void *igTextElement_vtableRead(){
 UnknownGenObject8010D130 object;
 object.unknown00=lbl_80497ED4;
 object.unknown08.value=0;
 object.unknown28.value=0;
 object.unknown00=igTextElement_vtable;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 object.unknown34.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
UnknownGenHolder *dtor_8010D2B8(UnknownGenHolder *object,short flags){
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
void igTextElement_registerNow(){
 meta_registerNow((int)igTextElement_register);
}
void igTextElement_register(){
 fn_8010CBD4();
 meta_registerClass(0,(int)&igTextElement_meta,(int)igGeometryElement_register,(int)igTextElement_parentMeta,(int)igTextElement_getMetaCall,(int)igTextElement_className,56,(int)igTextElement_vtableRead,(int)igTextElement_fieldInit,0,(int)lbl_80494648);
}
void *igTextElement_getMetaCall(){return igTextElement_getMeta();}
void *igTextElement_parentMeta(){return igGeometryElement_meta;}
}
#pragma pop
