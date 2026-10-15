#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void igGaussianFilterFun_fieldInit();
void igSerialFilterFun_register();
extern char igGaussianFilterFun_className[];
extern char lbl_804A6BF0[];
extern char igGaussianFilterFun_vtable[];
extern char lbl_804A8FDC[];
extern void *igGaussianFilterFun_meta;
extern void *igSerialFilterFun_meta;
void *igGaussianFilterFun_getMeta();
void *igGaussianFilterFun_vtableRead();
void igGaussianFilterFun_arkRegister();
void igGaussianFilterFun_register();
void *igGaussianFilterFun_getMetaCall();
void *fn_80149C04();
}
struct UnknownGenObject80149AF4_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_80149C04(){return igSerialFilterFun_meta;}
}
#pragma pop
