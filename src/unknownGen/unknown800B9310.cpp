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
void igColorAttr_fieldInit();
void igVisualAttribute_register();
extern char lbl_80479BB0[];
extern char lbl_8047D024[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805621F4;
extern void *lbl_80562994;
void *igColorAttr_getMeta();
void *igColorAttr_vtableRead();
void fn_800B9418();
void igColorAttr_register();
void *igColorAttr_getMetaCall();
}
struct UnknownGenObject800B93C0_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_800B9310(void *object){
 fn_800B9418();
 return fn_8006546C(lbl_80562994,object);
}
void *fn_800B9348(){
 if(!lbl_80562994) lbl_80562994=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562994;
}
void *igColorAttr_getMeta(){
 if(!lbl_80562994 || !(reinterpret_cast<unsigned int *>(lbl_80562994)[0x24/4]&4)) fn_800B9418();
 return lbl_80562994;
}
void *igColorAttr_vtableRead(){
 UnknownGenObject800B93C0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047D024;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B9418(){
 fn_80066188((int)igColorAttr_register);
}
void igColorAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562994,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igColorAttr_getMetaCall,(int)lbl_80479BB0,32,(int)igColorAttr_vtableRead,(int)igColorAttr_fieldInit,0,0);
}
void *igColorAttr_getMetaCall(){return igColorAttr_getMeta();}
}
#pragma pop
