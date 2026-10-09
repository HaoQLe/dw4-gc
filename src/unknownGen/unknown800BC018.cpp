#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igTextureSwapAttr_fieldInit();
void igVisualAttribute_register();
extern char lbl_8047A168[];
extern char lbl_8047A394[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_80562A9C;
void *igTextureSwapAttr_getMeta();
void *igTextureSwapAttr_vtableRead();
void fn_800BC0E4();
void igTextureSwapAttr_register();
void *igTextureSwapAttr_getMetaCall();
}
struct UnknownGenObject800BC08C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800BC018(void *object){
 fn_800BC0E4();
 return fn_8006546C(lbl_80562A9C,object);
}
void *igTextureSwapAttr_getMeta(){
 if(!lbl_80562A9C || !(reinterpret_cast<unsigned int *>(lbl_80562A9C)[0x24/4]&4)) fn_800BC0E4();
 return lbl_80562A9C;
}
void *igTextureSwapAttr_vtableRead(){
 UnknownGenObject800BC08C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047A394;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BC0E4(){
 fn_80066188((int)igTextureSwapAttr_register);
}
void igTextureSwapAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562A9C,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTextureSwapAttr_getMetaCall,(int)lbl_8047A168,20,(int)igTextureSwapAttr_vtableRead,(int)igTextureSwapAttr_fieldInit,0,0);
}
void *igTextureSwapAttr_getMetaCall(){return igTextureSwapAttr_getMeta();}
}
#pragma pop
