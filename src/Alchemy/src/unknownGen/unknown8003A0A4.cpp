#include <unknownGen.h>
#include <meta/igMemoryDescriptorMetaField.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void *fn_80033638();
void fn_8003A418(void *);
void *fn_80053998(void *,void *);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void fn_8006588C(void *,void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igCompoundMetaField_register();
void igDataList_register();
extern char igMemoryDescriptorList_className[];
extern char igMemoryDescriptorMetaField_className[];
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char igMemoryDescriptorMetaField_vtable[];
extern char igMemoryDescriptorList_vtable[];
extern char lbl_80473730[];
extern char lbl_80474018[];
extern char lbl_8055D0A0[6];
extern char igMemoryDescriptorMetaField_dependencies[8];
extern void *igMemoryDescriptorList_meta;
extern char lbl_80562008[4];
extern void *igMemoryDescriptorMetaField_meta;
extern void *lbl_80562010;
extern void *lbl_805621F4;
void *igMemoryDescriptorList_getMeta();
void *igMemoryDescriptorList_vtableRead();
void igMemoryDescriptorList_arkRegister();
void igMemoryDescriptorList_register();
void *igMemoryDescriptorList_getMetaCall();
void fn_8003A0A4();
void *igMemoryDescriptorMetaField_getMeta();
void *igMemoryDescriptorMetaField_vtableRead();
void igMemoryDescriptorMetaField_arkRegister();
void igMemoryDescriptorMetaField_register();
void *igMemoryDescriptorMetaField_getMetaCall();
void *fn_8003A3BC();
}
struct UnknownGenObject80039F94_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8003A19C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003A19C(){fn_800638E0(this);}
};
struct UnknownGenObject8003A19C_0 : UnknownGenRoot8003A19C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8003A19C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8003A19C_1 : UnknownGenObject8003A19C_0 {
 char unknown10[36];
 UnknownGenRefMember unknown34;
 inline ~UnknownGenObject8003A19C_1(){unknown00=lbl_80474018;}
};
struct UnknownGenObject8003A19C : UnknownGenObject8003A19C_1 {
 char unknown38[8];
 inline ~UnknownGenObject8003A19C(){unknown00=igMemoryDescriptorMetaField_vtable;}
};
extern "C" {
void fn_8003A0A4(){
 void *meta=igMemoryDescriptorList_meta;
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>(fn_800658F8(meta,lbl_8055D0A0));
 void *type=fn_80053998(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C=fn_8003A3BC();
 field->unknown38=0;
 field->unknown1C=lbl_80562008;
 fn_8006588C(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}
}
#pragma pop
