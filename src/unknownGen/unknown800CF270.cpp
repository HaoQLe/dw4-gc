#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CE2F8();
void *igGamecubeVertexArray2_getMeta();
void igNamedObject_register();
void *igVertexStream_fieldInit();
extern char igNamedObject_vtable[];
extern char lbl_80480EC0[];
extern char igVertexStream_className[];
extern char igVertexStream_vtable[];
extern char igVertexStream_dependencies[8];
extern void *lbl_805621F4;
extern void *lbl_80562D94;
extern void *lbl_80562D98;
extern void *igVertexStream_meta;
void *igVertexStream_getMeta();
void *igVertexStream_vtableRead();
void igVertexStream_arkRegister();
void igVertexStream_register();
void *igVertexStream_getMetaCall();
}
struct UnknownGenRoot800CF3B8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CF3B8(){igObject_construct(this);}
};
struct UnknownGenObject800CF3B8_0 : UnknownGenRoot800CF3B8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800CF3B8_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800CF3B8 : UnknownGenObject800CF3B8_0 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[24];
 inline ~UnknownGenObject800CF3B8(){unknown00=igVertexStream_vtable;}
};
extern "C" {
void *fn_800CF270(){
 char *data=lbl_80480EC0;
 if(!lbl_80562D94) lbl_80562D94=fn_800635C8(data+0x7648,data+0x7630,data+0x763C,0x3);
 return lbl_80562D94;
}
void *fn_800CF2BC(){
 char *data=lbl_80480EC0;
 if(!lbl_80562D98) lbl_80562D98=fn_800635C8(data+0x76F0,data+0x76D0,data+0x76E0,0x4);
 return lbl_80562D98;
}
}
#pragma pop
