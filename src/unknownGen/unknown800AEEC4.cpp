#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igTextureCoordSourceAttr_fieldInit();
void igVisualAttribute_register();
extern char lbl_804784C4[];
extern char lbl_8047AEE4[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805621F4;
extern void *lbl_80562538;
void *igTextureCoordSourceAttr_getMeta();
void *igTextureCoordSourceAttr_vtableRead();
void fn_800AEFCC();
void igTextureCoordSourceAttr_register();
void *igTextureCoordSourceAttr_getMetaCall();
}
struct UnknownGenObject800AEF74_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800AEEC4(void *object){
 fn_800AEFCC();
 return fn_8006546C(lbl_80562538,object);
}
void *fn_800AEEFC(){
 if(!lbl_80562538) lbl_80562538=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562538;
}
void *igTextureCoordSourceAttr_getMeta(){
 if(!lbl_80562538 || !(reinterpret_cast<unsigned int *>(lbl_80562538)[0x24/4]&4)) fn_800AEFCC();
 return lbl_80562538;
}
void *igTextureCoordSourceAttr_vtableRead(){
 UnknownGenObject800AEF74_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047AEE4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800AEFCC(){
 fn_80066188((int)igTextureCoordSourceAttr_register);
}
void igTextureCoordSourceAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562538,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTextureCoordSourceAttr_getMetaCall,(int)lbl_804784C4,24,(int)igTextureCoordSourceAttr_vtableRead,(int)igTextureCoordSourceAttr_fieldInit,0,0);
}
void *igTextureCoordSourceAttr_getMetaCall(){return igTextureCoordSourceAttr_getMeta();}
}
#pragma pop
