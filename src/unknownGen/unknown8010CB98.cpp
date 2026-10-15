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
extern char igTextElement_dependencies[];
extern char igTextElement_className[];
extern char igTextElement_vtable[];
extern char lbl_80497ED4[];
extern char igViewList_vtable[];
extern char lbl_80497F9C[];
extern char igNonRefCountedViewList_vtable[];
extern char lbl_804980C8[];
extern char igNonRefCountedViewList_dependencies[8];
extern char igViewList_dependencies[8];
extern char igView_dependencies[8];
extern char lbl_8055EEC8[7];
extern char igView_fieldTypes[4];
extern char igView_fieldNames[4];
extern char igView_fieldStorage[4];
extern char igView_fieldOffsets[4];
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
void igNonRefCountedViewList_arkRegister();
void igNonRefCountedViewList_register();
void *igNonRefCountedViewList_getMetaCall();
void *igViewList_getMeta();
void *igViewList_vtableRead();
void igViewList_arkRegister();
void igViewList_register();
void *igViewList_getMetaCall();
void *igView_getMeta();
void igView_arkRegister();
void igView_register();
void *igView_getMetaCall();
void igView_fieldInit();
void *igTextElement_getMeta();
void *igTextElement_vtableRead();
void igTextElement_arkRegister();
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
}
#pragma pop
