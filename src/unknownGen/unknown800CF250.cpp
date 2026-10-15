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
void fn_8006665C(void *);
void fn_800CE2F8();
void *igGamecubeVertexArray2_getMeta();
void igNamedObject_register();
void *igVertexStream_fieldInit();
extern char igNamedObject_vtable[];
extern char lbl_80480EC0[];
extern char igVertexStream_className[];
extern char igVertexStream_vtable[];
extern char lbl_8055EA8C[8];
extern void *lbl_805621F4;
extern void *lbl_80562D94;
extern void *lbl_80562D98;
extern void *igVertexStream_meta;
void *igVertexStream_getMeta();
void *igVertexStream_vtableRead();
void igVertexStream_registerNow();
void igVertexStream_register();
void *igVertexStream_getMetaCall();
}
struct UnknownGenRoot800CF3B8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CF3B8(){fn_8006665C(this);}
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
void *igGamecubeVertexArray2_getMetaCall(){return igGamecubeVertexArray2_getMeta();}
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
void *igVertexStream_create(void *object){
 igVertexStream_registerNow();
 return meta_createInstance(igVertexStream_meta,object);
}
void *fn_800CF340(){
 if(!igVertexStream_meta) igVertexStream_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igVertexStream_meta;
}
void *igVertexStream_getMeta(){
 if(!igVertexStream_meta || !(reinterpret_cast<unsigned int *>(igVertexStream_meta)[0x24/4]&4)) igVertexStream_registerNow();
 return igVertexStream_meta;
}
void *igVertexStream_vtableRead(){
 UnknownGenObject800CF3B8 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igVertexStream_vtable;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igVertexStream_registerNow(){
 meta_registerNow((int)igVertexStream_register);
}
void igVertexStream_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igVertexStream_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igVertexStream_getMetaCall,(int)igVertexStream_className,36,(int)igVertexStream_vtableRead,(int)igVertexStream_fieldInit,0,(int)lbl_8055EA8C);
}
void *igVertexStream_getMetaCall(){return igVertexStream_getMeta();}
}
#pragma pop
