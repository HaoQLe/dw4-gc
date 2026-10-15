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
void *igGaussianFilterFun_create(void *object){
 igGaussianFilterFun_arkRegister();
 return meta_createInstance(igGaussianFilterFun_meta,object);
}
void *igGaussianFilterFun_getMeta(){
 if(!igGaussianFilterFun_meta || !(reinterpret_cast<unsigned int *>(igGaussianFilterFun_meta)[0x24/4]&4)) igGaussianFilterFun_arkRegister();
 return igGaussianFilterFun_meta;
}
void *igGaussianFilterFun_vtableRead(){
 UnknownGenObject80149AF4_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_804A8FDC;
 object.unknown00=lbl_804A6BF0;
 object.unknown00=igGaussianFilterFun_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGaussianFilterFun_arkRegister(){
 meta_registerNow((int)igGaussianFilterFun_register);
}
void igGaussianFilterFun_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igGaussianFilterFun_meta,(int)igSerialFilterFun_register,(int)fn_80149C04,(int)igGaussianFilterFun_getMetaCall,(int)igGaussianFilterFun_className,32,(int)igGaussianFilterFun_vtableRead,(int)igGaussianFilterFun_fieldInit,0,0);
}
void *igGaussianFilterFun_getMetaCall(){return igGaussianFilterFun_getMeta();}
void *fn_80149C04(){return igSerialFilterFun_meta;}
}
#pragma pop
