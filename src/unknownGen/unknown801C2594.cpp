#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void igCompressedTransformSequence1_5Data_fieldInit();
void igObject_register();
extern char igCompressedTransformSequence1_5Data_className[];
extern char igCompressedTransformSequence1_5Data_vtable[];
extern char lbl_805606D4[8];
extern void *lbl_805621F4;
extern void *igCompressedTransformSequence1_5Data_meta;
void *igCompressedTransformSequence1_5Data_getMeta();
void *igCompressedTransformSequence1_5Data_vtableRead();
void igCompressedTransformSequence1_5Data_registerNow();
void igCompressedTransformSequence1_5Data_register();
void *igCompressedTransformSequence1_5Data_getMetaCall();
}
struct UnknownGenRoot801C260C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C260C(){fn_8006665C(this);}
};
struct UnknownGenObject801C260C : UnknownGenRoot801C260C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[32];
 inline ~UnknownGenObject801C260C(){unknown00=igCompressedTransformSequence1_5Data_vtable;}
};
extern "C" {
void *fn_801C2594(){
 if(!igCompressedTransformSequence1_5Data_meta) igCompressedTransformSequence1_5Data_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igCompressedTransformSequence1_5Data_meta;
}
void *igCompressedTransformSequence1_5Data_getMeta(){
 if(!igCompressedTransformSequence1_5Data_meta || !(reinterpret_cast<unsigned int *>(igCompressedTransformSequence1_5Data_meta)[0x24/4]&4)) igCompressedTransformSequence1_5Data_registerNow();
 return igCompressedTransformSequence1_5Data_meta;
}
void *igCompressedTransformSequence1_5Data_vtableRead(){
 UnknownGenObject801C260C object;
 object.unknown00=igCompressedTransformSequence1_5Data_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCompressedTransformSequence1_5Data_registerNow(){
 meta_registerNow((int)igCompressedTransformSequence1_5Data_register);
}
void igCompressedTransformSequence1_5Data_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igCompressedTransformSequence1_5Data_meta,(int)igObject_register,(int)fn_800237D0,(int)igCompressedTransformSequence1_5Data_getMetaCall,(int)igCompressedTransformSequence1_5Data_className,48,(int)igCompressedTransformSequence1_5Data_vtableRead,(int)igCompressedTransformSequence1_5Data_fieldInit,0,(int)lbl_805606D4);
}
void *igCompressedTransformSequence1_5Data_getMetaCall(){return igCompressedTransformSequence1_5Data_getMeta();}
}
#pragma pop
