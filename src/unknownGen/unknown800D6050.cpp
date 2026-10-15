#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80030000();
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CE2F8();
void igFileImage_register();
extern char igFileImagePng_className[];
extern char igFileImagePng_vtable[];
extern char lbl_804927D4[];
extern char lbl_80492F94[];
extern char igFileImagePng_dependencies[8];
extern char igFileImagePng_fieldTypes[4];
extern char igFileImagePng_fieldNames[4];
extern char igFileImagePng_fieldStorage[4];
extern char igFileImagePng_fieldOffsets[4];
extern void *igFileImage_meta;
extern void *igFileImagePng_meta;
void *igFileImagePng_getMeta();
void *igFileImagePng_vtableRead();
void igFileImagePng_arkRegister();
void igFileImagePng_register();
void *igFileImagePng_getMetaCall();
void *igFileImagePng_parentMeta();
void igFileImagePng_fieldInit();
}
struct UnknownGenRoot800D5E64 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D5E64(){igObject_construct(this);}
};
struct UnknownGenObject800D5E64_0 : UnknownGenRoot800D5E64 {
 char unknown04[64];
 UnknownGenRefMember unknown44;
 char unknown48[16];
 UnknownGenString unknown58;
 inline ~UnknownGenObject800D5E64_0(){unknown00=lbl_804927D4;}
};
struct UnknownGenObject800D5E64_1 : UnknownGenObject800D5E64_0 {
 inline ~UnknownGenObject800D5E64_1(){unknown00=lbl_80492F94;}
};
struct UnknownGenObject800D5E64 : UnknownGenObject800D5E64_1 {
 UnknownGenRefMember unknown5C;
 char unknown60[8];
 inline ~UnknownGenObject800D5E64(){unknown00=igFileImagePng_vtable;}
};
extern "C" {
void *igFileImagePng_parentMeta(){return igFileImage_meta;}
}
#pragma pop
