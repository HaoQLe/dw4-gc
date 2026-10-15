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
void *igSpecialDoubleList_getMeta(){
 if(!igSpecialDoubleList_meta || !(reinterpret_cast<unsigned int *>(igSpecialDoubleList_meta)[0x24/4]&4)) igSpecialDoubleList_arkRegister();
 return igSpecialDoubleList_meta;
}
void *igSpecialDoubleList_vtableRead(){
 UnknownGenObject801AD3D4_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80474F18;
 object.unknown00=igDoubleList_vtable;
 object.unknown00=igSpecialDoubleList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igSpecialDoubleList_arkRegister(){
 meta_registerNow((int)igSpecialDoubleList_register);
}
void igSpecialDoubleList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igSpecialDoubleList_meta,(int)igDoubleList_register,(int)igSpecialDoubleList_parentMeta,(int)igSpecialDoubleList_getMetaCall,(int)igSpecialDoubleList_className,20,(int)igSpecialDoubleList_vtableRead,(int)fn_801AD4F8,0,0);
}
void *igSpecialDoubleList_getMetaCall(){return igSpecialDoubleList_getMeta();}
void *igSpecialDoubleList_parentMeta(){return igDoubleList_meta;}
void fn_801AD4F8(){
 void *meta=igSpecialDoubleList_meta;
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>(fn_800658F8(meta,lbl_80560194));
 void *type=fn_80053998(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C=fn_800321EC();
 field->unknown38=0;
 field->unknown1C=lbl_80564758;
 fn_8006588C(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}
void *igTextureTransformMovieProcessor_getMeta(){
 if(!igTextureTransformMovieProcessor_meta || !(reinterpret_cast<unsigned int *>(igTextureTransformMovieProcessor_meta)[0x24/4]&4)) igTextureTransformMovieProcessor_arkRegister();
 return igTextureTransformMovieProcessor_meta;
}
void *igTextureTransformMovieProcessor_vtableRead(){
 UnknownGenObject801AD5F0 object;
 object.unknown00=igShaderProcessor_vtable;
 object.unknown00=igTextureTransformMovieProcessor_vtable;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTextureTransformMovieProcessor_arkRegister(){
 meta_registerNow((int)igTextureTransformMovieProcessor_register);
}
void igTextureTransformMovieProcessor_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igTextureTransformMovieProcessor_meta,(int)igShaderProcessor_register,(int)fn_801AD7BC,(int)igTextureTransformMovieProcessor_getMetaCall,(int)igTextureTransformMovieProcessor_className,80,(int)igTextureTransformMovieProcessor_vtableRead,(int)igTextureTransformMovieProcessor_fieldInit,0,(int)igTextureTransformMovieProcessor_dependencies);
}
void *igTextureTransformMovieProcessor_getMetaCall(){return igTextureTransformMovieProcessor_getMeta();}
void *fn_801AD7BC(){return igShaderProcessor_meta;}
}
#pragma pop
