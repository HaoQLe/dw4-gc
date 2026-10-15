#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800321EC();
void *fn_80053998(void *,void *);
void *fn_800607F4(void *);
void fn_8006588C(void *,void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void igDoubleList_register();
void igShaderProcessor_register();
void igTextureTransformMovieProcessor_fieldInit();
extern char igDataList_vtable[];
extern char igDoubleList_vtable[];
extern char lbl_80474F18[];
extern char igSpecialDoubleList_className[];
extern char igTextureTransformMovieProcessor_dependencies[];
extern char igTextureTransformMovieProcessor_className[];
extern char igTextureTransformMovieProcessor_vtable[];
extern char igShaderProcessor_vtable[];
extern char igSpecialDoubleList_vtable[];
extern char lbl_80560194[6];
extern void *igDoubleList_meta;
extern void *lbl_805621F4;
extern void *igSpecialDoubleList_meta;
extern char lbl_80564758[4];
extern void *igTextureTransformMovieProcessor_meta;
extern void *igShaderProcessor_meta;
void *igSpecialDoubleList_getMeta();
void *igSpecialDoubleList_vtableRead();
void igSpecialDoubleList_arkRegister();
void igSpecialDoubleList_register();
void *igSpecialDoubleList_getMetaCall();
void *igSpecialDoubleList_parentMeta();
void fn_801AD4F8();
void *igTextureTransformMovieProcessor_getMeta();
void *igTextureTransformMovieProcessor_vtableRead();
void igTextureTransformMovieProcessor_arkRegister();
void igTextureTransformMovieProcessor_register();
void *igTextureTransformMovieProcessor_getMetaCall();
void *fn_801AD7BC();
}
struct UnknownGenObject801AD3D4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801AD5F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AD5F0(){igObject_construct(this);}
};
struct UnknownGenObject801AD5F0 : UnknownGenRoot801AD5F0 {
 char unknown04[20];
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[4];
 UnknownGenRefMember unknown24;
 char unknown28[48];
 inline ~UnknownGenObject801AD5F0(){unknown00=igTextureTransformMovieProcessor_vtable;}
};
extern "C" {
void *fn_801AD35C(){
 if(!igSpecialDoubleList_meta) igSpecialDoubleList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igSpecialDoubleList_meta;
}
}
#pragma pop
