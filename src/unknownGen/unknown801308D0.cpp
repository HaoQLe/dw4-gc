#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void igOptBase_register();
void igStripTriangles_fieldInit();
extern char igStripTriangles_className[];
extern char igStripTriangles_vtable[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern void *igStripTriangles_meta;
extern void *igOptBase_meta;
void *igStripTriangles_getMeta();
void *igStripTriangles_vtableRead();
void igStripTriangles_arkRegister();
void igStripTriangles_register();
void *igStripTriangles_getMetaCall();
void *fn_801308D0();
}
struct UnknownGenRoot80130728 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80130728(){igObject_construct(this);}
};
struct UnknownGenObject80130728_0 : UnknownGenRoot80130728 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80130728_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80130728 : UnknownGenObject80130728_0 {
 char unknown28[8];
 inline ~UnknownGenObject80130728(){unknown00=igStripTriangles_vtable;}
};
extern "C" {
void *fn_801308D0(){return igOptBase_meta;}
}
#pragma pop
