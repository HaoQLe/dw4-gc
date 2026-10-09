#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void igGaussianFilterFun_fieldInit();
void igSerialFilterFun_register();
extern char lbl_8049EF60[];
extern char lbl_804A6BF0[];
extern char lbl_804A8F78[];
extern char lbl_804A8FDC[];
extern void *lbl_805642A8;
extern void *lbl_805642D4;
void *igGaussianFilterFun_getMeta();
void *igGaussianFilterFun_vtableRead();
void fn_80149B4C();
void igGaussianFilterFun_register();
void *igGaussianFilterFun_getMetaCall();
void *fn_80149C04();
}
struct UnknownGenObject80149AF4_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_80149A80(void *object){
 fn_80149B4C();
 return fn_8006546C(lbl_805642A8,object);
}
void *igGaussianFilterFun_getMeta(){
 if(!lbl_805642A8 || !(reinterpret_cast<unsigned int *>(lbl_805642A8)[0x24/4]&4)) fn_80149B4C();
 return lbl_805642A8;
}
void *igGaussianFilterFun_vtableRead(){
 UnknownGenObject80149AF4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A8FDC;
 object.unknown00=lbl_804A6BF0;
 object.unknown00=lbl_804A8F78;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80149B4C(){
 fn_80066188((int)igGaussianFilterFun_register);
}
void igGaussianFilterFun_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805642A8,(int)igSerialFilterFun_register,(int)fn_80149C04,(int)igGaussianFilterFun_getMetaCall,(int)lbl_8049EF60,32,(int)igGaussianFilterFun_vtableRead,(int)igGaussianFilterFun_fieldInit,0,0);
}
void *igGaussianFilterFun_getMetaCall(){return igGaussianFilterFun_getMeta();}
void *fn_80149C04(){return lbl_805642D4;}
}
#pragma pop
