#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void igParameterExist_fieldInit();
void igParameterSetConstraint_register();
extern char igParameterNonNull_className[];
extern char igParameterMatch_className[];
extern char igParameterExist_className[];
extern char igParameterNonNull_vtable[];
extern char igParameterMatch_vtable[];
extern char igParameterExist_vtable[];
extern char lbl_804AA298[];
extern char igParameterNonNull_fieldTypes[4];
extern char igParameterNonNull_fieldNames[4];
extern char igParameterNonNull_fieldStorage[4];
extern char igParameterNonNull_fieldOffsets[4];
extern char igParameterMatch_fieldTypes[8];
extern char igParameterMatch_fieldNames[8];
extern char igParameterMatch_fieldStorage[8];
extern char igParameterMatch_fieldOffsets[8];
extern char igParameterExist_dependencies[8];
extern void *igParameterSetConstraint_meta;
extern void *igParameterNonNull_meta;
extern void *igParameterMatch_meta;
extern void *igParameterExist_meta;
void *igParameterNonNull_getMeta();
void *igParameterNonNull_vtableRead();
void igParameterNonNull_arkRegister();
void igParameterNonNull_register();
void *igParameterNonNull_getMetaCall();
void *fn_80139794();
void igParameterNonNull_fieldInit();
void *igParameterMatch_getMeta();
void *igParameterMatch_vtableRead();
void igParameterMatch_arkRegister();
void igParameterMatch_register();
void *igParameterMatch_getMetaCall();
void igParameterMatch_fieldInit();
void *igParameterExist_getMeta();
void *igParameterExist_vtableRead();
void igParameterExist_arkRegister();
void igParameterExist_register();
void *igParameterExist_getMetaCall();
}
struct UnknownGenRoot801395FC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801395FC(){igObject_construct(this);}
};
struct UnknownGenObject801395FC_0 : UnknownGenRoot801395FC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801395FC_0(){unknown00=lbl_804AA298;}
};
struct UnknownGenObject801395FC : UnknownGenObject801395FC_0 {
 UnknownGenString unknown0C;
 inline ~UnknownGenObject801395FC(){unknown00=igParameterNonNull_vtable;}
};
struct UnknownGenRoot80139878 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80139878(){igObject_construct(this);}
};
struct UnknownGenObject80139878_0 : UnknownGenRoot80139878 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80139878_0(){unknown00=lbl_804AA298;}
};
struct UnknownGenObject80139878 : UnknownGenObject80139878_0 {
 UnknownGenString unknown0C;
 UnknownGenString unknown10;
 char unknown14[4];
 inline ~UnknownGenObject80139878(){unknown00=igParameterMatch_vtable;}
};
struct UnknownGenRoot80139B24 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80139B24(){igObject_construct(this);}
};
struct UnknownGenObject80139B24_0 : UnknownGenRoot80139B24 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80139B24_0(){unknown00=lbl_804AA298;}
};
struct UnknownGenObject80139B24 : UnknownGenObject80139B24_0 {
 UnknownGenString unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject80139B24(){unknown00=igParameterExist_vtable;}
};
extern "C" {
void *igParameterExist_create(void *object){
 igParameterExist_arkRegister();
 return meta_createInstance(igParameterExist_meta,object);
}
void *igParameterExist_getMeta(){
 if(!igParameterExist_meta || !(reinterpret_cast<unsigned int *>(igParameterExist_meta)[0x24/4]&4)) igParameterExist_arkRegister();
 return igParameterExist_meta;
}
void *igParameterExist_vtableRead(){
 UnknownGenObject80139B24 object;
 object.unknown00=lbl_804AA298;
 object.unknown08.value=0;
 object.unknown00=igParameterExist_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igParameterExist_arkRegister(){
 meta_registerNow((int)igParameterExist_register);
}
void igParameterExist_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igParameterExist_meta,(int)igParameterSetConstraint_register,(int)fn_80139794,(int)igParameterExist_getMetaCall,(int)igParameterExist_className,24,(int)igParameterExist_vtableRead,(int)igParameterExist_fieldInit,0,(int)igParameterExist_dependencies);
}
void *igParameterExist_getMetaCall(){return igParameterExist_getMeta();}
}
#pragma pop
